#include<iostream>
using namespace std;
int main()
{
    int arr[25],key[25];
    int i,j,n,cnt;
    cout<<"Enter the array size :";
    cin>>n;
    cout<<"Enter the elements of array :";
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
        key[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        cnt=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
                {cnt++;
                key[j]=0;

                }
        }
        if(key[i]!=0){
            key[i]=cnt;

        }
    }
    cout<<"\n Same number in array:";

    for(i=0;i<n;i++)
    {
        if(key[i]!=0)
        {
            cout<<"\n frequency occur "<<arr[i]<<" for ="<<key[i]<<"times";
        }

}}
