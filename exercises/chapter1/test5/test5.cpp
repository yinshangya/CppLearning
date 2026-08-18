#include <iostream>
using namespace std;

double celsiusToFahrenheit(double);

int main()
{
    double celsius;
    cout << "Please enter a Celsius value: ";
    cin >> celsius;
    cout << celsius << " degrees Celsius is " << celsiusToFahrenheit(celsius) << " degrees Fahrenheit." << endl;
    return 0;
}

double celsiusToFahrenheit(double celsius)
{
    return (celsius * 1.8) + 32.0;
}