class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()){ return false;}

        int temp[26] = {0};

        for(int i=0; i<s.size(); i++){
            temp[s[i]- 'a']++;  // ascii i(114)- 97
            temp[t[i]- 'a']--;  // -(i) from target
        }

        for(int i=0; i<26; i++){
            if (temp[i] != 0){
                return false;
            }
        }
        return true;
    }
};
