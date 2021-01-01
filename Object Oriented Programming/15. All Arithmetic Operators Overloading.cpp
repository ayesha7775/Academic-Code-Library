// Create a class ‘ABC’ that contains one double type data member. Overload all the four arithmetic operators so that they operate on the object of class ‘ABC’

# include <iostream>

using namespace std;

class ABC{
    double number;
public:
    void input(){
        cout<<"Enter a floating number: ";
        cin>>number;
    }
    ABC operator +(ABC &x){
        ABC temp;
        temp.number=number+x.number;
        return temp;
    }
    ABC operator -(ABC &x){
        ABC temp;
        temp.number=number-x.number;
        return temp;
    }
    ABC operator *(ABC &x){
        ABC temp;
        temp.number=number*x.number;
        return temp;
    }
    ABC operator /(ABC &x){
        ABC temp;
        temp.number=number/x.number;
        return temp;
    }
    void output(){
        cout<<number<<endl;
    }

};

int main()
{
    ABC a,b,c;
    a.input();
    b.input();
    c=a+b;
    cout<<"Addition of two object: ";
    c.output();
    c=a-b;
    cout<<"Subtraction of two object:";
    c.output();
    c=a*b;
    cout<<"Multiplication of two object: ";
    c.output();
    c=a/b;
    cout<<"Division of two object: ";
    c.output();
    return 0;
}
