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
    if (x>=1)
       { y=sum(x);
         cout <<"the sum of all natural numbers upto "<<x<<" is = "<<y;}
    else {cout<<x<<" is not a natural number.";}

    return 0;
}
