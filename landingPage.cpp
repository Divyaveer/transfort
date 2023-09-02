#include<iostream>
using namespace std;

int main() {
    int r=21, c=61, i, j, choice;

    system("cls");
    cout<<endl<<endl;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {   
            if(i<r && j==0)
                cout<<"\t\t\t";

            if(i==0 && j==1){
                cout<<"Author: Divyaveer ";
                j+=9;
            }

            if(i==1 && j==27){
                cout<<"State Bank Of India ";
                j+=10;
            }

            if(i==4 && j==24){
                cout<<"Online Banking Customer Service ";
                j+=16;
            }

            if(i==7 && j==30){
                cout<<"Welcome ";
                j+=4;
            }

            if(i==0 && j==55){
                cout<<"HOME PAGE ";
                j+=5;
            }

            if(i==10 && j==3){
                cout<<"Press:----";
                j+=5;
            }

            if(i==11 && j==5){
                cout<<"1. Register ";
                j+=6;
            }

            if(i==12 && j==5){
                cout<<"2. Login";
                j+=4;
            }

            if(i==14 && j==5){
                cout<<"3. Exit ";
                j+=4;
            }

            if(i==r-1 && j==1){
                cout<<"Coach : Darshan Sir (TOPS Tech, Ahmedabad) ";
                j+=21;
            }

            if(i==2 && j<c){
                cout<<"* ";
            }else if(i==6 && j<c){
                cout<<"* ";
            }else if(i==8 && j<c){
                cout<<"* ";
            }
            else if(i==18 && j<c){
                cout<<"* ";
            }
            else if ((i==0 && j<c) || ((i<r-1 && i!=0) && (j==0 || j==c-1)) || (i==r-1 && j<c))
                cout << "* ";
            else
                cout<<"  ";
        }
                cout << endl;
    }
    cout<<endl<<endl;

    cout<<"\t\t\tEnter your Choice : ";
    cin>>choice;

    switch(choice){
        case 1:
            // registerPage();
            break;
        case 2:
            // loginPage();
            break;
        case 3:
            exit(0);
            break;
        default:
            system("cls");
            cout<<"\n\n\t\tInvalid Input!!! Try Again.....\n\n";
            // currentPage();
    }
    
    return 0;
}