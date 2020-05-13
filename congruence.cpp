#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int congrence(int r,int a, int b, int s)
{
    set<int> m;
    while(r!=0|| m.find(r)==m.end() )
    {
        cout<<r<<"\n";
        m.insert(r);
        r = (a*r+b) % s;

    }

}

int arithcong(int r1, int r2, int s)
{
    int r;
   set<pair<int,int>> m;
   m.insert(make_pair(r1,r2));
   r = (r1+r2)%s;
   
   if(r!=0 || m.find(make_pair(r1,r2))==m.end())
   {
       cout<<r<<"\n";
       r1 = r2;
       r2 = r;
       arithcong(r1,r2,s);
       
   }
   else
   {
       return 0;
   }
    
}
int main()
{
    
    int r,s,a,b;
    cout<<"select 1 mixed congruence"<<"\n";
    cout<<"2 for addictive"<<"\n";
    cout<<"3 for multiplicative"<<"\n";
    cout<<"4 for arithmetic"<<"\n";
    cout<<"select choice"<<"\n";
    int c;
    cin>>c;
    switch(c)
    {
       case 1: 
       cout<<"enter r,s,a,b"<<"\n";
    
    cin>> r>>s>>a>>b;
    congrence(r,a,b,s);
    break;
    
    case 2:
    cout<<"enter r,s,b"<<"\n";
    //int r,s,b;
    cin>> r>>s>>b;
    congrence(r,1,b,s);
    break;
    
    case 3:
    cout<<"enter r,s,a"<<"\n";
    //int r,s,a;
    cin>> r>>s>>a;
    congrence(r,a,0,s);
    break;
    
    case 4:
    int r1,r2;
    cout<<"enter r1,r2,s"<<"\n";
    cin>>r1>>r2>>s;
    arithcong(r1,r2,s);
    break; 
    
    }
    
 return 0;
}