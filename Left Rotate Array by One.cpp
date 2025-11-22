#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {

        int i,l, n = nums.size();

        l = nums[0];

        for(i=0; i < n-1; i++){

            nums[i] = nums[i+1];

        }

        nums[n-1] = l;

        for(i=0; i < n; i++){

            cout << nums[i];

        }
    }
};

int main() {
    Solution obj;

    vector<int> nums = {0, 0, 3, 3, 5, 6};

    obj.rotateArrayByOne(nums);

    return 0;
}

