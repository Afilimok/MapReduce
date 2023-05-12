#include <iostream>
#include <map>

int main() {
    std::string delimiter = "\t";
    std::string cat;
    std::map<std::string, int> m;

    for (std::string str; getline(std::cin, str);) {
        std::string k;
        std::size_t pos = str.find(delimiter);
        std::string token = str.substr(0, pos);
        str.erase(0, str.find(delimiter) + delimiter.length());
        k = token;
        int v = stoi(str);
        m[k] += v;
    }

    for (std::map<std::string, int>::iterator it = m.begin(); it != m.end(); ++it) {
        std::cout << it->first << "\t" << it->second << '\n';
    }
}