#include<iostream>
using namespace std;

void Findtheno(int a[],int key)
{
    int i,x;
    for(i=0;i<7;i++)
    {
        if(a[i]==key)
        {
            x=i;
        }
    }
    if(x>=0 && x<=6)
    {
        cout<<"Found at Index"<<" "<<x;
    }
    else
    {
        cout<<"NOT FOUND";
    }
}
int main()
{
    int a[7] = {1,54,41,64,46,646,5};
    int key;
    cout<<"Enter no. to be found";
    cin>>key;
    Findtheno(a,key);
}