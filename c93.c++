#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void reverseWords(string& s) {
    reverse(s.begin(), s.end()); // reverse the entire string
    
    int start = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            reverse(s.begin() + start, s.begin() + i); // reverse each word
            start = i + 1; // set the starting index for the next word
        }
    }
    reverse(s.begin() + start, s.end()); // reverse the last word
}

int main() {
    string s = "hello world";
    reverseWords(s);
    cout << s << endl; // expected output: "world hello"
    return 0;
}
