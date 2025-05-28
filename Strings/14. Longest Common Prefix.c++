class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()){ return "";}

        string first = strs[0];
        
        for(int i=1; i<strs.size(); i++){
            int j=0;
            while(j<first.size() && j<strs[i].size() && strs[i][j]==first[j]){
                j++;
            }
            first = first.substr(0,j);
        }
        return first;
    }
};
