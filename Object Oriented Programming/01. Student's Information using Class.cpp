//Display students information using class
#include<iostream>
using namespace std;

class student{
       string name,semester,section;
       int rollno,marks[6]={0};
public:
    void input(){
        cout<<"Enter student's name: ";
        getline(cin, name);
        cout<<"\tSemester: ";
        cin>>semester;
        cout<<"\tRoll number: ";
        cin>>rollno;
        cout<<"\tSection: ";
        cin>>section;
        cout<<"\tFive subject's marks: ";
        for(int i=1;i<=5;++i){
            cin>>marks[i];
            marks[0]+=marks[i];
        }
    }
    void display(){
        cout<<"Student's Information: "<<endl;
        cout<<"\tName: "<<name<<endl;
        cout<<"\tSemester: "<<semester<<endl;
        cout<<"\tRoll Number: "<<rollno<<endl;
        cout<<"\tSection: "<<section<<endl;
        cout<<"\tMarks of five subjects:";
        for(int i=1;i<=5;++i)
            cout<<"\t"<<marks[i];
        cout<<"\n\tTotal marks: "<<marks[0]<<endl;
    }
};

int main()
{
   student s;
   s.input();
   s.display();
   return 0;
}
