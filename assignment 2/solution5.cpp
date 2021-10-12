//Write a program to count a total number of duplicate elements in an array.

#include<iostream>
using namespace std;
int main()
{
    int n,i,j,count=0;
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
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                break;
            }
        }
    }
    cout<<"Total number of duplicate elements found in array:"<<count ;
}
