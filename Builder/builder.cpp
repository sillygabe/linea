#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[])
{
    if (argc < 2) 
    {
        cout << "No commands" << endl;
        return 0;
    }
    string command = argv[1];

    if (command == "init")
    {
        string author, project;
        cout << "Enter dev's nickname: ";
        cin >> author;
        cout << "Enter project's name: ";
        cin >> project;

        string command = "mkdir Project" + project;
        system(command.c_str());
        command = "cd Project" + project + " && touch info.yml && touch main.cpp && touch settings.hpp";
        system(command.c_str());

        fstream yml;

        yml.open("Project" + project + "/info.yml");
        yml << "project: " << project << "\n";
        yml << "dev: " << author << "\n";
        yml << "version: 1.0.0\n"; 
        yml.close();

        fstream sett;

        sett.open("Project" + project + "/settings.hpp");
        sett << "#define WIN_NAME \"Hello, linea!\"\n";
        sett << "#define WIN_WIDTH 640\n";
        sett << "#define WIN_HEIGHT 480\n";
        sett << "#define FPS 60\n";
        sett.close();

        fstream main;

        main.open("Project" + project + "/main.cpp");
        main << "#include <Linea>\n";
        main << "#include \"settings.hpp\"\n\n";
        main << "int main()\n";
        main << "{\n";
        main << "   Window win = Window(WIN_NAME, WIN_WIDTH, WIN_HEIGHT);\n";
        main << "   Color background = Color(255, 255, 255);\n\n";
        main << "   return 0;\n";
        main << "\n}";
        main.close();
    } 
    else if (command == "info")
    {
        if (argc < 3)
        {
            cout << "Please provide a valid directory to get info on." << endl;
            return 0;
        }
        string directory = argv[2];
        
        //Someone please finish this command
        //info is supposed to give you information about a directory
    }
    else if (command == "build")
    {
        //Will do that command after finishing the main part of the library
        //build is supposed to build an executable from a directory
        //We are gonna use docker to build executables for several platforms
    } 
    else
    {
        cout << "Please provide a valid command." << endl;
        return 0;
    }

    return 0;
}