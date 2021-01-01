//Enter a number and find its factorial using constructor
#include<bits/stdc++.h>
using namespace std;

class factorial{
    int n,fact=1;
public:
    factorial(){
        cout<<"Enter a number: ";
        cin>>n;
        for(int i=1;i<=n;++i)
            fact*=i;
    }
    void display(){
        cout<<"Factorial of "<<n<<", "<<n<<"! = "<<fact<<endl;
    }

};
int main()
{
    factorial f;
    f.display();
    return 0;
}
