#include<bits/stdc++.h>
using namespace std;
string replaceall(string s,int pos)
{
  for(int i=0;i<s.size();i++)
   if(i<pos)
    s[i]=s[pos];
  return s; 
}
int main()
{
  int t;string s;
  cin>>s;
  for(int i=0;i<s.size();i++)
   {
     cout<<replaceall(s,i)<<endl;
   }
return 0;

}

