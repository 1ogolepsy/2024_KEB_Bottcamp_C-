#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    int x =10;
    double y = 13.5;
    char c = 'a';
    void* p = &x;

    cout << *(int*)p;

    return 0;
}