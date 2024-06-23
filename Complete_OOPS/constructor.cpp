#include <bits/stdc++.h>

using namespace std;

class hero
{

public:
    char p = 9;
    int health = 0;
    char level = 1;
 

    hero()
    {
        cout<<"constructor called"<<endl;
    }

    hero(int health)
    { cout<<this<<endl;
        this->health = health;
    }
};

int main()
{
    hero a(10);

    cout<<"Address of the object "<<&a<<endl;
    return 0;
}


// this value is coming out be same ib both the cases and this is how the work is going on 