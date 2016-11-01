#include <iostream>

using namespace std;

template <class T>
T minimum (T x, T y)
{
    T lesser;
    if (x > y)
    {
        lesser = y;
    }
    else
        lesser = x;

    return lesser;
}

template <class A>
A maximum (A x, A y)
{
    A bigger;
    if (x > y)
        bigger =  x;
    else
        bigger = y;
    return bigger;
}
int main()
{
    int a1, a2;
    double b1, b2;
    float c1, c2;

    cout << "Please input two integer" << endl;
    cin >> a1 >> a2;
    cout << "Please input two double" << endl;
    cin >> b1 >> b2;
    cout << "Please input two float" << endl;
    cin >> c1 >> c2;

    cout << "The lesser is " << minimum(a1,a2) << ", and the bigger is " << maximum(a1, a2) << endl;
    cout << "The lesser is " << minimum(b1,b2) << ", and the bigger is " << maximum(b1, b2) << endl;
    cout << "The lesser is " << minimum(c1,c2) << ", and the bigger is " << maximum(c1, c2) << endl;

    return 0;
}
