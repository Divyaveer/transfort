#include "onlineBanking.h"
using namespace std;

// Global Variables-----------------------------------------------
vector<vector<string>> db;

vector<string> row;
string username;

void landingPage();

void loginPage();

void customisedDashboardPage();

void customerDashboardPage();
//----------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------

int main() {
    landingPage();

    return 0;
}

//Landing Page or Home Page
void landingPage() {
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
            loginPage();
            break;
        case 3:
            exit(0);
            break;
        default:
            system("cls");
            cout<<"\n\n\t\tInvalid Input!!! Try Again.....\n\n";
            landingPage();
    }
}

//Login Page
void loginPage() {
    string userid, password, temPass, line, word;
    int count = 0, i;

    system("cls");
    
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tEnter your User ID : ";
    cin>>userid;

    cout<<"\n\t\t\t\t\t\t\t\tEnter your Password : ";
    cin>>password;

    //----------------------------------------------------------------------------------------------
                                            //User id & Password Checking codes
    //----------------------------------------------------------------------------------------------
    ifstream read("database\\"+userid+".txt");
    
    if(read.is_open()){ //User id Check
        while(getline(read, line)){
            row.clear();

            stringstream str(line);

            while(getline(str, word)){
                int i=0;
                row.push_back(word);
            
                if( password==row[i]){
                    username = userid;
                    count = 1;
                }
                i++;
            }
            db.push_back(row);
        }
        
        // cout<<db.size();
        
        read.close();
        // exit(0);

        if (count)
            customisedDashboardPage();
        else
            cout << "Check Line No. 166 ............\n\n";
    }
    else{
        //User Id doesn't Exist !!!!
        system("cls");
        cout<<"\n\n\t\tThere is no User like "<<userid<<" !!! Try again......\n\n";
        sleep(5);
        landingPage();
    }
}

//Customised Dashboard Page
void customisedDashboardPage() {
    int choice;

    int r=11, c=61, i, j;

    system("cls");
    cout<<endl<<endl;
    
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(i<r && j==0)
                cout<<"\t\t\t";

            if(i==0 && j==1){
                cout<<"Author: Divyaveer ";
                j+=9;
            }

            if(i==1 && j==25){
                cout<<"Welcome Divyaveer ";
                j+=9;
            }

            if(i==0 && j==48){
                cout<<" Customised Dashboard ";
                j+=11;
            }

            if(i==4 && j==4){
                cout<<"Press:----";
                j+=5;
            }

            if(i==5 && j==6){
                cout<<"1. Customer Dashboard ";
                j+=11;
            }

            if(i==6 && j==6){
                cout<<"2. Add another Account";
                j+=11;    
            }

            if(i==7 && j==6){
                cout<<"3. Change Password";
                j+=9;
            }

            if(i==8 && j==6){
                cout<<"4. Logout ";
                j+=5;
            }

            // if(i==r-1 && j==48){
            //     cout<<t_Stamp;
            //     j=c;
            // }

            if(i==r-1 && j==1){
                cout<<"Coach : Darshan Sir (TOPS Tech, Ahmedabad) ";
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

    cout<<"\n\n\t\t\tEnter your Choice: ";
    cin>>choice;
    
    if(choice == 1){
        customerDashboardPage();
    }else if(choice == 2){
        // addAnotherAccount();
    }else if(choice == 3){
        // changePassword();
    }else if(choice == 4){
        // logout();
    }else{
        system("cls");
        cout<<"\n\n\t\tWrong Input!!!! Try Again.....\n\n";
        sleep(5);
        customisedDashboardPage();
    }

    cout<<endl<<endl;
}

void customerDashboardPage() {
    string userid="divyaveer", line, word;
    fstream file("database\\"+userid+".txt", ios::in);
    
    while(getline(file, line)){
        row.clear();

        stringstream str(line);

        while(str>>word)
            row.push_back(word);
        db.push_back(row);
    }

    string currAcc, ppfAcc;

    if(db[7][0] != ".."){
        currAcc = "y";
    }
    
    if(db[8][0] != ".."){
        ppfAcc = "y";
    }
        
    int r=12, c=61, i, j, choice;

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

            if(i==1 && j==25){
                cout<<"Customer Dashboard";
                j+=9;
            }

            if(i==4 && j==4){
                cout<<"Press:----";
                j+=5;
            }

            if(i==5 && j==6){
                cout<<"1. View Savings Account ";
                j+=12;
            }

            if(i==6 && j==6){
                if(currAcc == "y"){
                    cout<<"2. View Current Account ";
                    j+=12;
                }else if(currAcc != "y" && ppfAcc == "y"){
                    cout<<"2. View Public Provided Fund Account";
                    j+=18;
                }else if(currAcc != "y" && ppfAcc != "y"){
                    cout<<"2. Logout ";
                    j+=5;
                }
            }

            if(i==7 && j==6){
                if(currAcc == "y" && ppfAcc == "y"){
                    cout<<"3. View Public Provided Fund Account";
                    j+=18;
                }else if(currAcc == "y" || ppfAcc == "y"){
                    cout<<"3. Logout ";
                    j+=5;
                }else{
                    cout<<"3. Back ";
                    j+=4;
                }
            }

            if(i==8 && j==6){
                if(currAcc == "y" && ppfAcc == "y"){
                    cout<<"4. Logout ";
                    j+=5;
                }else if(currAcc == "y" || ppfAcc == "y"){
                    cout<<"4. Back ";
                    j+=4;
                }
            }

            if(i==9 && j==6){
                if(currAcc == "y" && ppfAcc == "y"){
                    cout<<"5. Back ";
                    j+=4;
                }
            }

            // if(i==r-1 && j==48){
            //     cout<<t_Stamp;
            //     j=c;
            // }

            if(i==r-1 && j==1){
                cout<<"Coach : Darshan Sir (TOPS Tech, Ahmedabad) ";
                j+=21;
            }

            if(i==2 && j<c)
                cout<<"* ";
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

    if(choice == 1){
        // viewSavingsAccount();
    }else if(choice == 2) {
        if(currAcc == "y"){
            // viewCurrentAccount();
        }else if(currAcc != "y" && ppfAcc == "y"){
            // viewPublicProviedFundAccount();
        }else if(currAcc != "y" && ppfAcc != "y"){
            // logout();
        }
    }else if(choice == 3){

    }else if(choice == 4){

    }else if(choice == 5){

    }else{
        system("cls");
        cout<<"\n\n\t\tWrong Input !!!! Try Again......\n\n";
        sleep(5);
        customerDashboardPage();
    }

}