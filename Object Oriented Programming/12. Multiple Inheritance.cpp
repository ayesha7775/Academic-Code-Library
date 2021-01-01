//Inherit class third from class first and second
#include<bits/stdc++.h>
using namespace std;

class first{
public:
    int bookNo;
    string bookName;
    void getdata(){
        cout<<"Enter book no: ";
        cin>>bookNo;getchar();
        cout<<"Enter book name: ";
        getline(cin,bookName);
    }
    void putdata(){
        cout<<"Book no: "<<bookNo<<"\nBook name: "<<bookName<<endl;
    }
};

class second{
public:
    string authorName,publisher;
    void getdata(){
        cout<<"Enter author name: ";
        getline(cin,authorName);
        cout<<"Enter publisher name: ";
        getline(cin,publisher);
    }
    void showdata(){
        cout<<"Author name: "<<authorName<<"\nPublisher: "<<publisher<<endl;
    }
};

class third : public first,  public second{
    int pages,year;
public:
    void getdata(){
        first::getdata();
        second::getdata();
        cout<<"Enter number of pages: ";
        cin>>pages;
        cout<<"Enter year of publication: ";
        cin>>year;
    }
    void display(){
        cout<<"Number of pages: "<<pages<<"\nYear of publication: "<<year<<endl;
    }
} ;

int main(){
    int num,i;
    cout<<"Enter number of books: ";
    cin>>num;
    third obj[num];
    for(i=0;i<num;++i){
        obj[i].getdata();
        obj[i].putdata();
        obj[i].showdata();
        obj[i].display();
    }
    return 0;
}
