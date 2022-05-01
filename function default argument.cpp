#include <iostream>
using namespace std;

// defining the default arguments
void display(char = '*', int = 3);
int main() {
    int count = 5;

    cout << "No argument passed: ";
    // *, 3 will be parameters
    display();

    cout << "\nFirst argument passed: ";
     // #, 3 will be parameters
    display('#');

    cout << "\nBoth arguments passed: ";
    // $, 5 will be parameters
    display('$', count);

    return 0;
}

void display(char c, int count) {
    for(int i = 1; i <= count; ++i)
    {
        cout << c;
    }
}

