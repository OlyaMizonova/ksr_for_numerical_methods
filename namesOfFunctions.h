#pragma once

#define _USE_MATH_DEFINES
#include<cmath>
#include<iostream>
#include<vector>
using namespace std;


double g(double t, double x);

vector<vector<double>> differenceShceme(int n, int m, double T);

vector<double> get_grid(double step, int N);

vector<double> sweepMethod(int n, int m, double mu1, double mu2, vector<double>Phi_ij, double T);

