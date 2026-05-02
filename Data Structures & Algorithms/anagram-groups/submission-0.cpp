class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>>map;

        for(const string& s : strs){
            string sortedStr = s;
            sort(sortedStr.begin(), sortedStr.end());
            map[sortedStr].push_back(s);
        }
        
        vector<vector<string>>res;
        for(auto&it : map){
            res.push_back(it.second);
        }

        return res;
    }
};
