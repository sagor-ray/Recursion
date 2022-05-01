#include <iostream>
using namespace std;

int power(int n, int m)
{
    if(m==0)
    {
        return 1;
    }
    int a= n*power(n,m-1);
     cout<<a<<endl;
     return a;
}
int main()
{
   power(4,3);
    return 0;
}
