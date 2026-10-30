#include<iostream>
#include<string>
using namespace std;

template<typename T>
class Data
{
    private:
        T value;

    public:
        Data(T v)
        {
            value = v;
        }

        void display()
        {
            cout << "Stored Value:" << value << endl;
        }
};

int main()
{
    Data<int> d1(100);

    Data<double> d2(95.75);

    Data<string> d3("Computer Science");

    d1.display();
    d2.display();
    d3.display();

    return 0;
}

