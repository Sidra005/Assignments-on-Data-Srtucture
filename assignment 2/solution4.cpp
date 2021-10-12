//Write a program to copy elements of one array to another array and print the copied array.

#include<iostream>
using namespace std;
int main()
{
     int n,i;

    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr1[n],arr2[n];


    for(i=0;i<n;i++)
    {
        cout<<"Input element "<<i+1<<"=";
        cin>>arr1[i];


    }
    for(i=0;i<n;i++)
    {
        arr2[i]=arr1[i];

    }
    cout<<"Elements of array are = ";
    for(i=0;i<n;i++)
    {
        cout<<arr1[i]<<"";

    }

cout<<"\nElements of copied array are = ";
for(i=0;i<n;i++)
    {
        cout<<arr2[i]<<"";

    }
    return 0;
}
