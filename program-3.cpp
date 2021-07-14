#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x,i=1,no=0;
    cout<<"Enter a single integer :";
    cin>>x;
    cout<<i<<',';
        while(no<=x-2)
        {
            no++;
            i=i+2;
            cout<<i<<',';
        }
    return 0;
}
