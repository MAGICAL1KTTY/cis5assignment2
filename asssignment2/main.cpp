#include <iostream>
#include <iomanip>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	string name;
	unsigned int age;
	double height = 0;
	double weight = 0;
	unsigned int score;

	cout << "Name? ";
	cin >> name;
	cout << endl;

	cout << "Age? ";
	cin >> age;
	cout << endl;

	cout << "Height in meters? ";
	cin >> height;
	if (height < 0) {
		cout << "Please enter a positive number for height. ";
		cin >> height;
	}
	cout << endl;

	cout << "Weight in kilograms? ";
	cin >> weight;
	if (weight < 0) {
		cout << "Please enter a positive number for weight. ";
		cin >> weight;
	}
	cout << endl;

	cout << "Test score? ";
	cin >> score;
	cout << endl;

	double bmi = weight / (height * height);
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

	string grade;
	if (score >= 90 && score <= 100) {
		grade = "A";
	} else if (score >= 80 && score < 90) {
		grade = "B";
	} else if (score >= 70 && score < 80) {
		grade = "C";
	} else if (score >= 60 && score < 70) {
		grade = "D";
	} else {
		grade = "F";
	}

	cout << "Hello, " << name << "! " << "You're " << age << " years old with a BMI of " << std::fixed << std::setprecision(2) << bmi << " (" << category << "), and you scored a " << grade << " on your test.";
	return 0;
}