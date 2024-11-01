#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mapST, mapTS;
        
        for (int i = 0; i < s.length(); i++) {
            char charS = s[i], charT = t[i];
            
            if (mapST.count(charS) && mapST[charS] != charT) {
                return false;
            }
            if (mapTS.count(charT) && mapTS[charT] != charS) {
                return false;
            }
            
            mapST[charS] = charT;
            mapTS[charT] = charS;
        }
        
        return true;
    }
};
