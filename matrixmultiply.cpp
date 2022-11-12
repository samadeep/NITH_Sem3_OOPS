#include <iostream>
using namespace std;

int main()
{
    int arr1[100][100], arr2[100][100], multipliedresult[100][100], rows1, columns1, rows2, columns2, i, j, k;
    cout << "enter the number of rows in Matrix 1=";
    cin >> rows1;o
    cout << "enter the number of columns=";
    cin >> columns1;

    cout << "enter the element in 1st Matrix=\n";
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < columns1; j++)
        {
            cin >> arr1[i][j];
        }
    }

    cout << "enter the number of rows in Matrix 2=";
    cin >> rows2;
    cout << "enter the number of columns=";
    cin >> columns2;

    cout << "enter the elements of 2nd Matrix=\n";
    for (i = 0; i < rows2; i++)
    {
        for (j = 0; j < columns2; j++)
        {
            cin >> arr2[i][j];
        }
    }

    if (columns1 == rows2)
    {
        cout << "Multiplication of the matrix=\n";
       
        for (i = 0; i < rows1; i++)
        {
            for (j = 0; j < columns2; j++)
            {
                multipliedresult[i][j] = 0;
                for (k = 0; k < columns1; k++)
                {
                    multipliedresult[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
    

    // for printing result
    
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < columns2; j++)
        {
            cout << multipliedresult[i][j] << " ";
        }
        cout << "\n";
    }
    }

    else{
        cout<<"Multiplication not Possible"<<endl;
    }
    return 0;
}