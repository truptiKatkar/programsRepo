#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x,i;
    cout<<"Enter a single integer :";
    cin>>x;
    for(i=1;i<=x;i++)
    {
        cout<<2*i-1<<",";
    }
    return 0;
}
