
// C++ code to demonstrate star pattern
 
#include <iostream>
using namespace std;
 

void print_space(int space)
{
    if (space == 0)
        return;
    cout << " ";
    print_space(space - 1);
}

void print_asterisk(int asterisk)
{
    if (asterisk == 0)
        return;
    cout << "*";
 
    print_asterisk(asterisk - 1);
}

void pattern(int i, int n)
{
    if (n == 0)
        return;
    print_space(n - 1);
    print_asterisk(i*2-1);
    cout << endl;

    pattern(i+1,n - 1);
}
 
// driver function
int main()
{
    int n = 4;
    pattern(1, n);
    return 0;
}