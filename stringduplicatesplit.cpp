 
#include<bits/stdc++.h>
using namespace std;
const vector<string> explode(const string& s, const char& c)
{
	string buff{""};
	vector<string> v;
	
	for(auto n:s)
	{
		if(n != c) buff+=n; else
		if(n == c && buff != "") { v.push_back(buff); buff = ""; }
	}
	if(buff != "") v.push_back(buff);
	
	return v;
}
int main()
 {
     string str;
     getline(cin,str);
     string result="yes";
     vector<string> s(80);
      map<string,int> first;
      vector<string> v{explode(str, ' ')};
	for(auto n:v){
	 first[n]++;
	 s.push_back(n);
 	 }
	  
  for(int i=0;i<s.size();i++)
  if(first[s[i]]>1)
  {
  	result="no";
  } 
  cout<<result;
	return 0;
}




