//Store text to a file
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file;
    string line;
    file.open("sample.txt");
    while(file){
        getline(cin, line);
        if (line=="-1")
            break;
        file << line << endl;
    }
    file.close();
    return 0;
}
