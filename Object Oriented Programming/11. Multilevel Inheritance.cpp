#include<bits/stdc++.h>
using namespace std;

class STUDENT{
      int roll;
      string name;
    public:
        void getinfo(){
            cout<<"Enter roll no.: ";
            cin>>roll;getchar();
            cout<<"Enter name: ";
            getline(cin,name);
        }
        void putinfo(){
            cout<<"Student's Name: "<<name<<"\nRoll No: "<<roll<<endl;
        }
};

class EXAM: public STUDENT{
public:
    string sub[6];
    int marks[6];
    void getmarks(){
        cout<<"Enter six subject's name and mark respectively:\n";
        for(int i=0;i<6;++i)
            cin>>sub[i]>>marks[i];
    }
    void putmarks(){
        for(int i=0;i<6;++i)
            cout<<"Subject: "<<sub[i]<<"\tMark: "<<marks[i]<<endl;
        }
};

class RESULT : public EXAM{
    int totalMarks=0;
public:
    void showTotalmarks(){
        for(int i=0;i<6;++i)
            totalMarks+=marks[i];
        cout<<"Total Marks: "<<totalMarks<<endl;
    }
};

int main()
{
    RESULT obj;
    obj.getinfo();
    obj.getmarks();
    obj.putinfo();
    obj.putmarks();
    obj.showTotalmarks();
    return 0;
}
