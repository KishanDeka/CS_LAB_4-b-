#include <iostream>
using namespace std;

int b, e, x, y, a;

int power(int x, int y)
{   if (y!=1)
           return (x*power(x,y-1));
    else
        return 1;
}
int main ()
{
    cout << "enter the base and exponent respectively : "<<endl;
    cin >> b >> e;
    a=b*power(b,e);
    cout << b <<" to the power of "<<e<<" = "<<a;
    return 0;
}
