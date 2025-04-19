//#include<iostream>
//#include<cmath>
//using namespace std;
//
//double f(double x)
//{
//	return exp(-x) - sin(x);
//}
//
//double df(double x)
//{
//	return -exp(-x) - cos(x);
//}
//
//double NewtonRaphson(double x0, double eps, int max_iter)
//{
//	double x = x0;
//	for (int i = 0; i < max_iter; i++)
//	{
//		double fx = f(x);
//		double dfx = df(x);
//		if (dfx == 0)
//		{
//			return 0;
//		}
//		double y= x - fx / dfx;
//		cout << "Iteration " << i + 1 << " : f(" << x <<  ")  =  " << y<< endl;
//		if (abs(y- x) < eps)
//		{
//			return y;
//		}
//		x = y;
//	}
//
//	return 0;
//}
//
//int main()
//{
//	double x0 = 0.0; 
//	double eps = 1e-6; 
//	int max_iter = 100; 
//
//	double root = NewtonRaphson(x0, eps, max_iter);
//	cout << "Root found by Newton-Raphson method: " << root << endl;
//}
