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


    char choice;
    cout << "Enter operator either + or - or * or / or no: ";
    cin >> choice;
    switch(choice)
    {
        case '+':
           addition();
           main();
            break;

        case '-':
           subtraction();
           main();
            break;

        case '*':
            multiplication();
            main();
            break;

        case '/':
           division();
           main();
            break;

        default:
            cout << "Error! operator is not correct";
            break;

    }

    return 0;
}


int addition()
{
   int a,b,res,n;
    cout<<"Enter two number to Add"<<endl;
    cin>>a>>b;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    res=(a+b);
    cout<<a<<"+"<<b<<"="<<res<<endl;
    cout<<"Enter any digit to go back"<<endl;
    cin>>n;
    main();
}

int subtraction()
{
    int a,b,res,n;
    cout<<"Enter two numbers to Subtract"<<endl;
    cin>>a>>b;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    res=(a-b);
    cout<<a<<"-"<<b<<"="<<res<<endl;
    cout<<"Enter any digit to go back"<<endl;
    cin>>n;
    main();
}

int multiplication()
{
    int a,b,res,n;
    cout<<"Enter two numbers to Multiply "<<endl;
    cin>>a>>b;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    res=(a*b);
    cout<<a<<"*"<<b<<"="<<res<<endl;
    cout<<"Enter any digit to go back"<<endl;
    cin>>n;
    main();
}
int division()
{
    float a,b,res,n;
    cout<<"Enter two numbers to Divide"<<endl;
    cin>>a>>b;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    res=(a/b);
    cout<<a<<"/"<<b<<"="<<res<<endl;
    cout<<"Enter any digit to go back"<<endl;
    cin>>n;
    main();
}
