//مثلث خیام پاسکال
#include <bits/stdc++.h>
using namespace std;
int numberofterms(int n)
{
if(n == 1) {
       
        return 0;
    }

    for(int i = 2; i < sqrt(n) + 1; i++) {
        if(n % i == 0) {
           
            return  n - (n/i);
        }
    }

    return  n-1 ;
}
int main()
{
    int rows, coef = 1;

 
    cin >> rows;
   for(int i=0;i<numberofterms(rows);i++)
    cout<<"  ";
   cout<<"khayam pascal triangle"<<endl;
    for(int i = 0; i < rows; i++)
    {
        for(int space = 1; space <= rows-i; space++)
            cout <<"  ";

        for(int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;

            cout << coef << "   ";
        }
        cout << endl;
    }

    return 0;
}
