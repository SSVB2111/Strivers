class Solution {
public:
    int largestElement(vector<int>& nums) {

        int largest, i;

        largest = nums[0];

        for(i=0; i <= nums.size() ; i++){

            if(nums[i] > largest){

                largest = nums[i];

            }

        }

            return largest;
    }
};

