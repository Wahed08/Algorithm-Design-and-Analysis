#include <bits/stdc++.h>
using namespace std;
#define N 105
int m,n;
int arr[N],arr2[N];
int L[N][N];

int lcs()
{
    int i, j;

    for (i = 0; i <= m; i++)
    {
        for (j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                L[i][j] = 0;

            else if (arr[i - 1] == arr2[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;

            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }

    return L[m][n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    int c=1;
    while(scanf("%d %d", &m,&n))
    {
        if(m==0 && n==0)
            return 0;

        for(int i=0; i<=m-1; i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=0; i<=n-1; i++)
        {
            scanf("%d",&arr2[i]);
        }
        printf("Twin Towers #%d\n",c++);
        printf("Number of Tiles : %d\n\n",lcs());
    }

    return 0;
}
