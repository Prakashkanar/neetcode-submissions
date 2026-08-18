class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1, zero = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]) product *= nums[i];
            else zero++;
        }
        cout << product << " " << zero << endl;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]){
                nums[i] = zero ? 0 : product/nums[i];
            }else{
                nums[i] = zero - 1 ? 0 : product;
            }
        }

        return nums;
    }
};
