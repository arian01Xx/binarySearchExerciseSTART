#ifndef SOLUTION_TWO_HPP
#define SOLUTION_TWO_HPP

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>

using namespace std;

class SolutionTwo{
public:
	int countPairs(vector<int>& nums, int target){
		int count=0, left=0, right=nums.size();
		while(left<right){
			if(nums[left]<nums[right]){
				count+=right-left;
				left++;
			}else{
				right--;
			}
		}
		return count;
	}
};

#endif