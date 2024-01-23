#include <iostream>
using namespace std;

int main()
{
    int num1;
    double sum;

    cout << "첫번째 숫자 입력: ";
    cin >> num1;
    const double PI = 3.1415;

    sum = num1 + PI;

    cout << "두 숫자의 합: " << sum;
    
    return 0;

}