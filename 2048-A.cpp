
#include<iostream>
using namespace std;

int main()
{
    int n;cin>>n;
    while(n--)
    {
        int x;cin>>x;
        if(x%33==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
