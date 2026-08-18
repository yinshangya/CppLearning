#include <iostream>
using namespace std;

int main()
{
    int distance;
    cout << "请输入以long为单位的距离："; 
    cin >> distance;
    cout << distance << " long = " << distance * 220 << " yard" << endl;
    return 0;
}