#include<bits/stdc++.h>
using namespace std;

int lis(int arr[],int n)
{
    int value[n];
    for(int i=0; i<n; i++){
        value[i]=1;
    }

    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            if(arr[j]<arr[i]){
                value[i]=max(value[i],value[j]+1);
            }
        }
    }
    return value[n-1];
}

int main()
{
  int arr[]={10, 22, 9, 33, 21, 50, 41, 60};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<"The length of lis is: "<<lis(arr,n)<<endl;

 return 0;
}
