/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"enter the number";

    long long int a;
    cin>>a;

    int n = to_string(a).size();
    cout<<n;
    set<int> m;
    cout<<a<<"----";
    int line =0;

    while(a!=0 || m.find(a)==m.end())
    {
        if(line>=100)
        {
            break;
        }
        cout<<a<<"\n";
        m.insert(a);
        a = a*a;
        a = a/(pow(10,n/2));
        a = fmod(a,(pow(10,n)));
        line++;

    }

    return 0;

}
