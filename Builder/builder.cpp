#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    if (argc < 2) 
    {
        cout << "No commands" << endl;
        return 0;
    }
    string command = argv[2];

    if (command == "init")
    {
        string author, project;
        cout << "Enter dev's nickname: ";
        cin >> author;
        cout << "Enter project's name";
        cin >> project;

        fstream yml;
        yml.open()
    }

    return 0;
}