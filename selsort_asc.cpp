
#include <iostream>

using namespace std;

void inp(int arr[], int n)
{
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}

void selsort(int arr[], int n)
{
    int min;
    for (int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            swap(arr[i],arr[min]);
        }
    }
}



int main()
{
    int input;
    cin>>input;
    int arr[input];
    inp(arr,input);
    selsort(arr,input);
    
    for(int i=0;i<input;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}