  
#include<bits/stdc++.h>
using namespace std;

int main()
{
  const int nrolls = 10000; // number of experiments
  const int nstars = 100;   // maximum number of x to distribute

  std::default_random_engine generator;
  std::discrete_distribution<int> distribution {1,2,1,1,3,4,5,1,2,1};

  int p[10]={};

  for (int i=0; i<nrolls; ++i) {
    int number = distribution(generator);
    ++p[number];
  }

  std::cout << "a discrete_distribution:" << std::endl;
  for (int i=0; i<10; ++i)
    std::cout << i << ": " << std::string(p[i]*nstars/nrolls,'x') << std::endl;

  return 0;
}