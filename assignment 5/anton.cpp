#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,n,p=0,k=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='A')
            p++;
            else
            k++;
    }
    if(p>k)
    {
        cout<<"Anton"<<endl;
    }
    else if(p<k)
    {
        cout<<"Danik"<<endl;
    }
    else
        cout<<"Friendship"<<endl;
}
