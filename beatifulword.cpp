#include<bits/stdc++.h>
using namespace std;
 bool isvowel(char a)
 {
 	if((a=='a')||(a=='e')||(a=='i')
 	||(a=='o')||(a=='u')||(a=='y'))
 	  return true;
 	return false;
 	
 }
int main()
{
 string s;
 bool isbeatiful=true;
 cin>>s;
 for(int i=0;i<s.length()-1;i++)
 {
 	if(s[i]==s[i+1])
 	 isbeatiful=false;
 	if((isvowel(s[i]))&&(isvowel(s[i+1])))
 	 isbeatiful=false; 
 }
 if(isbeatiful)
  cout<<"Yes"<<endl;
  else
  cout<<"No";
  return 0;
}

