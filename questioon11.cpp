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
    int m, n;
    cout << "enter a positive integer : "<<endl;
    cin>> m>>n;
    cout <<"The HCF of the numbers is : "<<hcf(m,n);


return 0;
}
