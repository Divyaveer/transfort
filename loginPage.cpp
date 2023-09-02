#include<iostream>
#include<fstream>
#include<unistd.h>
using namespace std;

int main() {
    string userid, password, temPass;

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
        while(read>>temPass){
            if(temPass == password){    
                // username = userid;
                // customisedDashboardPage();
                system("cls");
                cout<<"\n\n\t\tCorrect !!!\n\n";
                break;
            }

            if(read.eof()){
                //Wrong Password !!!
                system("cls");
                cout<<"\n\n\t\tWrong Password !!! Try again......\n\n";
                sleep(5);
                // landingPage();
            }
        }
    }else{
        //User Id doesn't Exist !!!!
        system("cls");
        cout<<"\n\n\t\tThere is no User like "<<userid<<" !!! Try again......\n\n";
        sleep(5);
        // landingPage();
    }

    return 0;
}