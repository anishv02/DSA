#include<bits/stdc++.h>
using namespace std;

void Largest(int a[])
{
    int max = a[0];
    for(int i=1;i<5;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }
    cout<<max;
}

int main()
{
    int a[5] = {5,3,1,6,8};
    Largest(a);
}