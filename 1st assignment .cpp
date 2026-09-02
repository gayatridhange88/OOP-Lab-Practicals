#include <iostream>
#include<string>
using namespace std;
class book
{
    private:
    string title;
    string authour;
    string isbn;
    double price;

    public:
    void recordBook()
    {
        cout<<"Enter book title:";
        getline(cin,title);

        cout<<"Enter author name:";
        getline(cin,authour);

        cout<<"enter isbn:";
        getline(cin,isbn);

        cout<<"Enter price:";
        cin>>price;
        cin.ignore();
    }
    void displaybook()
    {
        cout<<"\n----Book Information----"<<endl;
        cout<<"title:"<<title<<endl;
        cout<<"authour:"<<authour<<endl;
        cout<<"isbn:"<<isbn<<endl;
        cout<<"price:"<<price<<endl;
    }
   };
   int main()
   {
    book book;
    cout<<"====Digital Book inventory system===="<<endl;
    book.recordBook();
    book.displaybook();

    return 0;
   }
