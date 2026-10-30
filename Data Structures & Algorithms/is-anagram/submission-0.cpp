class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int>f1;
        for(int i=0;i<s.size();i++){
            f1[s[i]]++;
            f1[t[i]]--;
        }
        for(auto e:f1){
            if(e.second>0){
                return false;
            }
        }
        return true;
    }
};
