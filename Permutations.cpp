class Solution {
public:
    void helper(vector<int>&nums,int s,int e,vector<vector<int>>&ans){
        if(s==e){
            vector<int>temp;
            for(int i=0;i<nums.size();i++){
                temp.push_back(nums[i]);
            }
            ans.push_back(temp);
            return;
        }
        for(int i=s;i<=e;i++){
            swap(nums[i],nums[s]);
            helper(nums,s+1,e,ans);
            swap(nums[i],nums[s]);
        }
        return;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        vector<vector<int>>ans;
        helper(nums,s,e,ans);
        return ans;
    }
};
