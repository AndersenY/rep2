#include <iostream>
using namespace std;
int sum(int a, int b);
int main()
{
    int a = 1;
    int b = 2;
    int c = sum(a, 20);
    cout << c;
}

int sum(int a, int b)
{
    return a + b;
}
int raznost(int a, int b)
{
    return a - b;
}