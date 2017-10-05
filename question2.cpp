#include <iostream>
using namespace std;

void print(int u)
{   if(u>=1)
       {cout<< u<<", ";
         print(u-1);}
}
int main()
{
    int  y;
    cout << "enter the number : ";
    cin>> y;
    print(y);

    return 0;
}
