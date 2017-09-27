#include <iostream>
using namespace std;
int hcf(int a, int b )
{ if (b!=0)
          return hcf(b,a%b);
  else
      return a;

}
int main()
{
    int m, n, lcm;
    cout << "enter a positive integer : "<<endl;
    cin>> m>>n;
    lcm=(m*n)/hcf(m,n);
    cout <<"The LCM of the numbers is : "<<lcm;


return 0;
}
