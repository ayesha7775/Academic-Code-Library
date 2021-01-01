//Add two complex number objects using constructor overloading
#include<iostream>
using namespace std;

class complex{
    int real,image;
public:
    complex(){}
    complex(int val){
        real=val;
        image=val;
    }
    complex(int real_part, int imaginary_part){
        real=real_part;
        image=imaginary_part;
    }
    complex add(complex c1, complex c2){
        complex temp;
        temp.real=c1.real+c2.real;
        temp.image=c1.image+c2.image;
        return temp;
    }
    void display(){
        cout<<this->real<<"+"<<this->image<<"i"<<endl;
    }
};

int main()
{
    int b_parts,r_part,i_part;
    complex obj1;
    cout<<"Enter a value to initialize real and imaginary parts to equal values: ";
    cin>>b_parts;
    complex obj2(b_parts);
    cout<<"Enter two values for real and imaginary parts: ";
    cin>>r_part>>i_part;
    complex obj3(r_part,i_part);
    obj1=obj1.add(obj2,obj3);
    cout<<"First complex number: ";
    obj2.display();
    cout<<"Second complex number: ";
    obj3.display();
    cout<<"Addition of two complex numbers: ";
    obj1.display();
    return 0;
}
