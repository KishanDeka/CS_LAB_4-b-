#include <iostream>
using namespace std;

int sum(int n)
{   if (n>0)
           return (n%10)+sum(n/10);

}
int main()
{
    int x;

    cout << "enter a positive integer : ";
    cin>> x;
    cout << "The sum of the digits of "<<x<<" is : "<<sum(x);

return 0;
}
