#include <iostream>
#include <string>
using namespace std;

int main() {
    //::freopen("../input_text_for_reduce_script", "w", stdout);
    for (std::string str; std::getline(std::cin, str); ) {

        std::string key, value;
        key = "1";

        std::string delimiter = "\t";

        size_t pos = 0;
        std::string token;
        while ((pos = str.find(delimiter)) != std::string::npos) {
            token = str.substr(0, pos);
            std::cout << token << '\t' << key << std::endl;
            str.erase(0, pos + delimiter.length());
        }
        if (!str.empty())
            std::cout << str << '\t' << key << std::endl;


        //std::cout << value << '\t' << key << std::endl;

    }

}