#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

class Solution {
public:
	static int findMaxForm(vector<string>& strs, int m, int n) {
		int max = 0, count = 0;
		unordered_map<int, int> map;
		int count_m, count_n;
		for (int i = 0; i < strs.size(); ++i){
			count_m = 0;
			count_n = 0;
			if (strs[i].size() > (m + n))
				continue;
			for (int j = 0; j < strs[i].size(); ++j){
				if (strs[i][j] == '0')
					count_m++;
				else if (strs[i][j] == '1')
					count_n++;
			}
			if (count_m > m || count_n > n)
				continue;
			else if (count_m <= m && count_n <= n)
				map.insert(pair<int, int>(i, count_m + count_n));
		}
		for (auto &v : map){
			if (v.second > max){
				max = v.second;
				count = v.first;
			}
		}
		return strs[count].size();
	}
};

int main(){
	string str;
	cin >> str;
	int flag = 0, begin = 0, end = 0;
	for (int i = 0; i < str.size(); ++i){
		if (flag == 0){
			if (str[i] == '"'){
				flag = 1;
			}
		}
		else{

		}
	}
}