string reverseWords(string s) {
        string result ="";
        
        reverse(s.begin(), s.end());

        for(int i=0; i<s.length(); i++){

            string word ="";
            while(i<s.length() && s[i]!=' '){
            word += s[i];
            i++;
            }

            reverse(word.begin(), word.end());
            if( word.length() > 0 ){
                result += " "+ word;
            }
        }
        
        return result.substr(1); //1 is the index value
    }
