//lab_5.3

#include <iostream>
#include <cmath>

using namespace std;

double s(const double x);

int main() 
{
	double rp, rk, z;
	int n;

	cout << " rp = "; cin >> rp;
	cout << " rk = "; cin >> rk;
	cout << " n = "; cin >> n;

	double dr = (rk - rp) / n;

	double r = rp;
	while (r <= rk) 
	{
		z = s(sqrt(r) + 1) - s(sqrt(r) - 1) * s(sqrt(r) - 1) + 1;
		cout << r << "  " << z << endl;
		r += dr;
	}
	return 0;
}

double s(const double x) 
{
	if (abs(x) >= 1)
		return (1 + x * x + sqrt(abs(sin(x)))) / (sin(2 * x * x) * sin(2 * x * x) + 1);
	else {
		double S1=0;
		int i = 0;
		do {
			i++;
			 double R= pow(x,i)/( i * (i - 1));
			 S1 += R;
		} while (i <= 5);
		double S2 = 0;
		int k = 1;
		do{
			k++;
			double R1 = pow(x, k) / (k * (k - 1));
			S2 += R1;
		} while (k <= 6);
		double S;
		S = S1 + S2;
		return S;
	}
}