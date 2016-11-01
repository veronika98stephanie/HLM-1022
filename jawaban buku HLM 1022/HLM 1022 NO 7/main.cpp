#include <iostream>

using namespace std;

int size;

class TestScore
{
public:
    TestScore (int *arr)
    {
        int total = 0;
        int average;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] < 0 || arr[i] > 100)
            {
                string e = "you enter the wrong input";
                throw e;
            }
            else
            {
                total += arr[i];
                average = total/size;
            }
        }
        cout << "The average is " << average;
    }

};

int main()
{
    cout << "Please input the size " << endl;
    cin >> size;

    int arr [size];
    int a;

    for (int i = 0; i < size; i++)
    {
        cout << "Please input the num" << endl;
        cin >> a;
        arr[i] = a;
        ++a;
    }

    try
    {
        TestScore one (arr);
    }
    catch (string e)
    {
        cout << e << endl;
    }
    return 0;
}
