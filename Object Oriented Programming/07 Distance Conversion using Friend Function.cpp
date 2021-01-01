//Convert distance from feet to meter and vice versa
#include<iostream>
#include<cmath>
using namespace std;
class DB;
class DM{
    int meter,cmeter;
    double total;
public:
    void getdata(){
        cout<<"Enter a distance in meter: ";
        cin>>meter;
        cout<<"Enter a distance in centimeter: ";
        cin>>cmeter;
    }
    void show(){
        cout<<"\nYour distance is "<<meter<<" meter ";
        cout<<" and "<<cmeter<<" centimeter.\n" ;
    }
    void resutl(){
        total=meter*100+cmeter;
    }
    friend void in_meter(DM x, DB y);
    friend void in_feet(DM x, DB y);
};
class DB{
    int feet,inchees;
    double total;
public:
    void getdata(){
        cout<<"\nEnter a distance in feet: ";
        cin>>feet;
        cout<<"\nEnter a distance in inches: ";
        cin>>inchees;
    }
    void show(){
        cout<<"\nYour distance is "<<feet<<" meter ";
        cout<<" and "<<inchees<<" centimeter.\n" ;
    }
    void result(){
        total=feet*12+inchees;
        total=total*2.54;
    }
    friend void in_meter(DM x, DB y);
    friend void in_feet(DM x, DB y);
};
void in_meter(DM x, DB y){
    double ax,m;
    ax=x.total+y.total;
    m=int(ax)%100;
    ax=int(ax)/100;
    cout<<"\nYour total distance is "<<ax<<" meter and "<<int (m)<<" centimeter. \n";
}
void in_feet(DM x, DB y){
    double ax,inc,m,inch;
    ax=x.total+y.total;
    m=ax*0.0328084;
    inc=ax*0.0328084-m;
    inch=inc*12;
    cout<<"\nYour total distance is "<<int(m)<<" feet and "<<inch<<" inches. \n";
}
int main(){
    DM a;
    DB b;
    a.getdata();
    a.show();
    b.getdata();
    b.show();
    int am;
    cout<<"\n\nEnter\n1. To show in meter and centimeter.\n";
    cout<<"2. To show in feet and inches ";
    cin>>am;
    switch(am){
    case 1: in_meter(a,b);
        break;
    case 2: in_feet(a,b);
        break;
    default:
        cout<<"please input correctly.\n";
        break;
    }
    return 0;
}
