

 #include <iostream>
using namespace std;

void reverseString(string& str, int i, int j) {
    if (i >= j)
        return;

    swap(str[i], str[j]);
    reverseString(str, i + 1, j - 1);
}

int main() {
    string name = "babbar";
    cout << "Original string: " << name << endl;
    reverseString(name, 0, name.length() - 1);
    cout << "Reversed string: " << name << endl;
    return 0;
}
