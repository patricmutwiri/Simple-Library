#include <iostream>

using namespace std;

class Book {
    public:
    string author;
    string title;
    string book_number;
    string books[20][5];
    string price;
    string copies;
    int no;
    // insert books
    void insertBook(){
        cout<<"Enter total books to save\t:"; cin>>no;
        if(no<1){
            no=1;
        }
        int i;
        for (i=1;i<=no;i++) {
            cout<<"\n\n";
	        cout<<"Enter Author\t: ";
	        cin>>books[i][0];
	        cout<<"Enter Title\t: ";
	        cin>>books[i][1];
	        cout<<"Enter Book Number\t: ";
	        cin>>books[i][2];
	        cout<<"Enter Copies\t: ";
	        cin>>books[i][3];
	        cout<<"Enter Price\t :";
	        cin>>books[i][4];
        }
    }

    // List books
    void listBooks(){
        int i;
        cout<<"\n MY SIMPLE LIBRARY SYSTEM";
        cout<<"\n::  Books Details  ::\n";
        for(i=1; i<=no; i++) {
            cout<<"------------------------------------------\n";
            cout<<"\nBook "<<books[i][1]<<" Details \n";
            cout<<"------------------------------------------\n";
            cout<<"Author \t:"<<books[i][0]<<endl;
            cout<<"Title \t:"<<books[i][1]<<endl;
            cout<<"Book Number \t:"<<books[i][2]<<endl;
            cout<<"Copies \t: "<<books[i][3]<<endl;
            cout<<"Price \t: "<<books[i][4]<<endl;
        }
    }
};

int main()
{
    Book bk;
    // insert
    bk.insertBook();

    // list
    bk.listBooks();

    return 0;
}
