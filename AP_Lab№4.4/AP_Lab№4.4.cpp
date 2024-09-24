#define _USE_MATH_DEFINES

#include <iostream> 
#include <iomanip> 
#include <cmath> 
using namespace std;
int main()
{
	double x, xp, xk, dx, y, R;
	cout << "R = "; cin >> R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -1 * R)
			y = R;
		else
			if (x > -1 * R && x <= R)
				y = R - sqrt(R * R - (x * x));
			else
				if (x > R && x < 6)
					y = (((9 * R) - (3 * x) - (R * x)) / (6 - R));
				else
					y = x - 9;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
