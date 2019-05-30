
#include <iostream>
#include <string>
#include <locale>

using namespace std;
class Tiles
{
public:
	string brand;
	int size_h;
	int size_w;
	int price;

	void GetData()
	{
		cout << "Enter brand name: ";
		cin >> brand;
		cout << "Enter hight: ";
		cin >> size_h;
		cout << "Enter weight: ";
		cin >> size_w;
		cout << "Enter price:";
		cin >> price;
		cout << "Brand name: " << brand << " Parametrs: " << size_h << "large, " << size_w << " weight, " << " price " << price << "$.";
	}
};