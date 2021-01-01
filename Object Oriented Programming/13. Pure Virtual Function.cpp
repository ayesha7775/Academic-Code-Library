//Calculate the area of different shapes using Pure Virtual Function
#include<bits/stdc++.h>
using namespace std;

class SHAPE{
protected:
    double val1,val2;
public:
    void getdata(double l1, double b1){
        val1=l1;
        val2=b1;
    }
    void virtual display()=0;
 };

class TRIANGLE: public SHAPE{
public:
    void display(){
        cout<<"\nArea of Triangle: "<<(0.5*val1*val2)<<endl;
    }
 };

class RECTANGLE:public SHAPE{
public:
    void display(){
        cout<<"\nArea of Rectangle: "<<val1*val2<<endl;
    }
 };

 int main()
 {
    SHAPE *s;
    int ch;
    double v1,v2;
    do{
        cout<<"\n\nEnter\n\t1 for Area of Triangle \n\t2 for Area of Rectangle";
        cout<<"\nYour choice: ";
        cin>>ch;
        switch(ch){
            case 1:
                {TRIANGLE t;
                s=&t;
                break;}
            case 2:
                {RECTANGLE r;
                s=&r;
                break;}
            default: exit(0);
        }
        cout<<"Enter the values of a and b to calculate the area: ";
        cin>>v1>>v2;
        s->getdata(v1,v2);
        s->display();
    }while(ch==1 || ch==2);
    return 0;
 }
