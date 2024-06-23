// this is the first part of the cpp oops lecture

#include <bits/stdc++.h>

using namespace std;

class hero
{

public:
    char p = 9;
    int health = 0;
    char level = 1;
};

int main()
{
    hero h1;
    hero *a = new hero;

    cout<<a->health<<endl;

    cout << sizeof(h1) << " ";
    cout << endl;

    return 0;
}