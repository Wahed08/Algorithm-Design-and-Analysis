#include <bits/stdc++.h>
using namespace std;

int a[2000];
int main ()
{
    string str;
    getline(cin, str);

    cout << "Enter a Number";
    int x;
    cin >> x;

    int ln = str.length(),sum=0;
    int flag = 0, y = 0;

    for(int i=0; i<ln; i++)
    {

        if(str[i] != ' ' && str[i] != '.' && str[i] != ',' && str[i] != ';')
        {
            flag += str[i] * pow(x, y);
            y++;
        }
        else
        {
            flag %= 10;
            a[flag] = 1;
            flag = 0;
            y= 0;
        }
    }

    for(int i=0; i<2000; i++)
    {
        if(a[i])
            sum++;
    }

    cout << "unique word-->>" << sum+1 <<endl;

}
