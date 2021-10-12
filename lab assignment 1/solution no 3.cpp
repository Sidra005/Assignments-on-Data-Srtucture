//Print summation of numbers(1-n) using recursion.
#include<iostream>
using namespace std;

int fun(int num);
int main()
{
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    cout<<"Ans is ="<<fun(n)<<endl;
    return 0;
}

int fun(int num)
{
    if ( num!=0)
    {
        return num+ fun(num-1);
    }
    else if(num==1)
    {
        return num;
    }
}
