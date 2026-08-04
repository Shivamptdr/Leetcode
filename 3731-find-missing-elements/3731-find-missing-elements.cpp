class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     int j = nums[0];
     vector<int>ans;
     for(int i : nums)
     {
        if(i!=j)
        {
         while(j!=i)ans.push_back(j),j++;
        }
        j++;
     }
     return ans;    
    }
};