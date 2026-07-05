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
	int score;

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
	cin >> score;
	cout << endl;

	double bmi = weight / (height * height); //condition if else statements for range of bmi and allat
	string category;
	if (bmi >= 30) {
		category = "Obese";
	} else if (bmi >= 25 && bmi < 30) {
		category = "Overweight";
	} else if (bmi >= 18.5 && bmi < 25) {
		category = "Normal weight";
	} else {
		category = "Underweight";
	}

	
	if (score >= 90 && score <= 100) {
		string grade = "A";
	} else if (score >= 80 && score < 90) {
		string grade = "B";
	} else if (score >= 70 && score < 80) {
		string grade = "C";
	} else if (score >= 60 && score < 70) {
		string grade = "D";
	} else {
		string grade = "F";
	}

	return 0;

}