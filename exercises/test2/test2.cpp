#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 一个简单的加法函数
int add(int a, int b) {
    int result = a + b;  // 在这里设置断点，查看 a、b、result 的值
    return result;
}

int main() {
    // 基本变量测试
    int x = 5;
    int y = 10;
    int z = add(x, y);   // 在这里设置断点，观察函数调用过程
    
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = x + y = " << z << endl;
    
    // 循环测试
    vector<int> numbers = {1, 2, 3, 4, 5};
    int sum = 0;
    
    for (int i = 0; i < numbers.size(); i++) {  // 在这里设置断点，观察循环执行过程
        sum += numbers[i];
        cout << "i = " << i << ", numbers[" << i << "] = " << numbers[i] << ", sum = " << sum << endl;
    }
    
    cout << "所有数字的和为: " << sum << endl;
    
    // 字符串测试
    string greeting = "Hello, Debugger!";
    cout << greeting << endl;
    
    // 条件分支测试
    int score = 85;
    string grade;
    
    if (score >= 90) {          // 在这里设置断点，观察条件判断过程
        grade = "A";
    } else if (score >= 80) {
        grade = "B";
    } else if (score >= 70) {
        grade = "C";
    } else {
        grade = "F";
    }
    
    cout << "分数: " << score << ", 等级: " << grade << endl;
    
    return 0;
}