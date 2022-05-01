#include <iostream>
#include <stdio.h>
using namespace std;

void test()
{
    // var is a static variable
    static int var = 0;
    ++var;

    cout << var << endl;
}

int main()
{
    int n=10;
    test();
    test();
    printf("%d\n",n);

    return 0;
}
