#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>

using namespace std;

class SolutionOne{
public:
	vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord){
		TrieNode* root= new TrieNode();
		for(string& product: products) insert(root, product);
		vector<vector<string>> ans;
	    TrieNode* curr=root;
	    for(char& c: searchWord){
	    	c -= 'a';
	    	if(curr != nullptr && curr->child[c]!=nullptr){
	    		curr=curr->child[c];
	    		ans.push_back(getWords(curr,3));
	    	}else{
	    		curr=nullptr;
	    		ans.emplace_back();
	    	}
	    }
	    return ans;
	}
};

#endif