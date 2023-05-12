#include <iostream>
#include <string>

using namespace std;
int main(int argc, char *argv[]) {

    string command(argv[1]);
    string input_file(argv[2]);
    string output_file(argv[3]);
    cerr << "command " << command << endl;
    if (command == "map"){
        string t = "./map_script < " + input_file  + " > " + output_file;
        system(t.c_str());
    }else if (command == "reduce"){
        system("reduce_script");
    }
    return 0;
}