#include<iostream>
using namespace std;

int main() {
    int r=15, c=61, i, j, choice;

    system("cls");
    cout<<endl<<endl;
    
    for(i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(i<r && j==0)
                cout<<"\t\t\t";

            if(i==0 && j==1){
                cout<<"Author: Divyaveer ";
                j+=9;
            }

            if(i==1 && j==30){
                cout<<"Services";
                j+=4;
            }

            if(i==4 && j==4){
                cout<<"Press:----";
                j+=5;
            }

            if(i==5 && j==6){
                cout<<"1. Check Avalable Balance ";
                j+=13;
            }

            if(i==6 && j==6){
                cout<<"2. Deposit Money";
                j+=8;
            }

            if(i==7 && j==6){
                cout<<"3. Withdraw Money ";
                j+=9;
            }

            if(i==8 && j==6){
                cout<<"4. Change Address ";
                j+=9;
            }

            if(i==9 && j==6){
                cout<<"5. Change Mobile No.";
                j+=10;
            }

            if(i==10 && j==6){
                cout<<"6. Last Logged on ";
                j+=9;
            }

            if(i==11 && j==6){
                cout<<"7. Dashboard";
                j+=6;
            }
            
            if(i==12 && j==6){
                cout<<"8. Logout ";
                j+=5;
            }

            if(i==r-1 && j==1){
                cout<<"Coach : Darshan Sir (TOPS Tech, Ahmedabad)";
                j+=21;
            }

            if(i==2 && j<c)
                cout<<"* ";
            else if ((i==0 && j<c) || ((i<r-1 && i!=0) && (j==0 || j==c-1)) || (i==r-1 && j<c))
                cout << "* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;

    cout<<"\t\t\tEnter your Choice : ";
    cin>>choice;
    
    return 0;
}