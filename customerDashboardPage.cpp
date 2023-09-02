#include<iostream>
#include<vector>
#include<fstream>
#include<sstream>
using namespace std;

vector<vector<string>> db;
vector<string> row;

int main() {
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
    
    return 0;
}