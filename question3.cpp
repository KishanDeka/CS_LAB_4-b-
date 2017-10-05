#include <iostream>
using namespace std;

void printeven(int l, int u)
{   if(l<=u )
        { if (l%2==0){cout<< l<<", ";};
         printeven(l + 1, u);}
}
void printodd(int l, int u)
{   if(l<=u )
        { if (l%2!=0){cout<< l<<", ";};
         printodd(l + 1, u);}
}
int main()
{
    int x, y;
    char ch;
    cout << "enter the lower limit : ";
    cin>> y;
    cout<< "enter the upper limit : ";
    cin >> x;
    cout << "To print odd numbers type 'o' or to print even number type 'e' : "<<endl;
    cin >> ch;
    if (ch=='o')
        {  cout<<"All odd numbers from " <<y<<" to "<<x<<" are :"<<endl;
            printodd(y, x);}
    if (ch=='e')
        {   cout<<"All even numbers from " <<y<<" to "<<x<<" are :"<<endl;
            printeven(y,x);}

    return 0;
}
