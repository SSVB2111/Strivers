#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {

        int n = nums.size() - 1;
        int i, j, temp;
        for(j=0; j < k; j++){

            temp = nums[0];

            for(i=0; i < n; i++){

                nums[i] = nums[i+1];

            }

            nums[n] = temp;

        }

        for(i=0; i <= n; i++){

            cout << nums[i];

        }
    }
};

int main() {
    Solution obj;

    vector<int> nums = {0, 0, 3, 3, 5, 6};
    int k = 2;
    obj.rotateArray(nums, k);

    return 0;
}

