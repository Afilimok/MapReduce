#include <iostream>
#include <string>


int main(int argc, char *argv[]) {

    std::string command(argv[1]);
    std::string script(argv[2]);
    std::string input_file(argv[3]);
    std::string output_file(argv[4]);

    if (command == "map") {
        std::string t = script + " <" + input_file + " >" + output_file;
        system(t.c_str());
    } else if (command == "reduce") {
        std::string t = script + " <" + input_file + " >" + output_file;
        system(t.c_str());
    }
    return 0;
}