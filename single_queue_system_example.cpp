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
    vector<double> A{0.4,1.6, 2.1, 3.8, 4.0, 5.6, 5.8,7.2};
    vector<double> D{2.4, 3.1, 3.3, 4.9,8.6};
    int queue = 0;
    //assuming simulation ends at last departure
    int i=1;
    int j=0;
    double sum = 0;
    double x;
    double busy =0;
    if(D[0]<A[0])
    {
        cout<<"simulation not possible";
    }
    x = A[0];
    while(j<D.size() && i<A.size())
    {
        
        if(A[i]<D[j])
        {
            
            if(queue>=0)
            {
              cout<<"interval"<<x<<A[i]<<"queue size"<<queue<<"\n";
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
                cout<<"interval"<<x<<D[j]<<"queue size"<<queue<<"\n";
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
            cout<<"interval"<<x<<D[j]<<"queue size"<<queue<<"\n";
            sum = sum+queue*(D[j]-x);
            busy = busy + (D[j]-x);
        }
    
  cout<<"the average number of customers"<<sum/D[j]<<"\n";
  cout<< "cpu utilized is"<<busy/D[j]*100<<"%"; 
    
}
