//Calculate student's result with virtual base class concept
# include <iostream>

using namespace std;

class STUDENT{
      int roll;
      string name;
    public:
        void getinfo(int r, string n)
        {
            roll=r;
            name=n;
        }
        void putinfo()
        {
            cout<<"Student's Name: "<<name<<"\nRoll No: "<<roll<<endl;
        }
};

class INCOURSE_EXAM : virtual public STUDENT{
    public:
        int dld,oop,os;
        void getmarks(int x, int y, int z)
        {
            dld=x;
            oop=y;
            os=z;
        }
        void putmarks()
        {
            cout<<"Incourse exam marks:\nDLD: "<<dld<<" OOP: "<<oop<<" OS: "<<os<<endl;
        }
};

class FINAL_EXAM : virtual public STUDENT{
    public:
        int Dld,Oop,Os;
        void getMarks(int x, int y, int z)
        {
            Dld=x;
            Oop=y;
            Os=z;
        }
        void putMarks()
        {
            cout<<"Final exam marks:\nDLD: "<<Dld<<" OOP: "<<Oop<<" OS: "<<Os<<endl;
        }
};

class RESULT : public INCOURSE_EXAM , public FINAL_EXAM{
        int DLD,OOP,OS,total;
    public:
        void display()
        {
        DLD=dld+Dld;
        OOP=oop+Oop;
        OS=os+Os;
        total=DLD+OOP+OS;
        putinfo();
        cout<<"\n";
        putmarks();
        cout<<"\n";
        putMarks();
        cout<<"\n\n";
        cout<<"Result:\nDLD: "<<DLD<<" OOP: "<<OOP<<" OS: "<<OS<<endl<<"Total mark: "<<total<<endl;
        }

};


int main()
{
    RESULT st;
    st.getinfo(1828,"Bibi Asiya");
    st.getmarks(19,18,19);
    st.getMarks(60,60,58);
    st.display();
    return 0;
}
