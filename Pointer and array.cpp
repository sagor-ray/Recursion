#include <iostream>
using namespace std;
int main()
{
    int ar[]={2,9,6,7,8};
    cout<<&ar[0]<<endl;
    cout<<&ar[1]<<endl;
    cout<<&ar[2]<<endl;
    cout<<&ar[3]<<endl;
    cout<<*(ar+2)<<endl;
}
