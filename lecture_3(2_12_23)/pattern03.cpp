#include <iostream>
using namespace std;
int main()
{

    int row = 1, rag, k = 1;
    cout << "enter the range of the pattern: ";
    cin >> rag;
    while (row <= rag)
    {

        // space
        int col = 1;
        while (col <= rag - row)
        {
            cout << " ";
            col++;
        }
        int col1 = 1;
        if (row == 1 || row == rag)
        {
            while (col1 <= rag)
            {
                cout << "*";
                col1++;
            }
        }
        else
        {

            cout << "*";
            int col = 1;
            while (col <= rag - 2)
            {
                cout << " ";
                col++;
            }
            cout << "*";
        }

        cout << '\n';
        row++;
    }
    return 0;
}