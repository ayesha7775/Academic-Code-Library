//Raise m to power n with default value 2 for n
#include<iostream>
#include<cmath>
using namespace std;

double power(double m, int n=2){
    return pow(m,n);
}

int main()
{
    double m;
    int n,ch;
    cout<<"Enter a number, m: ";
    cin>>m;
    cout<<"Choice: 1 for enter power/2 for default power(enter 1/2): ";
    cin>>ch;
    switch(ch){
        case 1:
            cout<<"Enter a power, n: ";
            cin>>n;
            cout<<"\n\t"<<m<<"^"<<n<<": "<<power(m,n)<<endl;
            break;
        case 2:
            cout<<"\n\t"<<m<<"^2: "<<power(m)<<endl;
            break;
        default:
            cout<<"Wrong choice!\n";
    }
    return 0;
}
