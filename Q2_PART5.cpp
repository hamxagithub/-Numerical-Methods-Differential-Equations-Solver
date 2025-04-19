//#include <iostream>
//#include <iomanip>
//#include <cmath>
//using namespace std;
//
//double f1(double r, double N, double B)
//{
//	return ((-2 * N) / r + 2 / (3 * r) - (4 * B * r) / 3);
//}
//
//void euler_method(double(*f)(double, double, double), double r0, double N0, double h, double r_final, double B)
//{
//	double N = N0;
//	double r = r0;
//	double a = N0;
//	double b = r0;
//	cout << endl << endl << endl;
//	cout    << "EULER METHOD" << setw(50)<<"RUNG KUTTA METHOD" << endl;
//	cout << endl << endl << endl;
//	int num_steps = static_cast<int>((r_final - r0) / h);
//	for (int i = 0; i < num_steps; ++i)
//	{
//		N = N + h * f(r, N, B);
//		r = r + h;
//		double k1 = h * f(r, N, B);
//		double k2 = h * f(r + h / 2, N + k1 / 2, B);
//		double k3 = h * f(r + h / 2, N + k2 / 2, B);
//		double k4 = h * f(r + h, N + k3, B);
//		a = a + (k1 + 2 * k2 + 2 * k3 + k4) / 6;
//		b = b + h;
//		cout << "Iteration " << i + 1 << setprecision(4) << ": N(" << r << ") = "  << N << setw(25) << "Iteration " << i + 1 << setprecision(4) << ": N(" << b << ") = " << a << endl;
//	}
//}
//
//int main()
//{
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
//	cout << "Enter the value of B constant :";
//	cin >> B;
//	euler_method(f1, r0, N0, h, r_final, B);
//}
