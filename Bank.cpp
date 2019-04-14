#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

class banker
{
        int acno;
        char nm[100], acctype[100];
        float bal;
   public:
        bank(int acc_no, char *name, char *acc_type, float balance)
        {
                acno=acc_no;
                strcpy(nm, name);
                strcpy(acctype, acc_type);
                bal=balance;
        }
        void deposit();

        void withdraw();

        void display();
};
void banker::deposit()
{
        int damt1;
        cout<<"\n Enter Deposit Amount = ";
        cin>>damt1;
        bal+=damt1;
}
void banker::withdraw()
{
        int wamt1;
        cout<<"\n Enter Withdraw Amount = ";
        cin>>wamt1;
        if(wamt1>bal)
                cout<<"\n\t**************** Cannot Withdraw Amount******************\n";
}
void banker::display()
{

        cout<<"\n Account No. : "<<acno;
        cout<<"\n Name : "<<nm;
        cout<<"\n Account Type : "<<acctype;
        cout<<"\n Balance : "<<bal<<endl<<endl;
}
int main()
{
  //  bank b1;
        int acc_no;
        char name[100], acc_type[100];
        float balance;
        cout<<"\n Enter Details: \n";
        cout<<"\n Account No. ";
        cin>>acc_no;
        cout<<"\n Name : ";
        cin>>name;
        cout<<"\n Account Type(Saving/Current): ";
        cin>>acc_type;
        cout<<"\n Balance : ";
        cin>>balance;
banker b1;
b1.bank(acc_no, name, acc_type, balance);
cout<<"\n\tpress 1 to deposit, press 2 to withdraw : ";
int o;
cin>>o;
if(o==2)
{b1.withdraw();}
else{
b1.deposit();}
b1.display();
  return 0;
}
