// Online C++ compiler to run C++ program online
//string
#include <iostream>
#include<string>

using namespace std;

int main()
{
    string input,temp;
    cin>>input;
    int n=input.length();
    if(n==1)
    cout<<"Palindrome";
    if(n>1)
    {
        for (int i=n-1;i>=0;i--)
        {
         temp+=input[i];   
        }
        if(input==temp)
        cout<<"Palindrome";
        else
        cout<<"Not Palindrome";
    }
    return 0;
    
}   