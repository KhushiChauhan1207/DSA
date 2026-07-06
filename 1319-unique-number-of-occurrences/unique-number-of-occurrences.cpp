class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>freq;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;

        }
        unordered_set<int>seen;
        for(auto x:freq){
            int count=x.second;
            if(seen.count(count)){
                return false;
            }
            seen.insert(count);
        }
        return true;

        }
//khushi
};