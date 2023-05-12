#include <iostream>
#include <string>

using namespace std;
int main(int argc, char *argv[]) {

    string command(argv[1]);
    string script(argv[2]);
    string input_file(argv[3]);
    string output_file(argv[4]);
    cerr << "command " << command << endl;
    if (command == "map"){
        string t = script + " <" + input_file  + " >" + output_file;
        system(t.c_str());
    }else if (command == "reduce"){
        string t = script + " <" + input_file  + " >" + output_file;
        system(t.c_str());
    }
    return 0;
}