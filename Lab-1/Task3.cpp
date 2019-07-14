#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,k;
    vector <int> vec;

    cout << "Enter the size of the array: ";
    int size,value;
    cin >> size;
    cout << "Enter the Array: ";
    for(int i=0; i<size; i++)
    {
        cin >> value;
        vec.push_back(value);
    }

    m = 256;
    float A = 0.96;

    vector <int> arr(m);

    for(int i=0; i<m; i++)
    {
        arr[i] = -1;
    }

    for(int i=0; i<vec.size(); i++)
    {
        int h;
        h = floor(m*(vec[i]*A - floor(vec[i]*A)));
        arr[h] = vec[i];
    }
    cout << "h(k)" << "\t" << "k" << endl;
    for(int i=0; i<arr.size(); i++)
    {

        if(arr[i]!=-1)
        {
            cout << i << "\t" << arr[i] << endl;
        }
    }
}
