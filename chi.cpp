#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=13,x=1,c=0,m=512;
    double nx=0, first=0,total=0;
    int n=100,k=10;
    double oi[10]={0},rep[100]={0};
    int countt=0,check=0,j=0,in=0;
    while (n)
    {
        nx=(a*x+c)%m;
        x=nx;
        if((nx/m)>=0.0&&(nx/m)<0.1)
        {
            oi[0]++;
        }
        if((nx/m)>=0.1&&(nx/m)<0.2)
        {
            oi[1]++;
        }
        if((nx/m)>=0.2&&(nx/m)<0.3)
        {
            oi[2]++;
        }
        if((nx/m)>=0.3&&(nx/m)<0.4)
        {
            oi[3]++;
        }
        if((nx/m)>=0.4&&(nx/m)<0.5)
        {
            oi[4]++;
        }
        if((nx/m)>=0.5&&(nx/m)<0.6)
        {
            oi[5]++;
        }
        if((nx/m)>=0.6&&(nx/m)<0.7)
        {
            oi[6]++;
        }
        if((nx/m)>=0.7&&(nx/m)<0.8)
        {
            oi[7]++;
        }
        if((nx/m)>=0.8&&(nx/m)<0.9)
        {
            oi[8]++;
        }
        if((nx/m)>=0.9&&(nx/m)<1.0)
        {
            oi[9]++;
        }
        rep[j]=nx/m;
        j++;
        cout<<nx/m<<endl;
        if(n==100)
        {
            first=nx;
        }
        if(n!=100&&(nx==first)&&(check==0))
        {
            check=1;
        }
        else if(check==0)
        {
            countt++;
        }
        n--;
    }
    for(int i=0;i<100;i++)
    {
        for(int k=i+1;k<100;k++)
        {
            if(rep[i]==rep[k])
            {
                cout<<rep[i]<<" is repeted"<<endl;
                in=1;
            }
        }
    }
    if(in==0)
    {
        cout<<"\n(1). There is no repetation"<<endl;
    }

    cout<<"(2).interval"<<"\toi"<<"\tEi"<<"\toi-Ei"<<"\t(oi-Ei)^2"<<"\t((oi-Ei)^2)/Ei"<<endl;
    cout<<"-------------------------------------------------------------------------"<<endl;
    for(int i=0;i<k;i++)
    {
        cout<<i+1<<"\t\t"<<oi[i]<<"\t10\t"<<oi[i]-k <<"\t   "<< (oi[i]-k)*(oi[i]-k) <<"  \t\t"<< ((oi[i]-k)*(oi[i]-k))/k <<endl;
        total+=((oi[i]-k)*(oi[i]-k))/k;
    }
    cout<<"(3.)Total result of chi-square method = "<<total<<endl;
    if(total<16.9)
    {
        cout<<"(4.)The distribution is uniform"<<endl;
    }
    else
    {
        cout<<"(4.)The distribution is not uniform"<<endl;
    }

}
