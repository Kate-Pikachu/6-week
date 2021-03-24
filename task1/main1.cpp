#include <iostream>
#include <fstream>
#include <string>


int main() {

    std::fstream file("test1.txt", std::ios::out);
    std::fstream filee("test2.txt", std::ios::in);
    std::string str;
    bool flag = true;
    while (!filee.eof()) {
        getline(filee, str);
        for (int i = 0; i < str.length(); ++i) {
            if (!flag) {
                if ((str[i] == '/') && (str[i + 1] == '/')) { file << '\n'; break; }
                if ((str[i] == '/') && (str[i + 1] == '*')) { flag = false; }
                if ((str[i] == '*') && (str[i + 1] == '/')) { i += 2; flag = true; }
                if (flag) { file << str[i]; }
            }
        }
    }
    filee.close();

    return EXIT_SUCCESS;
}