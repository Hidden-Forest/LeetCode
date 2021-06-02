#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;
class Solution {
public:
	vector<string> topKFrequent(vector<string>& words, int k) {
		vector<string> ans;
		unordered_map<string, int> map;
		for (auto& str : words){
			++map[str];
		}

	}
};
//class Solution {
//public:
//	static int MoreThanHalfNum_Solution(vector<int> numbers) {
//		unordered_map<int, int> ans;
//		for (auto x : numbers){
//			++ans[x];
//		}
//		for (auto& count : ans){
//			if (count.second > ans.size() / 2)
//				return count.first;
//		}
//		return 0;
//	}
//};


#include <iostream>
#include <string>
using namespace std;


int main()
{
	/*
	int arr[][3] = { { 1, 2, 3 }, { 1, 2, 2 } };
	string str1, str2, MaxNum;
	getline(cin, str1);
	for (int i = 0; i <= str1.size(); ++i)
	{
		if (str1[i] >= '0' && str1[i] <= '9')
			str2 += str1[i];
		else
		{
			if (str2.size() > MaxNum.size())
				MaxNum = str2;
			else
				str2.clear();
		}
	}
	cout << MaxNum << endl;
	return 0;
	*/
	char arr[10] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0' }, *p; int i;
	i = 8;
	p = arr + i;
	printf("%s\n", p - 3);
}

class Solution {
public:
	vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
		for (int i = 0; i < image.size(); ++i){
			reverse(image[i].begin(), image[i].end());
		}
		for (int i = 0; i < image.size(); ++i){
			for (int j = 0; j < image[i].size(); ++j){
				if (image[i][j] == 0)
					image[i][j] = 1;
				else
					image[i][j] = 0;
			}
		}
		return image;
	}
};