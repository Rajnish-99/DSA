#include<iostream>

using namespace std;

int main()
{
    int a , b;

    cout<<"Enter the number whose GCD you want"<<endl;
    cin>>a;
    cout<<endl;
    cin>>b;

    while(a>0 && b>0)
    {
        if(a>b)
        a = a%b;

        else 
        b =b%a;
    }

    if(a==0)
    {
        cout<<"GCD is "<<b<<endl;;
    }

    else
    {
        cout<<"GCD is "<<a<<endl;
    }


    return 0;
}