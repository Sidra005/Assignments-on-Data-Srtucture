

#include<iostream>

using namespace std;
int main()
{
    int arr1[50],arr2[50],merge[100];
    int n1,n2,n,i,k;
    cout<<"Enter the 1st size ";
    cin>>n1;
    cout<<"Enter the 1st elements  ";
    for(i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the 2nd array size ";
    cin>>n2;
    cout<<"Enter the 2nd elements ";
    for(i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    cout<<"Merging the two array :";
    for(i=0;i<n1;i++)
    {
        merge[i]=arr1[i];

    }
    n=n1+n2;
    for(i=0,k=n1;k<n&&i<n2;i++,k++)
    {
        merge[k]=arr2[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<merge[i];
    }

}
