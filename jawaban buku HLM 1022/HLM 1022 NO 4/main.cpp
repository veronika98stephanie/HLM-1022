#include <iostream>

using namespace std;

template <class T>

T absValue (T x)
{
    return (x > 0 ? x = x : x * -1);
}

int main()
{
    double x;

    cin >> x;

    cout << absValue(x);

    return 0;
}
