//#include <iostream>
//#include <iomanip>
//#include <cmath>
//using namespace std;
//
//double f1(double x, double y, double z) {
//	return z;
//}
//
//double f2(double x, double y, double z) {
//	return ((-12*z)-(36*y));
//}
//
//double rungeKutta4(double(*f1)(double, double, double), double(*f2)(double, double, double), double x0, double y0, double z0, double h, double x_final) {
//	double y = y0;
//	double z = z0;
//	double x = x0;
//	int num_steps = static_cast<int>((x_final - x0) / h);
//	for (int i = 0; i < num_steps; ++i) {
//		double k1 = h * f1(x, y, z);
//		double l1 = h * f2(x, y, z);
//		double k2 = h * f1(x + h / 2, y + k1 / 2, z + l1 / 2);
//		double l2 = h * f2(x + h / 2, y + k1 / 2, z + l1 / 2);
//		double k3 = h * f1(x + h / 2, y + k2 / 2, z + l2 / 2);
//		double l3 = h * f2(x + h / 2, y + k2 / 2, z + l2 / 2);
//		double k4 = h * f1(x + h, y + k3, z + l3);
//		double l4 = h * f2(x + h, y + k3, z + l3);
//		y = y + (k1 + 2 * k2 + 2 * k3 + k4) / 6;
//		z = z + (l1 + 2 * l2 + 2 * l3 + l4) / 6;
//		x = x + h;
//		cout << "Iteration " << i + 1 << ": y(" << fixed << setprecision(4) << x << ") = " << y << ", z(" << x << ") = " << z << endl;
//	}
//	return y;
//}
//
//int main() {
//	double y0;
//	double z0;
//	double x0;
//	double h;
//	double x_final;
//	cout << "-----------------****************The given Second Order Differential Equation :((-12*z)-(36*y))  ****************-----------------" << endl;
//	cout << "Enter the initial value of independent variable of X : ";
//	cin >> x0;
//	cout << "Enter the initial value of dependent variable of Y : ";
//	cin >> y0;
//	cout << "Enter the initial value of dependent variable of Y' (dy/dx) : ";
//	cin >> z0;
//	cout << "Enter the step size h : ";
//	cin >> h;
//	cout << "Enter the final value of independent variable of X : ";
//	cin >> x_final;
//	double y_final = rungeKutta4(f1, f2, x0, y0, z0, h, x_final);
//	
//
//}
