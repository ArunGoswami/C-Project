#include <iostream>
#include <algorithm>

using namespace std;

void reverseWords(string &s) {
    reverse(s.begin(), s.end()); // reverse the entire string

    int start = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') { // if a space is found
            reverse(s.begin() + start, s.begin() + i); // reverse the current word
            start = i + 1; // update the start index for the next word
        }
    }

    reverse(s.begin() + start, s.end()); // reverse the last word
}

int main() {
    string s = "hello world how are you";
    reverseWords(s);
    cout << s << endl;
    return 0;
}
