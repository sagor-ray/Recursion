#include <iostream>
using namespace std;

int print(int n)
{
    int sum=n;
    if(n==0)
    {
        return 0;
    }
    cout<<n<<endl;
    int m=print(n-1);
    sum = sum+m;
    cout<<sum<<endl;
    return sum;

}
int main()
{
    print(5);
}
