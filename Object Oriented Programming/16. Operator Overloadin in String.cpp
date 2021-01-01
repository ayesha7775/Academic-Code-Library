//Overload operator '+' to concatenate two string objects and '=' to copy a string object
#include<bits/stdc++.h>
using namespace std;

class String{
    char arr[50];
public:
    void getString(){
        cout<<"Enter a string: ";
        gets(arr);
    }
    String operator +(String &obj){
        strcat(arr," ");
        strcat(arr,obj.arr);
    }
    String operator =(String obj){
        strcpy(arr,obj.arr);
    }
    void showString(){
        cout<<arr<<endl;
    }
};

int main()
{
    String st1,st2,st3,st4,st5;
    st1.getString();
    st2.getString();
    st1+st2;
    cout<<"Concatenated string is: ";
    st1.showString();
    st4.getString();
    st3=st4;
    cout<<"Copied string is: ";
    st3.showString();
    return 0;
}
