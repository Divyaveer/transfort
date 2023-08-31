#include<iostream>
#include<cstdlib>

#define MAX_ACCOUNTS 100

using namespace std;
int people=0;

class bank_account{
    public:
        string name, type_acc, passcode;
        int accnum=(rand() % 100), balance=0;

        void input() {
            string conti;
            
            cout<<"Enter your name : ";
            cin>>name;

            cout<<"\nWhich type of Account is yours, Mr. "<<name<<" : ";
            cin>>type_acc;

            cout<<"\nMost Important, Enter your Passcode for your account : ";
            cin>>passcode;

            cout<<"\nYour Account Number = "<<accnum<<endl;

            cout<<"\nAccount Successfully Created!!!!!!!"<<endl;

            cout<<"\nDo you want to continue creating accounts (if y then press y for continue) : ";
            cin>>conti;

            if(conti == "y"){
                input();
            }
        }

        void deposite(){
            int depos;
            
            cout<<"Before deposite, Balance = "<<balance<<endl;
            
            cout<<"Enter the Amount to be Deposited : ";
            cin>>depos;

            balance += depos;

            cout<<"After depostie, Balance = "<<balance<<endl;
        }

        void widthraw() {
            int widthraw;

            cout<<"Before Widhraw, Balance = "<<balance<<endl;

            cout<<"Enter the Widthraw Amount : ";
            cin>>widthraw;

            if(widthraw > balance){
                cout<<"\n\n\t\tYou don't have that much Money in your account........\n\n";
            }else{
                balance -= widthraw;

                cout<<"After Widthraw, Balance = "<<balance<<endl;
            }
        }

        void disBasicInfo() {
            cout<<"Mr. "<<name<<", your Balance is "<<balance<<" and your Account number = "<<accnum<<endl;
        }
};

void createAccount(bank_account accounts[]){
    accounts[people].input();

    people++;
}

int checkAccount(bank_account accounts[]){
    int tempNum, i, choice;
    string tempPass, conti;

    cout<<"\nEnter your account Number ";
    cin>>tempNum;

    for(i=0; i <= people; i++){
        if(accounts[i].accnum == tempNum){
            break;
        }else{
            cout<<"\n\n\t\tSorry, We didn't any account with that account number............\n\n";
            return 0;
        }
    }

    cout<<"\nI Guess you are Mr. "<<accounts[i].name<<" if so, then enter your passcode : ";
    cin>>tempPass;

    if(tempPass == accounts[i].passcode){
        cout<<"\nWhat do you want to do :---- \n\tPress:---\n\t\t1. Check Balance\n\t\t2. Deposite Money\n\t\t3. Widthraw Money\n\t\t\tEnter your choice : ";
        cin>>choice;

        if(choice == 1){
            accounts[i].disBasicInfo();
        }else if(choice == 2){
            accounts[i].deposite();
        }else if(choice == 3){
            accounts[i].widthraw();
        }else{
            cout<<"\n\n\t\tWrong input!!! Try Again.....\n\n";
            checkAccount(accounts);
        }

        cout<<"\nDo you want to Continue (Press y to Continue) : ";
        cin>>conti;

        if(conti == "y"){
            checkAccount(accounts);
        }else{
            return 0;
        }
    }else{
        cout<<"\n\n\t\tWrong Password!!!!!>....\n\n";
    }

    return 0;
}

int main() {
    class bank_account accounts[MAX_ACCOUNTS];

    int choice;
    string conti = "y";

    while(conti == "y"){
        cout<<"----------------------------------------------------- Welcome to SBI -----------------------------------------------------\nDo you want to :---\n\tPress:---\n\t\t1. Create an Account\n\t\t2. Check an Account\n\t\t\tEnter your choice : ";
        cin>>choice;

        if(choice == 1){
            createAccount(accounts);
        }else if(choice == 2){
            checkAccount(accounts);
        }else{
            continue;
        }

        cout<<"\nDo you want to Continue in SBI (Press y for Continue) : ";
        cin>>conti;
    }
    
    return 0;
}