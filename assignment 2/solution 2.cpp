#include<iostream>
using namespace std;
int main()
{
   int n,i;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    int temp;
    for(i=0;i<n;i++)
    {
         cout<<"Input the elements:";
        cin>>arr[i];
    }
    if (n%2==0)
    {
        for(i=0;i<n/2;i++)
        {
            temp=arr[n-1-i];
            arr[n-1-i]=arr[i];
            arr[i]=temp;
        }
        cout<<"Reverse array is =";
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
    }
     else
        {
            for(i=0;i<(n-1)/2;i++)
            {
                temp=arr[n-1-i];
                arr[n-1-i]=arr[i];
                arr[i]=temp;
            }
        cout<<"Reverse array is =\n";
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
    }

    return 0;
}
