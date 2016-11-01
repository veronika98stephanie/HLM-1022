#include <iostream>

using namespace std;

template <class T>
int sum(T arr, int numArr)
{
    int i;
    int result = 0;
    for(i = 0; i < numArr; ++i)
    {
        result += arr[i];
    }
  return result;
}

int main()
{
    int number;

    cout << "Please input how many number that you want to sum" << endl;
    cin >> number;
    cout << "Please input the number" << endl;

    int arr[number];

    for (int i = 0; i < number; i++)
    {
        cin >> arr[i];
    }

    cout << sum(arr, number);
    return 0;
}
