#include <iostream>
using namespace std;

int travarse(int arr[], int lastIndex)
{
    if(lastIndex<0)
    {
        return 0;
    }
     travarse(arr,lastIndex-1);
     cout<<arr[lastIndex]<<endl;
}

int main()
{
    int arr[]={3,5,2,6,1};
    int x=(sizeof(arr)/sizeof(arr[1]));
    travarse(arr,x-1);
}
