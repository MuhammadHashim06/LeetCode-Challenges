#include <iostream>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = s.length();
        int end = length - 1;
        while (end >= 0 && s[end] == ' ') {
            end--; // Skip trailing spaces
        }
        int start = end;
        while (start >= 0 && s[start] != ' ') {
            start--; // Find the start of the last word
        }
        return end - start;
    }
};

int main() {
    Solution sol;
    string input = "Hello World";
    cout << "Length of the last word: " << sol.lengthOfLastWord(input) << endl;

    return 0;
}
