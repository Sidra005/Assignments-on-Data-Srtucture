#include<iostream>
using namespace std;
struct student
{
    char name[50];
    int id;
    char address[30];
    float marks;

};
int main()
{
student j;
int i,n;
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
        cout<<"Student"<<i+1<<":"<<endl;
        cout<<"\nName:"<<j.name<<endl;
        cout<<"ID:"<<j.id<<endl;
        cout<<" Address:"<<j.address<<endl;
        cout<<" Marks:"<<j.marks<<endl;
    }
}
