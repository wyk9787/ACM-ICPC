//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int a, b, c, kase=0;
//	while (scanf_s("%d%d%d", &a, &b, &c) == 3 && (a || b || c))
//	{
//		double decimal;
//		decimal = (double)a / b;
//		double p = pow(10.0, c);
//		decimal = (int)((decimal * p)+0.5) / p;
//		printf("Case %d: %g\n", ++kase, decimal);
//	}
//}

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int a, b, c;
	cout << "Input a, b: ";
	cin >> a >> b;
	cout << "Input c:";
	cin >> c;
	cout << setprecision(c);
	cout << (double)a / b << endl;

	return 0;
}