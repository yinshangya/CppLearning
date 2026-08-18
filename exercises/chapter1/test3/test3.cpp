#include <iostream>
using namespace std;

void printMice();
void printRun();

int main()
{
    printMice();
    printMice();
    printRun();
    printRun();
    return 0;
}

void printMice()
{
    cout << "Three blind mice" << endl;
}

void printRun()
{
    cout << "See how they run" << endl;
}