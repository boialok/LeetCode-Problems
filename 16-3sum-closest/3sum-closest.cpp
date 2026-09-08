class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int ans = nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size()-2;i++){
            int j=i+1, k=nums.size()-1;

            while(j<k){
                int total = nums[i]+nums[j]+nums[k];

                if(abs(target-total)<abs(target-ans))
                    ans=total;
                if(total==target) return target;
                else if (total<target) j++;
                else k--;
            }
        }
        return ans;
    }
};