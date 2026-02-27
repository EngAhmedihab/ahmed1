#include <iostream>
using namespace std;
float p(int p, float n)
{
	int resault = 1;
	for (int i = 0; i < p; i++)
		resault *= n;
		return resault;
}
float fact(int n) {
	int resault = 1;
	for (int i = n; i > 0; i--)
		resault *= i;

	return resault;

}
float expo(float X, float limit);
void main () 
