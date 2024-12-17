#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
    ifstream source;
    ofstream dest;
    source.open("cheerbook.txt");
    dest.open("cheerbook_copy.txt");
    
    if (!source || !dest) {
        cerr << "Error: Unable to open file." << endl;
        return 1;
    }

    // Add header line to destination file
    dest << "-------------------- BOOM ---------------------" << endl;

    string line;
    while (getline(source, line)) { // Copy lines from source file
        dest << line << endl;
    }

    // Add footer line to destination file
    dest << "-------------------- HA!! ---------------------" << endl;

    source.close();
    dest.close();
    return 0;
}
