#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    int i=0;

    while(i<n)
    {
    cout<<"Input element "<<i+1<<"=";
    cin>>arr[i];

    sum=sum+arr[i];
    i=i+1;

    }
    cout<<"Sum"<<"="<<sum;






return 0;
}
