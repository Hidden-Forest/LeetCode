#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<map>
using namespace std;


class Solution {
public:
	vector<int> findDisappearedNumbers(vector<int>& nums) {

		int len = nums.size();
		vector<int> res;
		for (int i = 0; i<len; i++)
		{
			int index = (nums[i] - 1) % len;//当nums[i]在范围内,则在nums[i]-1的位置进行标记,但是标记后不能影响后续的遍历
			nums[index] += len;         //所以要%运算 eg: nums[i]=4存在 ,则nums[nums[i]-1]+=10(len)即nums[3]=17
		}                             //此时nums[3]的数值被改变了,遍历到此数后,%len就排除前面对nums[3]的影响
		for (int j = 0; j<len; j++)
		{
			if (nums[j] <= len)res.push_back(j + 1);
		}
		return res;
	}
};
