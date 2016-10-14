// gosh.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{   
	/*int a, b;
	a = 5, b = 1;
	cout << "a= 5, b= 1" << endl; 
	system("pause");
	int c;
	c = a;
	a = b;
	b = c;
	cout << "a= " << a  << " b= " << b  << endl;
	*/


	/*int a;
	cout << "Input number" << endl;
	cin >> a;
	bool b = (a % 5 == 0) && (a % 3 == 0) && (a % 2 == 0);
	cout << b << endl;
	*/

	/*int a, b;
	cout << "input a" << endl;
	cin >> a;
	cout << "input b" << endl;
	cin >> b;
	bool c = (a%b == 0);
	cout<< endl << c <<endl; 
	*/
	
    /*double R, S, P; // prepare for trouble and make it double ! 
	cout << "Input radius" << endl;
	cin >> R;
	const double PI = 3.14; 
	S = PI*R*R;
	cout <<"Surface= " <<  S << endl;
	P = 2 * PI*R;
	cout << "Circumference= " << P << endl;
	*/
	 
	/*int f,A,B,C;
	cout << "Input 3 digit number:" << endl;
	cin >> f;
	A = f / 100;
	cout << "A= " << A << endl;
	B = (f / 10)%10;
	cout << "B= " << B << endl;
	C = f % 10;
	cout << "C= " << C << endl;
	cout << "Sum A, B, C = " << A + B + C << endl;
	*/

	/*int f, A, B, C, D;
	cout << "Input 4 digit number:" << endl;
	cin >> f;
	A = f / 100;
	B = (f / 10) % 10;
	C = f % 10;
	D = f % 100;
	bool g = (A != B) && (A != C) && (A != D) && (B != C) && (B != D) && (C != D);
	cout << g << endl;
	*/

	int x, y;
	double r;
	cout << "Input x = ";
	cin >> x;
	cout << "Input y = ";
	cin >> y;
	r = sqrt(pow(x, 2) + pow(y, 2));
	cout << "r = " << r << endl;
	bool a = r < 6;
	cout << a << endl;

	system("pause");
    return 0;
}
