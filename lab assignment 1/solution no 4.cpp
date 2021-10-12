//Calculate the area of circle using PI as preprocessor definition and function

#include<iostream>

#define PI 3.1416

using namespace std;

int main()
{
    float area,radius;

    cout<<"Enter the radius of circle=";

    cin>>radius;

    area=PI*(radius*radius);

    cout<<"\nThe area of circle is= "<<area<<endl;

    return 0;
}
