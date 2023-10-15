#include <iostream>
#include <cmath>

using namespace std;
int main() {
	int k, N, i;
	double S;

	S = 0;
	i = 1;
	while (i <= 15)
	{
		S += (sin(10 * i) + cos(10 / i)) / sqrt(i);
		i++;
	}
	cout << "S1= "<< S << endl;

	S = 0;
	i = 1;

	do 
	{
		S += (sin(10 * i) + cos(10 / i)) / sqrt(i);
		i++;
	} while (i <= 15);
	cout << "S2= "<< S << endl;

	S = 0;
	for (i = 1; i <= 15; i++) 
	{
		S += (sin(10 * i) + cos(10 / i)) / sqrt(i);
	}
	cout << "S3= " << S << endl;

	S = 0;
	for (i = 15; i >= 1; i--)
	{
		S += (sin(10 * i) + cos(10 / i)) / sqrt(i);
	}
	cout << "S4= " << S << endl;
	return 0;
}
