#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	string name;
	int age;
	double height;
	double weight;
	int testScore;

	cout << "Name? ";
	cin >> name;
	cout << endl;

	cout << "Age? ";
	cin >> age;
	cout << endl;

	cout << "Height in meters? ";
	cin >> height;
	cout << endl;

	cout << "Weight in kilograms? ";
	cin >> weight;
	cout << endl;

	cout << "Test score? ";
	cin >> testScore;
	cout << endl;

	double bmi = weight / (height * height); //condition if else statements for range of bmi and allat
	int grade; //condition if else statements for range of test score and allat


	return 0;

}