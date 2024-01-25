#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
    // //6-3
    // const double PI = 3.14159265389793238462;
    // double degree = PI / 4;

    // cout << "sin(45): " << sin(degree) << endl;
    // cout << "cos(45): " << cos(degree) << endl;
    // cout << "tan(45): " << tan(degree) << endl;

    //6-4
    const double PI = 3.14159265389793238462;
    int n =0;
    double s, peri, area;

    do
    {
        cout << "변의 개수를 입력하세요(4이상의 정수): ";
        cin >> n;
    } while (n < 4);

    do
    {
        cout << "변의 길이를 입력하세요: ";
        cin >> s;
    } while (s < 0.0);

    peri = n * s;
    area = (n * pow(s,2)) / (n * tan(PI / n));

    cout << "둘레: " << peri << endl;
    cout << "넓이: " << area << endl;

    
    
    return 0;
    
}