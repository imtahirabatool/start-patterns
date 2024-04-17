#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter number of rows=";
    cin >> rows;

    // Upper half of the diamond
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < rows - i - 1; ++j)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half of the diamond (excluding the center row)
    for (int i = rows - 2; i >= 0; --i)
    {
        for (int j = 0; j < rows - i - 1; ++j)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

// output:
//   *
//  ***
// *****
//  ***
//   *