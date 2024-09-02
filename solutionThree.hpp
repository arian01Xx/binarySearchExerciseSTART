#ifndef SOLUTION_THREE_HPP
#define SOLUTION_THREE_HPP

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>

using namespace std;

class SolutionThree{
public:
	int countNegatives(vector<vector<int>>& grid){
		int cnt=0;
		int m=grid.size();
		int n=grid[0].size();
		for(int i=0; i<m; i++){
			int low=0, high=n;
			while(low<high){
				int mid=low+(high-low)/2;
				if(grid[i][mid]<0) high=mid;
				else low=mid+1;
			}
			cnt += n-low;
		}
		return cnt;
	}
};

#endif