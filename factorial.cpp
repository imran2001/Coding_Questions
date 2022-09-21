
//Program For palindrome
#include <iostream>

using namespace std;

int main()
{
    int n,ans=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        ans=ans*i;
    }
    cout<<ans;
    return 0;
}