#include<iostream>
#include<string.h>
using namespace std;
struct date
{
    int day,month,year;
};
struct Dates
{
    int day,month,year;
};
int main()
{
    int dates=0;
    date d;
    cout<<"Date=";
    cin>>d.day;
    cout<<"Month=";
    cin>>d.month;
    cout<<"Year=";
    cin>>d.year;

    date D;
    cout<<"Date=";
    cin>>D.day;
    cout<<"Month=";
    cin>>D.month;
    cout<<"Year=";
    cin>>D.year;
    if(d.day==D.day)
    {

       if(d.month==D.month)
       {
        if(d.year==D.year)
        {
            dates=1;
        }
       }
    }
    if (dates==1)
    {
        cout<<"Dates are equal";
    }
    else
        cout<<"Dates are not equal";
}
