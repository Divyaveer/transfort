#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include<unistd.h>
using namespace std;
constexpr size_t tnum=3;
vector<vector<string>> db={tnum, {tnum, string{}}};
vector<string> row;
string username;

int main() {
    string line, word;
    
    ifstream file("database\\divyaveer.txt");

    while(getline(file, line)){
        int i=0;
        row.clear();

        stringstream str(line);

        while(getline(str, word))
            row.push_back(word);
        db.push_back(row);
        i++;
    }

    for(int i=0; i<db.size(); i++){
        for(int j=0; db[i].size(); j++){
            cout<<db[i][j];
        }
        cout<<endl;
    }

    return 0;
}