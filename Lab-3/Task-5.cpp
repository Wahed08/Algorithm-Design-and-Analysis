
//Hashing Linear Probing.

#include<bits/stdc++.h>
using namespace std;
int tsize;

int funct1(int key)
{
    int i ;
    i = key%tsize ;
    return i;
}

int funct2(int key)
{
    int i ;
    i = (key+1)%tsize ;
    return i ;
}

int main()
{
    int key,arr[100],hash[100],i,n,j;

    printf ("Enter the size of the hash table:  ");
    cin>>tsize;

    printf ("Enter the number of elements: ");
    cin>>n;

    for (int i=0; i<tsize; i++)
        hash[i]=-1 ;

    printf ("Enter Elements: ");
    for (int i=0; i<n; i++)
    {
       cin>>arr[i];
    }

    for (int i=0; i<tsize; i++)
        hash[i]=-1 ;

    for(int k=0; k<n; k++)
    {
        key=arr[k] ;
        i = funct1(key);
        while (hash[i]!=-1)
        {
            i = funct2(i);
        }
        hash[i]=key ;
    }
    printf("The elements in the array are: ");
    for (i=0; i<tsize; i++)
    {
        printf("\n  Element at position %d: %d",i,hash[i]);
    }
    cout<<endl;

    return 0;
}

