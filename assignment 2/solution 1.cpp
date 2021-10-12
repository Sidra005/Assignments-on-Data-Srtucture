//Write a program to store n elements in an array and print it.
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cout<<"Input element "<<i+1<<"=";
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<"\n \n index " <<i<<"="<<arr[i]<<endl;
    }

return 0;
}
