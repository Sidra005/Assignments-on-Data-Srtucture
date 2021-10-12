// Make a gcd function with prototype to calculate gcd of a,b.
#include <iostream>
using namespace std;

int gcd(int a, int b);
int main()
{
    int a , b;
    cout<<"Enter the value of a & b"<<endl;
    cin>>a>>b;
    cout<<"Value of a ="<<a<<endl;
    cout<<"Value of b ="<<b<<endl;
    cout<<endl;
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a, b);
    return 0;
}
int gcd(int a, int b)
{
    if(b!=0)

        return gcd(b,a%b);

    else
        return a;
}
