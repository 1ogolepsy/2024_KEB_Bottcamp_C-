#include <iostream>
#include <string>
using namespace std;

// 클래스 안에서 함수 정의하기
class Circle
{
    private:
        double radius;
    public:
        double getRadius () const
        {
            return radius;
        }
        void setRadius (double value);

};

void Circle::setRadius(double value)
{
    radius = value;
}

int main()
{
    Circle circle1;
    circle1.setRadius(10.0);
    cout << circle1.getRadius() << endl;
    

    return 0;
}