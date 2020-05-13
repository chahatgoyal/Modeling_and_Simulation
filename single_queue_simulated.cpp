

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <cstdlib>
#include <ctime>

int main()
{
    int i = 100;
    srand((int)time(0));
    
    while(i--)
    {
     cout<<"Run"<<(100-i)<<"\n"<<"\n";   
    
    vector<double> A;
    vector<double> D;
    //srand((unsigned int)time(NULL));
   //float a = 5.0;
   for (int i=0;i<8;i++)
   {
      A.push_back(((double) rand() / (RAND_MAX))*10);
   }
   
    for (int i=0;i<5;i++)
   {
      D.push_back(((double) rand() / (RAND_MAX))*10);
   }
    
    
    int queue = 0;
    //assuming simulation ends at last departure
    int i=1;
    int j=0;
    double sum = 0;
    double x;
    double busy =0;
    if(D[0]<A[0])
    {
        cout<<"simulation not possible"<<"\n";
    }
    x = A[0];
    while(j<D.size() && i<A.size())
    {
        
        if(A[i]<D[j])
        {
            
            if(queue>=0)
            {
              cout<<"interval"<<x<<"-"<<A[i]<<"queue size"<<queue<<"\n";
              sum = sum + (queue)*(A[i]-x);  
              busy = busy + (A[i]-x);
              
            }
            
            queue++;
            x = A[i];
            i++;
            
            
        }
        
        else
        {
            
            if(queue>=0)
            {
                cout<<"interval"<<x<<"-"<<D[j]<<"queue size"<<queue<<"\n";
              sum = sum + (queue)*(D[j]-x);  
              busy = busy + (D[j]-x);
            }
            queue--;
            x = D[j];
            j++;
            
        }
        
       
        //cout<<i<<j<<"x="<<x<<"y="<<y<<"--"<<(queue)<<"\n";
    }
     if(j!=D.size())
     
        {   
            cout<<"interval"<<x<<"-"<<D[j]<<"queue size"<<queue<<"\n";
            sum = sum+queue*(D[j]-x);
            busy = busy + (D[j]-x);
        }
        
        
    
  cout<<"the average number of customers"<<abs(sum/8.6)<<"\n";
  cout<< "cpu utilized is"<<abs(busy/8.6)<<"%"<<"\n"; 
    }
  
    
}
