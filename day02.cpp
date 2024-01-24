#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    double number = 0.0, fractPart = 0.0;
    int intPart = 0;

    cout << "부동 소수점 입력: ";
    cin >> number;

    intPart = static_cast<int>(number);
    fractPart = number - intPart;

    cout << fixed << showpoint << setprecision(2);
    cout << "원래 값: " << number << endl;
    cout << "정수 부분: " << intPart << endl;
    cout << "소수점 아래 부분: " << fractPart;
    
    return 0;
}