#include <iostream>
#include <string>

using namespace std;

class Complex {
	private:

		double c1, c2;
		double x, y;

	public:
		void setcomplex() {
			cout << "Enter real  :" << endl;
			cin >> c1;
			cout << "Enter imaginary part :" << endl;
			cin >> c2;
			x = sqrt(pow(c1, 2) + pow(c2, 2));
			y = atan(c2 / c1);
			cout << "Your module " << x << endl;
			cout << "argument " << y << ";";
			cout << "\n";
		}

};