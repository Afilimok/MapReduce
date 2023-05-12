
#include <iostream>
#include <map>
using namespace std;

int main() {
    std::string delimiter = "\t";
    std::string cat;

    map <string, int> m;
    for (std::string str; getline(std::cin, str); ) {

        std::string k;

        std::size_t pos = str.find(delimiter);
        string token = str.substr(0, pos);
        str.erase(0,  str.find(delimiter) + delimiter.length());
        k = token;
        int v = stoi(str);

        m[k] += v;
        //std::cout << k << '\t' << v <<   std::endl;
    }
    for ( map<string, int>::iterator it=m.begin(); it!=m.end(); ++it)
        std::cout << it->first << "\t" << it->second << '\n';

    //cout << "cat = " << cat << endl;

}