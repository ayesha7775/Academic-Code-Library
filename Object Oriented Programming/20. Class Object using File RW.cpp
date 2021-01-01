//Class object using file operations
#include<bits/stdc++.h>
using namespace std;

class st_info{
    string name;
    int age;
    double height,weight;
public:
    void read(){
        cout<<"Enter Name: ";
        getline(cin, name);
        cout<<"Age: ";
        cin>>age;
        cout<<"Height: ";
        cin>>height;
        cout<<"Weight: ";
        cin>>weight;
    }
    void write(){
        fstream myfile;
        myfile.open("stFile.txt");
        myfile<<name<<"\n"<<age<<"\n"<<height<<"\n"<<weight<<endl;
        myfile.close();
    }
    void display(){
        fstream myfile;
        string line;
        myfile.open("stFile.txt");
        if(myfile.is_open()){
            while(getline(myfile,line))
                cout<<line<<endl;
            myfile.close();
        }
    }
};

int main()
{
    st_info ob;
    ob.read();
    ob.write();
    ob.display();
    return 0;
}
