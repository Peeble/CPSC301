#include <iostream>
using namespace std;
int main() {
    int array [4] = {1, 2, 3, 4};
    int j = 3;
    int arrayValue = 0;

    for (int t = 0; t < 4; t++)
    {
        cout << "Enter array value" << endl;
        cin >> arrayValue;
        array[t] = arrayValue;
    }



    for (int k = 0; k < 4; k++)
        cout << array[k];

    cout << endl;


    for (int i = 1; i <= 4; i++)
    {
        array[j] = i;
        j--;
    }

    for (int k = 0; k < 4; k++)
        cout << array[k];

    cout << endl;
}