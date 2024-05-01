#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // This function finds the longest common prefix among a list of strings
    string longestCommonPrefix(vector<string>& strs) {
        // Initialize an empty string to store the longest common prefix
        string prefix = "";
        
        // If the input vector is empty, return an empty string
        if (strs.empty()) {
            return prefix;
        }

        // Find the length of the shortest string in the vector
        int minLength = INT_MAX;
        for (string str : strs) {
            minLength = min(minLength, (int)str.size());
        }

        // Iterate through each character in the shortest string
        for (int i = 0; i < minLength; ++i) {
            // Get the current character
            char c = strs[0][i];
            
            // Check if all strings have the same character at this position
            for (int j = 1; j < strs.size(); ++j) {
                if (strs[j][i] != c) {
                    // If not, return the current prefix
                    return prefix;
                }
            }
            // If all strings have the same character, add it to the prefix
            prefix += c;
        }

        // Return the longest common prefix
        return prefix;
    }
};

int main() {
    // Create an instance of the Solution class
    Solution sol;
    
    // Define a vector of strings
    vector<string> strs = {"flower", "flow", "flight"};
    
    // Print the longest common prefix of the strings
    cout << sol.longestCommonPrefix(strs) << endl;

    return 0;
}