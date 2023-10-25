#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>

//SOMEONE PLEASE FIX THIS HORRIBLE CODE!!!!

const char *programText =
"#include <Linea>\n"
"#include \"projsettings.hpp\"\n"
"\n\n"
"int main()\n"
"{\n\treturn 0;\n}\n";

int main(int argc, char **argv)
{
    if (argc < 2) 
    {
        std::cout << "Not enough arguements.\n";
        return 0;
    }

    std::string command = argv[1];

    if (command == "init")
    {
        std::string author, projectName;

        std::cout << "Initializing the project...\n";
        std::cout << "Enter your name: ";
        std::cin >> author;
        std::cout << "Enter project name: ";
        std::cin >> projectName;

        command = "mkdir "; command += projectName;
        system(command.c_str());

        command = "cd "; 
        command += projectName;
        command += " && touch project.yml";
        system(command.c_str());

        command = "cd "; 
        command += projectName + " && touch projsettings.hpp";
        system(command.c_str());
        command = "cd "; 
        command += projectName + "&& touch main.cpp";

        system(command.c_str());

        command = projectName + "/main.cpp";
        
        std::fstream file; file.open(command);
        file << programText;

        std::cout << "Project initialized.\n";
    }

    return 0;
}