#include <iostream>
using namespace std;

int sum(int u)
{   if(u!=0 && u%2==0)
        return u+sum(u-2);
    else if(u!=0 && u%2!=0)
        return (u-1)+sum(u-3);
    else
        return 0;
}
int main()
{
    int x, y;

    cout << "enter the last term of summation : ";
    cin>> x;
    y=sum(x);
    cout <<"the sum of all even natural numbers upto "<<x<<" is = "<<y;
return 0;
}
