#include<iostream>
using namespace std;

int main()
{
	// declaration of simple variable
	int i;
	double d;

	//declaration of reference variable
	int &r = i;
	double &s = d;

	i=5;
	cout << "Value of i : " << i << endl;
	cout << "Value of i reference : " << r << endl;

	d = 12.5;
	cout << "Value of d : " << d << endl;
	cout << "Value of d reference : " << s << endl;

	return 0;
}
