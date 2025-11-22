#include<bits/stdc++.h>
using namespace std;
class Solution{	
	public:
		bool isSorted(vector<int>& nums){
			//your code goes here
            int i;
            for(i = 0; i < nums.size() - 1; i++){

                if(nums[i] <= nums[i + 1]){
                    continue;
                }

                else
                return false;
            }
    

            return true;
		}
};

int main() {
    Solution obj;
    vector<int> nums = {10, 20, 10};

    bool ans = obj.isSorted(nums);
     
      if(ans==0)
          cout << "false";
        
      else 
          cout << "true";
    
    return 0;
}

