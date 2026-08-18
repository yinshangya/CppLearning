#include <iostream>
using namespace std;

double lightYearsToAstronomicalUnit(double);

int main()
{
    double lightYears;
    cout << "Enter the number of light years: ";
    cin >>lightYears;
    cout << lightYears << " light years = " << lightYearsToAstronomicalUnit(lightYears) << " astronomical units." << endl;
    return 0;
}

double lightYearsToAstronomicalUnit(double lightYears)
{
    return lightYears * 63240;
}