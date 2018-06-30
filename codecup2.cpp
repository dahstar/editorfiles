#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,x,y;
	int ini=-1,inj=-1;
	cin>>n>>x>>y;
	for(int i=0;i<n;i++)
	{
		 for(int j=0;j<n;j++)
	 {
		 if(i*x+j*y==n)
		 {
			 ini=i;inj=j;
			 break;
		 }
	 }
 }
	 if(ini!=-1)
	 cout<<ini<<" "<<inj<<endl;
	 else
	 cout<<-1<<endl;
	 system("pause");
    return 0;
}
 
