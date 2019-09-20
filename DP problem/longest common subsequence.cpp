#include<bits/stdc++.h>
using namespace std;
int n,m,lcs[2000][2000];
int main()
{
    string X,Y;

    while(getline(cin,X))
    {
        getline(cin,Y);
        n=X.size();
        m=Y.size();
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
            {
                if(X[i-1]==Y[j-1])
                lcs[i][j]=lcs[i-1][j-1]+1;
                else
                lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
            }
        cout<<lcs[n][m]<<endl;
    }
return 0;
}
