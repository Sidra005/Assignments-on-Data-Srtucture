//Input a string and calculate whether the string length is divisible by 3 or not.

#include<iostream>

#include<string>

using namespace std;

int main()
{
    int n,result;
    string str;
    cout<<"Input any word as string value"<<endl;
    getline(cin,str);
    cout<<str.size()<<endl;

    n=str.size();
    result=(n%3);
    cout<<result<<endl;
    if(n%3==0)
    {

        cout<<"The length of string is divisible by 3."<<endl;
    }
    else
        return 0;
}
