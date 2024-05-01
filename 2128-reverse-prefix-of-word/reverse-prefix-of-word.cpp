class Solution {
public:
    string reversePrefix(string word, char ch) {
        string str="";
         bool flag=true;
        for (int i=0;i<word.length();i++){
           
            
            if(flag){
                str=word[i]+str;
            }if(!flag){
                str=str+word[i];
            }
            if(word[i]==ch){
                flag=false;
            }
        }
        if(flag){
            return word;
        }
        else{
        return str;
    }}
};