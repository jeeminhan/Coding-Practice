#include <string.h>
#include <vector>
#include <iostream>
using namespace std;

string trim (string input) { //get rid of trailing and leading whitespace
    int i = input.length()-1;
    char space = ' ';
    while(input[0] == space) {
        input.erase(0,1);
        i--;
    }
    while(input.at(i) == space) {
        input.erase(i,1);
        i--;
    }
    return input;
}

vector<string> split (string line, string separator=" ", bool flag = false) {  //gets rid of string though
    string temp = "";
    line = trim(line);
    vector<string> holder;
    int position = 0;
    int quote_track = 0;
    if (flag) {
        while(position < line.size()) {
             //adding letter
            if (line[position] == '\"' || line[position] == '\'') {
                quote_track++;
                if (separator == "|")
                    temp += line[position];
                if (quote_track % 2 == 0) { 
                    //holder.push_back(temp);
                    //temp = "";
                }
            }
            else if (line[position] == ' ' && quote_track%2==0 && temp == "" ) {
            }
            else if (line[position] == separator[0] && quote_track%2==0) {
                if (temp != "") {
                    holder.push_back(temp);
                    temp = "";
                }
            }
            else {
                temp += line[position];
            }
            position++;
        }
        if (temp != "") 
            holder.push_back(temp);
            cout << temp << endl;
    }
    else {
        while ((position = line.find(separator)) != string::npos) {
            holder.push_back(line.substr(0, position));
            line.erase(0, position + separator.length());
            //cout << "Vector: " << holder.at(i) << endl;
        }   
        holder.push_back(line);
            //cout << "DFHSDKJF" << holder.at;
        
    }
    return holder;
}

int main() {
    string temp = "awk \'{print $1$11}\'<test.txt | head -10 | head -8 | head -7 | sort > output.txt";
    int position = 0;
    // while (position = inputline.find('\'') != string::npos) {

    // }
    vector<string> parts = split(temp, "|", true);
    for (int i=0; i<parts.size(); i++) {
        cout << "Line " << i << ": " << parts.at(i) << endl;
    }
}