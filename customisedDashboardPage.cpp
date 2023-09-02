#include<iostream>
#include<vector>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;
constexpr size_t tnum=3;
vector<vector<string>> db={tnum, {tnum, string{}}};
vector<string> row;
string username;

void changePassword() {
    string previousPass, newPass;

    system("cls");
    cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tEnter the Current Password : ";
    cin>>previousPass;

    if(db[1][1] == previousPass){
        cout<<"Success";
    }
}

int main() {
    int choice;
    string line, word;
    int r=11, c=61, i, j;

    system("cls");
    cout<<endl<<endl;

    ifstream file("database\\divyaveer.txt");

    while(getline(file, line)){
        int i=0;
        row.clear();

        stringstream str(line);

        while(getline(str, word))
            // row.push_back(word);
            db[i].push_back(word);
        i++;
    }

    file.close();
    
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

    if(choice == 3){
        changePassword();
    }

    cout<<endl<<endl;
    
    return 0;
}