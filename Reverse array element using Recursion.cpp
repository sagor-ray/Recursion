#include <iostream>
using namespace std;

void reverse(int arr[], int firstIndex, int lastIndex)
{
    if(firstIndex>lastIndex)
    {
        return ;
    }
    int temp= arr[firstIndex];
    arr[firstIndex]=arr[lastIndex];
    arr[lastIndex]=temp;
    reverse(arr, firstIndex+1, lastIndex-1);
}

int main()
{
    int arr[]={3,1,2,6,5,7,4,8};
    int x= sizeof(arr)/sizeof(arr[2]);
    cout<<"Before:\n";
    for(int i=0;i<x;i++)
    {
        cout<<arr[i]<<endl;
    }

    reverse(arr, 0, x-1);
    cout<<"After:\n";
    for(int i=0;i<x;i++)
    {
        cout<<arr[i]<<endl;
    }

}
