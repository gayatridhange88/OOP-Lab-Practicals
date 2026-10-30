#include<iostream>
using namespace std;

template<typename T>
T myMax(T x, T y)
{
    return (x > y) ? x : y;
}

int main()
{
    cout << "Higher Marks: " << myMax<int>(75, 90) << endl;

    cout << "Higher Price: " << myMax<double>(499.50, 699.75) << endl;

    cout << "Higher Sensor Reading: " << myMax<float>(25.5f, 30.8f) << endl;

    return 0;
}

