//Remove any types of whitespace from a text file and store to another
#include<bits/stdc++.h>
using namespace std;

int main()
{
    fstream file,file2;
    string line;
    file.open("sample.txt");
    file2.open("output.txt");
    while(getline(file, line)){
        line.erase(std::remove_if(line.begin(), line.end(), ::isspace), line.end());
        file2<<line;
    }
    file.close();
    file2.close();
    return 0;
}
