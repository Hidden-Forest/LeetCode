#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
	static int findKthPositive(vector<int>& arr, int k) {
		int count = 0;
		int hash[9999] = { 0 };
		for (int i = 0; i < arr.size(); ++i){
			hash[arr[i]]++;
		}
		for (int i = 1; i < 9999; ++i){
			if (hash[i] == 0)
				count++;
			if (count == k)
				return i;
		}
	}
};


 //Definition for a binary tree node.
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class Solution {
public:
	int TreeDepth(TreeNode* pRoot){
		if (!pRoot) return 0;
		return max(1 + TreeDepth(pRoot->left), 1 + TreeDepth(pRoot->right));
	}
	bool isCousins(TreeNode* root, int x, int y) {

	}
};


int main(){
	vector<int> arr{ 2, 3, 4, 7, 11 };
	int k = 5;
	cout << Solution::findKthPositive(arr, k) << endl;

}