#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int n = s.length();
    string temp;
    string st;

    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == ' ' || i == 0) {
            if (i == 0) {
                temp.push_back(s[i]);
            }
            reverse(temp.begin(), temp.end());
            st += temp + " ";
            temp = "";  // Reset temp for the next word
        } else {
            temp.push_back(s[i]);
        }
    }

    cout << st << endl;

    return 0;
}
