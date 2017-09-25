#include <iostream>
using namespace std;

void print(int l, int u)
{   if(l < u)
    cout<< l<<", ";
    print(l + 1, u);
}
int main()
{
    int x, y;

    cout << "enter the number : ";
    cin>> x;
    y=1;
    print(y, x);

    return 0;
}
