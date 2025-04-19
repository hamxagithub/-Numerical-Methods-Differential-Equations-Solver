//#include <iostream>
//#include <iomanip>
//#include <cmath>
//using namespace std;
//
//double f1(double r, double N, double B)
//{
//	return ((-2 * N) / r + 2 / (3 * r) - (4 * B * r) / 3);
//}
//double euler_method(double(*f)(double, double, double), double r0, double N0, double h, double r_final, double B)
//{
//	double N = N0;
//	double r = r0;
//	int num_steps = static_cast<int>((r_final - r0) / h);
//	for (int i = 0; i < num_steps; ++i) {
//
//		N = N + h * f(r, N, B);
//		r = r + h;
//		cout << "Iteration " << i + 1 << ": N(" << r << ") = " << N << endl;
//	}
//	return N;
//}
//int main() {
//	double N0;
//	double r0;
//	double h;
//	double r_final;
//	double B;
//	cout << "-----------------****************The given Polynomial Function : ((-2 * N) / r + 2 / (3 * r) - (4 * B * r) / 3)   ****************-----------------" << endl;
//	cout << "Enter the initial value of independent variable of r : ";
//	cin >> r0;
//	cout << "Enter the initial value of dependent variable of N : ";
//	cin >> N0;
//	cout << "Enter the step size h : ";
//	cin >> h;
//	cout << "Enter the final value of independent variable of r : ";
//	cin >> r_final;
//	cout << "Enter the value of B constant :" ;
//	cin >> B;
//	double N_final = euler_method(f1, r0, N0, h, r_final, B);
//	cout << "Final value of N at r = " << fixed << setprecision(4) << r_final << " is " << N_final << endl;

//}
