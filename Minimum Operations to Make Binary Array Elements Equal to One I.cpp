class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 0, ops = 0;
        while(j < n){
            if(nums[j] == 0 && j + 2 < n){
                for(int k = j; k < j + 3; k++){
                    if(nums[k] == 0){
                        nums[k] = 1;
                    }else{
                        nums[k] = 0;
                    }
                }
                ops++;
            }
            j++;
        }
        bool check = true;
        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                check = false;
                break;
            }
        }
        if(check){
            return ops;
        }
        return -1;
    }
};
