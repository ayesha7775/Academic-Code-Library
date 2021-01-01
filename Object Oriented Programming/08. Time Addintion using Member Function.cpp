//Add two time objects using a member function
#include<iostream>
using namespace std;

class time{
    int hours,minutes,seconds;
public:
    void input(){
        cout<<"Enter hours, minutes and seconds to initialize time: ";
        cin>>hours>>minutes>>seconds;
    }
    void display(){
        if(minutes>59 || seconds>59){
            minutes+=seconds/60;
            seconds%=60;
            hours+=(minutes/60);
            minutes%=60;
        }
        cout<<hours<<" h "<<minutes<<" m "<<seconds<<" s"<<endl;
    }
    time add(time t1, time t2){
        time res;
        res.hours=t1.hours+t2.hours;
        res.minutes=t1.minutes+t2.minutes;
        res.seconds=t1.seconds+t2.seconds;
        return res;
    }
};
int main(){
    time obj1,obj2,obj3;
    obj1.input();
    obj2.input();
    obj3=obj3.add(obj1,obj2);
    cout<<"Time1: ";
    obj1.display();
    cout<<"Time2: ";
    obj2.display();
    cout<<"Addition of two times: ";
    obj3.display();
    return 0;
}
