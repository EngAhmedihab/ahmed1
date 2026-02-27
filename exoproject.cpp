#include <iostream>
using namespace std;
float p(int p, float n)
{
	int result = 1;
	for (int i = 0; i < p; i++)
		result *= n;
		return result;
}
float fact(int n) {
	int result = 1;
	for (int i = n; i > 0; i--)
		result *= i;

	return result;

}
float expo(float X, float limit) {

	float result =0.0 ;
	for (int i = limit; i >= 0; i--)
		result += p(limit, X) / fact(limit);

		return result;
}
void main()
{
	float i, X, result;

	cout << " please enter power " << endl;
	cin >> X;
	cout << " please enter limit " << endl;

	cin >> i;


	result = expo(X, i);
	cout << result << endl; 

}
