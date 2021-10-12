#include<bits/stdc++.h>
using namespace std;

struct StudentInfo
{
    char name[30];
    int id;
    char address[50];
    float marks;

}j;




int main()
{
  int n,i;
cout<<"Enter the number of total students:";
cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Student"<<i+1<<":"<<endl;
        cout<<"Enter Name:";
        cin>>j.name;
        cout<<"Enter id:";
        cin>>j.id;
        cout<<"Enter address:";
        cin>>j.address;
        cout<<"Enter marks:";
        cin>>j.marks;
    }
    for(i=0;i<n;i++)
    {
        cout<<"\nStudent"<<i+1<<":"<<endl;
        cout<<"\nName:"<<j.name<<endl;
        cout<<"ID:"<<j.id<<endl;
        cout<<" Address:"<<j.address<<endl;
        cout<<" Marks:"<<j.marks<<endl;
    }
}


int n,i,r,bubble;

cin>>n;
//cout<<"Enter bubble sort elements:";

for(i=1;i<n;i++)
{
   for( r=0;r<n-i;r++)
    if(j.marks[r]>j.marks[r+1])
   {
       bubble=j.marks[r];
       j.marks[r]=j.marks[r+1];
       j.marks[r+1]=bubble;
   }
   cout<<"Array in Ascending way:";
   for(i=0;i<3;i++)
   {
       cout<<j.marks[i];
   }
}

}
