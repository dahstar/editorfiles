#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;string s;
vector<string> p;
  cin>>t;
  
  for(int i=0;i<t;i++)
  {
   cin>>s;
   p.push_back(s);
  }
    for(int i=p.size()-1;i>=0;i--)
     cout<<p[i]<<" ";
  
}

