//Find the greatest of three given numbers in three different classes using friend function
using namespace std;

class B; class C;
class A{
    int a;
public:
    A(){
        cout<<"Enter first value: ";
        cin>>a;
    }
    friend void greatest(A,B,C);
};

class B{
    int b;
public:
    B(){
        cout<<"Enter second value: ";
        cin>>b;
    }
    friend void greatest(A,B,C);
};

class C{
    int c;
public:
    C(){
        cout<<"Enter third value: ";
        cin>>c;
    }friend void greatest(A,B,C);
};

void greatest(A ob1,B ob2, C ob3)
{
    int greatest_num;
    if(ob1.a>ob2.b && ob1.a>ob3.c)
        greatest_num=ob1.a;
    else if(ob2.b>ob1.a && ob2.b>ob3.c)
        greatest_num=ob2.b;
    else
        greatest_num=ob3.c;
    cout<<"\nGreatest number is "<<greatest_num<<endl;
}

int main()
{
    A obj1;
    B obj2;
    C obj3;
    greatest(obj1,obj2,obj3);
    return 0;
}
