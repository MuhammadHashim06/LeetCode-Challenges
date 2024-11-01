class Solution {
public:
    string makeFancyString(string s) {
        string newstring = "";
        for (int i = 0; i < s.length(); i++) {
            if(i<2){
                newstring +=s[i];
            }else if (s[i] == s[i-1] && s[i] == s[i-2]) {
               
            }else{
                 newstring += s[i]; // Concatenate the character
            }
        }
        return newstring; // Return the new string
    }
};