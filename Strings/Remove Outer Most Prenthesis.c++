    string removeOuterParentheses(string s){
        string result = "";
        int depth=0;
        for (int i=0; i<s.length(); i++){
            if(s[i]=='('){                
               if(depth>0){
                result+='(';
               }
               depth++;
            }
            else if(s[i]==')'){
                depth--;
                if(depth>0){
                    result+= ')';
                }                
            }
        }
        return result;
        
    }
