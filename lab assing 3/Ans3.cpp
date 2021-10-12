

#include<bits/stdc++.h>
using namespace std;
struct student
{
    char name[30];
    int id;
    char address[30];
    float marks;
};
bool compareid(student st1,student st2)
{
    if(st1.id>st2.id)
        return true;
    else
        return false;
}
int main(){
    int i;
student j[5];
    for(i=0;i<5;i++)
    {
        cout<<"Student"<<i+1<<":"<<endl;
        cout<<"Enter Name:";
        cin>>j[i].name;
        cout<<"Enter id:";
        cin>>j[i].id;
        cout<<"Enter address:";
        cin>>j[i].address;
        cout<<"Enter marks:";
        cin>>j[i].marks;
    }
    sort(j,j+5,compareid);
    for(i=0;i<5;i++)
    {
        cout<<j[i].name<<""<<j[i].id<<""<<j[i].address<<""<<j[i].marks;
    }
}
