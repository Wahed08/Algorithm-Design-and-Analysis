#include<bits/stdc++.h>
using namespace std;

struct str
{
    int value;
    int key;
};

void display(struct str[],int Size);

int main()
{
    int Size,temp;
    cout<<"Enter a size of the table: ";
    cin>>Size;

    struct str hash_table[Size];
    cout<<"Enter the element: ";

    for(int i=0; i<Size; i++)
    {
        cin>>temp;
        hash_table[temp%Size].value=temp;
        hash_table[temp%Size].key=temp%Size;
    }
    cout<<endl;
    display(hash_table,Size);

}

void display(struct str arr[],int Size)
{
    cout<<"value"<<" "<<"key"<<endl;

    for(int i=0; i<Size; i++)
    {
        cout<<arr[i].value<<" "<<arr[i].key<<endl;
    }
}
