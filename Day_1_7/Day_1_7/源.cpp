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
			int index = (nums[i] - 1) % len;//��nums[i]�ڷ�Χ��,����nums[i]-1��λ�ý��б��,���Ǳ�Ǻ���Ӱ������ı���
			nums[index] += len;         //����Ҫ%���� eg: nums[i]=4���� ,��nums[nums[i]-1]+=10(len)��nums[3]=17
		}                             //��ʱnums[3]����ֵ���ı���,������������,%len���ų�ǰ���nums[3]��Ӱ��
		for (int j = 0; j<len; j++)
		{
			if (nums[j] <= len)res.push_back(j + 1);
		}
		return res;
	}
};
