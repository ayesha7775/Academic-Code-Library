//Banking operations using array of objects
#include<bits/stdc++.h>
using namespace std;
int i=0;

class bank{
    string dpstrName,accType;
    double balanceAmount;
public:
    string accNo;
    bank(){
        balanceAmount=0.00;
    }
    void initAcc(){
        cout<<"Name of the depositor: ";
        cin>>dpstrName;
        cout<<"Account type: ";
        cin>>accType;
        cout<<"Account number: ";
        cin>>accNo;
        cout<<"Balance amount: ";
        cin>>balanceAmount;
    }
    void deposit(){
        double amnt;
        cout<<"Enter amount: ";
        cin>>amnt;
        balanceAmount+=amnt;
    }
    void withdraw(){
        double amnt;
        if(amnt<balanceAmount)
            balanceAmount-=amnt;
        else
            cout<<"No enough balance";
    }
    void display(){
        cout<<"Depositor name: "<<dpstrName<<endl;
        cout<<"Balance amount: "<<balanceAmount<<endl;
    }
};

int main(){
    bank acc[10];
    string acno;
    int ch,j;
    do{
        cout<<"\nEnter(1-5) 1.Create Account 2. Deposit Amount 3.Withdraw Amount 4.Display 5.Exit\n";
        cin>>ch;
        switch(ch){
            case 1:
                if(i<10){
                    acc[i].initAcc();
                    i++;
                }
                break;
            case 2:
                cout<<"Enter account number: ";
                cin>>acno;
                for(j=0;j<i;j++)
                    if(acc[j].accNo==acno)
                        acc[j].deposit();
                break;
            case 3:
                cout<<"Enter account number: ";
                cin>>acno;
                for(j=0;j<i;j++)
                    if(acc[j].accNo==acno)
                        acc[j].withdraw();
                break;
            case 4:
                cout<<"Enter account number: ";
                cin>>acno;
                 for(j=0;j<i;j++)
                    if(acc[j].accNo==acno)
                        acc[j].display();
                break;
            case 5: exit(0);
            default: cout<<"Wrong choice!";
        }
    }while(ch!=3);
    return 0;
}
