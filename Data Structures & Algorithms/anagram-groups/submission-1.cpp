class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>>map;
        int n = strs.size();
        // Similar to hashmap appraoch here we store the pattern that why no need of sorting.
        for(const auto & s : strs){
            vector<int>count(26, 0);
            for(const auto & it : s){
                count[it - 'a']++;
            }

            string key = to_string(count[0]);
            for(int i = 1; i < 26; i++){
                key += "," + to_string(count[i]);
            }

            map[key].push_back(s); 

        }


        vector<vector<string>>res;
        for(const auto &it : map){
            res.push_back(it.second);
        }
        
        return res;
    }
};
