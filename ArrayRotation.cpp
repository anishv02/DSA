#include<iostream>
using namespace std;

void Rotatebyone(int a[], int n)
{
    int temp = a[0];
    for(int i=0;i<n;i++)
    {
        a[i] = a[i+1];
    }
    a[n-1] = temp;
}

void Rotate(int a[], int d, int n)
{
    for(int i=0;i<d;i++)
    Rotatebyone(a,n);
}

void Print(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int n = 7, d;
    int a[7] = {1,2,3,4,5,6,7};
    cout<<"Enter d";
    cin>>d;

    Rotate(a,d,n);
    Print(a,n);
}