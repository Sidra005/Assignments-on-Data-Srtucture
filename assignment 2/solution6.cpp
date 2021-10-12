
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

        cin>>arr[i];


    }

 for(i=0;i<n;i++)
    {
        while(i<n-1&&arr[i]==arr[i+1])
            i++;
        cout<<arr[i]<<" ";}
        return 0;
        }
