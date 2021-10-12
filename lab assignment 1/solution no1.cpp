//Make a calculator (+,-,/,*) using different function for a,b.
#include<iostream>
#include<string>

using namespace std;
int addition();
int subtraction();
int multiplication();
int division();
int main()
{


    char opt;
    cout << "Enter operator either + or - or * or / or no: ";
    cin >> opt;
    if(opt=='+')
    {
           addition();
           main();
    }

        else if(opt=='-')
          {

           subtraction();
           main();
          }

        else if(opt=='*')
            {multiplication();
            main();}

        else if(opt=='/')
           {division();
           main();
           }
          else
            cout << "Error!";




    return 0;
}


int addition()
{
   int a,b,res,n;
    cout<<"Enter two number to Add"<<endl;
    cin>>a>>b;
    cout<<"    "<<a<<endl;
    cout<<"   +"<<b<<endl;
    res=(a+b);
    cout<<"   _____"<<endl;
    cout<<"   "<<res<<endl;
    cout<<"Enter any digit to go back"<<endl;
    cin>>n;
    main();
}

int subtraction()
{
    int a,b,res,n;
    cout<<"Enter two numbers to Subtract"<<endl;
    cin>>a>>b;
    cout<<"   "<<a<<endl;
    cout<<"  -"<<b<<endl;
    res=(a-b);
    cout<<"  _____"<<endl;
    cout<<"   "<<res<<endl;
    cout<<"Enter any digit to go back"<<endl;
    cin>>n;
    main();
}

int multiplication()
{
    int a,b,res,n;
    cout<<"Enter two numbers to Multiply "<<endl;
    cin>>a>>b;
    cout<<"   "<<a<<endl;
    cout<<"  *"<<b<<endl;
    res=(a*b);
    cout<<"  _____"<<endl;
    cout<<"  "<<res<<endl;
    cout<<"Enter any digit to go back"<<endl;
    cin>>n;
    main();
}
int division()
{
    float a,b,res,n;
    cout<<"Enter two numbers to Divide"<<endl;
    cin>>a>>b;
    cout<<"   "<<a<<endl;
    cout<<"  /"<<b<<endl;
    res=(a/b);
    cout<<"  ____"<<endl;
    cout<<"  "<<res<<endl;
    cout<<"Enter any digit to go back"<<endl;
    cin>>n;
    main();
}
