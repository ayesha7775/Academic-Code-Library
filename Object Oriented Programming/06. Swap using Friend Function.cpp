//Swap the numbers of two different classes using friend function
#include<bits/stdc++.h>
using namespace std;

class B;
class A{
    int a;
public:
    A(){
        cout<<"Enter a value: ";
        cin>>a;
    }
    void show(){
        cout<<"\ta = "<<a<<endl;
    }
    friend void swapping(A&,B&);
};

class B{
    int b;
public:
    B(){
        cout<<"Enter another value: ";
        cin>>b;
    }
    void show(){
        cout<<"\tb = "<<b<<endl;
    }
    friend void swapping(A&,B&);
};

void swapping(A &ob1,B &ob2)
{
    int temp;
    temp=ob1.a;
    ob1.a=ob2.b;
    ob2.b=temp;
}

int main()
{
    A ob1;
    B ob2;
    cout<<"Before swapping:"<<endl;
    ob1.show();
    ob2.show();
    swapping(ob1,ob2);
    cout<<"After swapping:"<<endl;
    ob1.show();
    ob2.show();
    return 0;
}
