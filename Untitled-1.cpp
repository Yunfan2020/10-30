#include <iostream>
using namespace std;

void swap(int a, int b);

int main()
{
    int one = 2;
    int two = 1;
    swap(one, two)；
    cout << "One: " << one << endl;
    cout << "Two: " << two << endl;
    return 0;
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
