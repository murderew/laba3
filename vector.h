#include <iostream>
#include <string>

using namespace std;

class Vector {

private:
	double x, y, x1, y1, r, x2, y2;
	char c;

public:

	void module() 
	{
		cout << "Enter coordinates " << endl;
		cin >> x >> y;
		cout << endl;
		cout << "Enter coordinates " << endl;
		cin >> x >> y;
		cout << endl;
		r = sqrt(pow(x, 2) + pow(y, 2));
		cout << "The modulus of your vector is :" << r << endl;
		cout << "\n";
	}
	void Vecplus() 
	{
		cout << "Enter fitst vector " << endl;
		cin >> x1 >> y1;
		cout << "Enter second vector " << endl;
		cin >> x2 >> y2;
		cout << " Enter operation : (+ , - )" << endl;
		cin >> c;
		switch (c) {
		case '+':
			x = x1 + x2;
			y = y1 + y2;
			break;
		case '-':
			x = x2 - x1;
			y = y2 - y1;
			break;
		default: cout << "Error ";

		}
		cout << " Vector = : " << "(" << x << "," << y << ")" << "\n";
	}
};