#include <iostream>

using namespace std;

int main()
{
    int size;

    cout << "Please input the size" << endl;
    cin >> size;

    int arr [size];

    for (int i = 0; i < size; i++)
    {
        int a;
        cout << "please input number " << i+1 << endl;
        cin >> a;
        a = arr[i];
    }

    int index;

    cout << "Please input the index you want to see " << endl;
    cin >> index;


    try
    {
        if (index > size)
        {
            string e = "array out of bound";
            throw e;
        }

        cout << arr[index];
    }
    catch(string e)
    {
        cout << e << endl;
    }
    return 0;
}
