 //سوال رباته رهنماکالج - آزمون دوم
 #include<bits/stdc++.h>
using namespace std;
char a[100][100];
void printmatrix(int n,int m)
{
	for(int i=0;i<n;i++)
	 {
	 for(int j=0;j<m;j++)
	 {
	 	cout<<a[i][j]<<" ";
	 }
	 cout<<endl;
	 }
	 cout<<endl;
}	
int main()
{
    int n,m,l,x,y;
    cin>>n>>m>>l;
    char c[l];
    
    cin>>x>>y;
    int co=0;
    for(int i=0;i<l;i++)
    cin>>c[i];
    for(int i=0;i<n;i++)
     for(int j=0;j<m;j++)
       cin>>a[i][j];
       a[x-1][y-1]='.';
	 for(int i=0;i<l;i++)
	 {
	 	if(c[i]=='U')
	 	{
	 		do
	 		{
	 		 x=x-1;y=y;
	 		 if(a[x-1][y-1]=='#')
	 		 {
	 		  a[x-1][y-1]='.';
	 		  co++;
	 		  }
            }
           while((a[x-1][y-1]!='O')&&(x-1>=0));
           x++;
           printmatrix(n,m);
	 	}
	 	if(c[i]=='D')
	 	{
	 		do
	 		{
	 		 x=x+1;y=y;
	 		 if(a[x-1][y-1]=='#')
	 		 {
	 		 a[x-1][y-1]='.';
	 		  co++;
	 		  }
            }
              while((a[x-1][y-1]!='O')&&(x-1<n));
           x--;
           printmatrix(n,m);
	 	}
	 	if(c[i]=='R')
	 	{
	 		do
	 		{
	 		 x=x;y=y+1;
	 		 if(a[x-1][y-1]=='#')
	 		  {
	 		  a[x-1][y-1]='.';
	 		  co++;
	 		  }
            }
           while((a[x-1][y-1]!='O')&&(y-1<m));
           y--;
           printmatrix(n,m);
	 	}
	 	if(c[i]=='L')
	 	{
	 		do
	 		{
	 		 x=x;y=y-1;
	 		 if(a[x-1][y-1]=='#')
	 		 {
	 		 	a[x-1][y-1]='.';
	 		  co++;
	 		  }
            }
           while((a[x-1][y-1]!='O')&&(y-1>=0));
           y++;
           printmatrix(n,m);
	 	}
	 }
	 cout<<co+1<<endl;
	  
}
