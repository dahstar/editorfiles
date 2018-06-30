#include<bits/stdc++.h>
using namespace std;
 bool sort(vector<int>  a)
 {   
 	for(int i=0;i<a.size();i++)
 	   if(abs(i-a[i])>1)
 	    return false;
 	 return true; 
 	  
 	  
 }
int main()
{
 int q;
 int n;
 cin>>q;
 while(q--)
 {
 	cin>>n;
 	vector<int> a(n);
 	for(int i=0;i<n;i++)
 	 cin>>a[i];
 	if(sort(a))
 	 cout<<"Yes"<<endl;
 	else
 	 cout<<"No"<<endl; 
 }
  return 0;
}

