#include <iostream>
using namespace std;

int travarse(int arr[], int index)
{
    if(index<0)
    {
        return 0;
    }

    return arr[index]+travarse(arr,index-1);
}

int main()
{
    int arr[]={3,6,2,5,8,9};
   int x= sizeof(arr)/sizeof(arr[2]);
    cout<<travarse(arr,x-1);
}
