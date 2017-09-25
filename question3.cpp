#include <iostream>
using namespace std;

void print(int l, int u)
{   if(l<u && l%2==0)
    cout<< l<<", ";
    print(l + 1, u);
}
int main()
{
    int x, y;

    cout << "enter the lower limit : ";
    cin>> y;
    cout<< "enter the upper limit : ";
    cin >> x;
    cout << "the even number between "<<y<<" and "<<x<<" are :"<<endl;
    print(y, x);

    return 0;
}
