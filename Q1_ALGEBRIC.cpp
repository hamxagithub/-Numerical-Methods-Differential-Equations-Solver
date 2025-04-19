//#include<iostream>
//#include<cmath>
//using namespace std;
//
//double differentiation(double* poly, int size, double x)
//{
//	double result = 0;
//	for (int i = 0; i < size; i += 2)
//	{
//		if (poly[i + 1] > 0)
//		{
//			result += poly[i] * poly[i + 1] * pow(x, poly[i + 1] - 1);
//		}
//	}
//	return result;
//}
//
//double NewtonRaphson(double* poly, int size, double a, double b, double h)
//{
//	double initialguess = (a + b) / 2.0;
//
//	cout << "Initial guess: " << initialguess << endl;
//	cout << "Interval [a, b]: [" << a << ", " << b << "]" << endl;
//
//	for (int i = 0; i < 100; i++)
//	{
//		double exp = 0, diff = 0;
//		for (int j = 0; j < size; j += 2)
//		{
//			exp += poly[j] * pow(initialguess, poly[j + 1]);
//		}
//		diff = differentiation(poly, size, initialguess);
//		if (diff == 0) {
//			cout << "Newton-Raphson method failed to converge." << endl;
//			return 0;
//		}
//		double nextguess = initialguess - (exp / diff);
//		cout << "Iteration " << i + 1 << ": x = " << nextguess << endl;
//		if (abs(nextguess - initialguess) < h)
//			return nextguess; // Root found
//		initialguess = nextguess;
//	}
//	cout << "Maximum iterations reached, no convergence." << endl;
//	return 0;
//}
//
//int main()
//{
//	int size;
//	cout << "Enter the size of the polynomial (number of terms): ";
//	cin >> size;
//
//	double* polynomial = new double[size * 2]; // Allocate memory for coefficients and exponents
//	cout << "Enter the coefficients and exponents of each term:" << endl;
//	for (int i = 0; i < size; ++i)
//	{
//		cout << "Coefficient " << i + 1 << ": ";
//		cin >> polynomial[i * 2];
//		cout << "Exponent " << i + 1 << ": ";
//		cin >> polynomial[i * 2 + 1];
//	}
//
//	double a, b, h;
//	cout << "Enter the interval [a, b] for the initial guess (separated by space): ";
//	cin >> a >> b;
//
//	cout << "Enter the tolerance (h): ";
//	cin >> h;
//
//	double root = NewtonRaphson(polynomial, size * 2, a, b, h); // Pass a, b, and h directly
//	cout << "Root found by Newton-Raphson method: " << root << endl;
//
//	delete[] polynomial;
//
//	return 0;
//}
