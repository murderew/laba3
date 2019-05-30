
#include <iostream>
#include <string>
#include <locale>

using namespace std;

class Child
{
	public:
		string name;
		string secondname;
		int years;
			
			void setChild()
			{
				cout << "Enter name: ";
				cin >> name;
				cout << "Enter secodname: ";
				cin >> secondname;
				cout << "Enter age: ";
				cin >> years;
				cout << endl;
				cout << " Child with name  " << name << "  secondname  " << secondname << "  age  " << years;
			}
};