#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    int array[50] = {1,1,2,1,1,1,1,1,1,1};
    int size = 10;
    for(int i = 3; i < size; i++)
    {
        array[i-1] = array[i];
    }
    size--;
    cout << array[9];
    return 0;
}