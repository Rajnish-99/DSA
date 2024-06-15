#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {10, 5, 10, 15, 10, 5}, n=6;
    
    unordered_map<int, int> m;

    for (int i = 0; i < n; i++)
        m[arr[i]]++;
   
   for (auto i = m.begin(); i != m.end(); i++) 
        cout << i->first << " \t\t\t" << i->second << endl; 


    return 0;
}

