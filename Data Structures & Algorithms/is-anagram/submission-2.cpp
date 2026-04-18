class Solution {
public:
    bool isAnagram(string s, string t) {

        int n = s.size();
        int m = t.size();

        if(n != m) return false;
        unordered_map<char, int>mpp;
        
        for(int i = 0; i < m; i++ ){
            mpp[t[i]]++;
        }

        for(int i = 0; i < n; i++){
            if(mpp[s[i]]== 0){
                return false;
            }
            mpp[s[i]]--;
        }

        return true;
        
    }
};
