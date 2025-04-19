//#include <iostream>
//#include <iomanip>
//#include <cmath>
//using namespace std;
//double f1(double x, double y)
//{
//	return y + x * y + x * x;
//}
//double rungeKutta4(double(*f)(double, double), double x0, double y0, double h, double x_final) {
//	double y = y0;
//	double x = x0;
//	int num_steps = static_cast<int>((x_final - x0) / h);
//	for (int i = 0; i < num_steps; ++i) {
//		double k1 = h * f(x, y);
//		double k2 = h * f(x + h / 2, y + k1 / 2);
//		double k3 = h * f(x + h / 2, y + k2 / 2);
//		double k4 = h * f(x + h, y + k3);
//		y = y + (k1 + 2 * k2 + 2 * k3 + k4) / 6;
//		x = x + h;
//		cout << "Iteration " << i + 1 << ": y(" << fixed << setprecision(4) << x << ") = " << y << endl;
//	}
//	return y;
//}
//
//int main() {
//	double y0;
//	double x0;
//	double h;
//	double x_final;
//    cout << "-----------------****************The given Polynomial Function : y + x * y + x * x   ****************-----------------" << endl;
//	cout << "Enter the initial value of independent variable of X : ";
//	cin >> x0;
//	cout << "Enter the initial value of dependent variable of Y : ";
//	cin >> y0;
//	cout << "Enter the step size h : ";
//	cin >> h;
//	cout << "Enter the final value of independent variable of X : ";
//	cin >> x_final;
//	double y_final = rungeKutta4(f1, x0, y0, h, x_final);
//	cout << "Final value of y at x = " << fixed << setprecision(4) << x_final << " is " << y_final << endl;
//}
