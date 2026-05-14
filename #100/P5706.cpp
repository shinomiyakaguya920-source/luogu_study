#include<iostream>
#include<bits/stdc++.h>//记住这个头文件，包含了几乎所有的C++标准库头文件，使用它可以方便地使用各种数据结构和算法，但要注意它可能会增加编译时间。
using namespace std;
int main ()
{
    double a;
    int b;

    cin >> a >> b;

    double c = a / b;
    int d = b * 2;

    cout << setprecision(3) << fixed << c << endl;
    //注意记住怎样设置输出的精度，尤其是小数点后面的位数
    cout << d;

    return 0;
}