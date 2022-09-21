
//Program For palindrome
#include <iostream>

using namespace std;

int main()
{
    
    int n,r,sum=0,temp;
    cin>>n;
    temp=n;    
    if(n>=0 && n<10)
    {
        cout<<"Palindrome";
    }
    if(n>10)
    {
        while(n>0)    
        {    
            r=n%10;    
            sum=(sum*10)+r;    
            n=n/10;    
        }
        if(temp==sum)
        cout<<"Palindrome";
        else
        cout<<"Not Palindrome";
    }
return 0;  
}   