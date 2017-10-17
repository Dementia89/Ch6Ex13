#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double windChill(double windSpeed, double temp);
void userInput();

int main()
{
	cout << "This program will calculate Wind Chill based on wind speed and temperature." << endl;
	userInput();
    return 0;
}

double windChill(double windSpeed, double temp)
{
	return 35.74 + 0.6215 * temp - 35.75 * pow(windSpeed, 0.16) + 0.4275 * temp * pow(windSpeed, 0.16);
}

void userInput()
{
	double windSpeed;
	double temp;

	while (true)
	{
		cout << "What is the wind speed?" << endl;
		cin >> windSpeed;
		cout << endl << "What is the temperature in farenheit?" << endl;
		cin >> temp;
		cout << endl << "Wind Chill is: " << windChill(windSpeed, temp) << endl;
		cout << endl << "Round the merry-go-round we go again!" << endl;;
	}
}

