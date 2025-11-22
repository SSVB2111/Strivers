#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int secondLargestElement(vector<int>& nums){

        int i, largest = -1, largest_2 = -1;

        largest = nums[0];

        for(i=0; i < nums.size(); i++){

            if(largest < nums[i])
                largest = nums[i];
        }

        for(i=0; i < nums.size(); i++){

            if(nums[i] < largest)
                largest_2 = nums[i];
                for(i=0; i < nums.size(); i++){

                    if(nums[i] > largest_2 && nums[i] < largest ){
                        largest_2 = nums[i];
                    }

                }
        }

        if(largest_2 != -1)
            return largest_2;

        else
            return largest_2;

}
};

int main() {
    Solution obj;
    vector<int> nums = {10, 10, 10};

    int ans = obj.secondLargestElement(nums);

    if(ans == -1)
      cout << "Second largest DNE";

    else
      cout << "Second largest no. is " << ans;
  
    return 0;
}

