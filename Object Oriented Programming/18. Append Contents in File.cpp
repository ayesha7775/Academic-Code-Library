//Append the contents of a file to another
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream f1,f2;
    string line;
    f1.open("file1.txt", ios::app | ios::ate);
    f2.open("file2.txt");
    if(f2){
        f1<<f2.rdbuf()<<endl;
    }
    f1.close();
    f2.close();
    return 0;
}
