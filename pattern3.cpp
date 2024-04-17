#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter number of rows=";
    cin >> rows;
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < rows-i-1; ++j) {
            cout << " ";
        }
        for(int j = 0; j < 2*i+1; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}

// output:
//     *
//    ***
//   *****
//  *******
// *********

// #include <iostream>
// using namespace std;

// int main()
// {
//     int rows;
//     cout << "Enter number of rows=";
//     cin >> rows;
//     return 0;
// }