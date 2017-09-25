#include <iostream>
using namespace std;

int sum(int u)
{   if(u!=1)
           return u+sum(u-1);
    else
        return 1;
}
int main()
{
    int x, y;

    cout << "enter the last term of summation : ";
    cin>> x;
    y=sum(x);
    cout <<"the sum of all natural numbers upto "<<x<<" is = "<<y;

    return 0;
}
