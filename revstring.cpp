#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        stack<string> words;
        string word = "", result = "";
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                if (word.length() > 0) {
                    words.push(word);
                    word = "";
                }
            } else {
                word += s[i];
            }
        }
        
        if (word.length() > 0) {
            words.push(word);
        }
        
        while (words.size() > 1) {
            result += words.top() + " ";
            words.pop();
        }
        
        result += words.top();
        
        return result;
    }
};
