#include <iostream>
#include <algorithm>
#include <string>

void replacezero(std::string& s) {
    std::string temp = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '0') {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else {
            temp.push_back(s[i]);
        }
    }
    s = temp;
}

int main() {
    std::string s;
    std::cin >> s;
    replacezero(s);
    std::cout << s << std::endl;
    return 0;
}

