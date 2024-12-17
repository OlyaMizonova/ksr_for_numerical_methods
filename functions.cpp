#include"namesOfFunctions.h"


double g(double t, double x) {
	return exp(-t) * sin(7 * M_PI * x) + 1.;
}

vector<double> get_grid(double step, int N) {
	vector<double>res;
	double yi = 0;
	for (int i = 0; i < N; i++) {
		res.push_back(yi);
		yi += step;
	}
	return res;
}

vector<double> sweepMethod(int n, int m, double mu1, double mu2, vector<double>Phi_ij, double T) {
	vector<double> result(n + 1); // ������ ��� ������ ����������
	result[0] = mu1; // ����� ��������� �������
	result[n] = mu2; //������ ��������� �������
	vector<double> alpha(n), beta(n); //������� ��� �������� ������������� ����� � ����
	alpha[0] = 0;
	beta[0] = mu1;
	double h = 1. / n;
	double tau = T / m;
	//������ ��� ��������
	double Ai = 4 * tau / pow(h, 2);
	double Bi = Ai;
	double Ci = 1 + 8 * tau / pow(h, 2);
	for (int i = 1; i < n; i++) {//� ����� � ���� ������� �������� �� 1
		alpha[i] = Bi / (Ci - Ai * alpha[i - 1]);
		beta[i] = (Phi_ij[i - 1] + Ai * beta[i - 1]) / (Ci - Ai * alpha[i - 1]);
	}

	//�������� ��� ��������
	for (int i = n - 1; i > 0; i--) {
		result[i] = alpha[i] * result[i + 1] + beta[i];
	}
	return result;
}

vector<vector<double>> differenceShceme(int n, int m, double T) {
	double h = 1. / n;
	double tau = T / m;
	vector<vector<double>> res; //v
	vector<double>new_raw(n + 1);
	vector<double>xi = get_grid(h, n + 1);
	vector<double>ti = get_grid(tau, m + 1);
	vector<double> Phi_ij(n);

	for (int k = 0; k < n + 1; k++) { // ��������� ������� ���� � ������� ��������� �������
		new_raw[k] = (1. - pow(xi[k], 2));
	}

	res.push_back(new_raw);

	for (int j = 1; j < m + 1; j++) {
		for (int i = 1; i <= n; i++) {//������� ����������� fiij
			Phi_ij[i - 1] = -(res[j - 1][i] + g(ti[j], xi[i]) * tau);
		}
		new_raw = sweepMethod(n, m, cos(ti[j]), sin(4 * ti[j]), Phi_ij,T);
		res.push_back(new_raw);
	}
	return res;
}
