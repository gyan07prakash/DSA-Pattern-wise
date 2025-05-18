class Solution {
public:
    int maxDepth(string s) {
        int current = 0;
        int maxDepth = 0;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                current++;
                maxDepth=max(maxDepth, current);
                
            }
            else if(s[i]==')'){
                current--;
            }
        }
        return maxDepth;
    }
};
