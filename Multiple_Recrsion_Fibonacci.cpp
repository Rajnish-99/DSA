#include<bits/stdc++.h>
using namespace std;

// code retrun by raj by learning from the striver 
int f(int n)
{  
    int first, second;
    if(n<=1)
    return n;
    
    first = f(n-1);
    second = f(n-2);

    return first+second;
}

int main()
{
    cout<<"Which Fibonacci Number do you want?";
    int n;
    cout<<endl;
    cin>>n;
    cout<<f(n)<<endl;

    return 0;
}