#include<bits/stdc++.h>
using namespace std;

class Solution {

public:
	int jump(vector<int>& nums) {

        // nums array can be empty. - need at least one entry to hold the result. 
		int results_array_size = (nums.size() == 0) ? 1 : nums.size();
        
        // note this array is of size nums.size and each pos is initialized with some large integer. 
		vector<int> min_steps(results_array_size, INT_MAX - 1);

        // sets the min_steps to 0 for last pos
		int last_index = nums.size() - 1;
		min_steps[last_index] = 0;

        // iterate our input array
		for (int index = last_index - 1; index >= 0; index--) {

            // (last_index - index) jump is a one step direct flight to target.
			int optimal_steps_to_reach_target = last_index - index;
			int max_available_jump = min(nums[index], (optimal_steps_to_reach_target));

			if (optimal_steps_to_reach_target <= max_available_jump) {
				min_steps[index] = 1;
			}
			else {
                /*
                   This block selects the jump step that results in minimum steps among available jump steps. 
                */
				for (int jump_selection = max_available_jump; jump_selection > 0; jump_selection--) {
					if (min_steps[index + jump_selection] == 1) {
						min_steps[index] = 1 + 1;
						break;
					}
					else if ((min_steps[index + jump_selection] + 1) < min_steps[index]) {
						min_steps[index] = min_steps[index + jump_selection] + 1;
					}
				}
			}
		}

		return min_steps[0];
	}

};