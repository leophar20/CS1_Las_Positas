#include <iostream>

using namespace std;

int main()
{
    // constants (DO NOT MODIFY)
    const int MAX_ROWS  = 11;
    const int MAX_STARS = 21;

    // outer loop controlling how many rows to print
    for (int i = MAX_ROWS ;i >= 1 ; i--)
    {
        // inner loop to print the spaces on the left side
        for (int z = MAX_STARS; z-11 >= i ;z--)
        {
            cout << ' ';
        }

        // inner loop to print the stars
        for (int x = 1; x <= (i*2)-1; x++ )
        {
            cout << '*';
        }

        // break the line for the next row
        cout  <<endl;
    }

    // terminate
    return 0;
}
