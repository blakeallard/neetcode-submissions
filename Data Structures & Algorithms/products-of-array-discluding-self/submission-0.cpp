class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        const int SIZE = nums.size();
        int prefix = 1;
        int suffix = 1;
        vector<int> output(SIZE, 1);

        for (int i = 0; i < SIZE; i++)
        {
            output[i] = prefix;
            prefix *= nums[i];
        }

        for (int i = SIZE - 1; i >= 0; i--)
        {
            output[i] *= suffix;
            suffix *= nums[i];
        }
        return output;
    }
};

// return a vector where output[i] is the PRODUCT, of ALL THE ELEMENTS of the VECTOR, (except nums[i])
// GOAL: if array is [2, 4, 6], output will be [24, 12, 8]