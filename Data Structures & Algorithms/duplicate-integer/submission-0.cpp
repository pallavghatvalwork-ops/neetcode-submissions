class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>f;
        for(int i=0;i<nums.size();i++){
            f[nums[i]]++;
        }

        for(auto e:f){
            if(e.second>1){
                return true;
            }
        }

        return false;
    }
};