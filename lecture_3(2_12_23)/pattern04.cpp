#include <iostream>
using namespace std;
int main()
{

    int row = 1, rag;
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
        // star
        // ** first and last row ke baare mai pehle socho **
        if (row == 1 || row == rag)
        {
            int col1 = 1;
            while (col1 <= 2 * row - 1)
            {

                cout << "*";
                col1++;
            }
        }
        else
        {

            cout << "*";
            int col = 1;
            while (col <= 2 * row - 3)
            {

                cout << " ";
                col++;
            }
            cout << "*";
            
        }
        cout<<endl;
        row++;
    }
    return 0;
}