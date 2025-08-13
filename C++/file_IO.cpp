#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <vector>
#include <map>

using namespace std;

int main() {
    string option;
    string line;
    ifstream fileptr;
    map<string, string> mp;
    
    
    while (true) {
        fileptr.open("file_io.txt");
        if (fileptr.is_open())
        {
            while (getline(fileptr,line))
            {
            mp[line] = "{ \"name\": "+line+" }";
            }

            fileptr.close();
        }
        else cout << "Unable to open file";
        for (const auto& pair : mp)
        {
        cout << pair.first <<": "<< pair.second << endl;
        }
        cout << "\nSelect an option:\n 1) Search\n 2) Add\n 3) Update\n 4) Exit\n";
        getline(cin, option);
        
        if (option == "Search") {
            fileptr.open("file_io.txt");
            if (!fileptr.is_open()) {
                cerr << "Error opening file" << endl;
                ofstream createFile("file_io.txt");
                cout << "File successfully created! Write Something: ";
                getline(cin, line);
                createFile << line;
                createFile.close();
            } else {
                cout << "\nSearch Something: ";
                int c = 0;
                string comp;
                while (getline(fileptr, line)) {
                    if(c == 0){
                    getline(cin, comp);
                    c++;
                    }
                    if (comp == line) {
                        cout << "========================================";
                        cout << "\n" << line << "\n";
                        cout << "========================================\n";
                        break;
                    }
                }
            }
            fileptr.close();
        } else if (option == "Add") {
            ofstream appendFile("file_io.txt", ios::app);
            cout << "\nWrite Something: ";
            getline(cin, line);
            appendFile << "\n" << line;
            appendFile.close();
            cout << "Added Successfully!\n";
        } else if (option == "Update") {
            cout << "Update!\n";
        } else if (option == "Exit" || option == "exit") {
            cout << "=======Exit=======\n";
            break;
        } else {
            cout << "Invalid!\n";
        }
    }
    return 0;
}

