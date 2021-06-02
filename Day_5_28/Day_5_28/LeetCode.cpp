#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:
	int hammingDistance(int x, int y) {
		int cnt = 0;
		while (x | y){
			if ((x & 1) != (y & 1))
				cnt++;
			x >>= 1;
			y >>= 1;
		}
		return cnt;
	}
	int totalHammingDistance(vector<int>& nums) {
		int sum = 0;
		for (int i = 0; i < (nums.size()-1); ++i){
			for (int j = (i + 1); j < nums.size(); ++j){
				sum += hammingDistance(nums[i], nums[j]);
			}
		}
		return sum;
	}
};
int StrToInt(string str) {
	char ss[9000];
	for (int i = 0; i < str.size(); ++i){
		ss[i] = str[i];
	}
	return atoi(ss);
}


//int main(){
//	int M, N, cnt = 0;
//	cin >> M >> N;
//	for (int i = 0; i < N; ++i){
//		for (int j = 0; j < M; ++j){
//			if (((i / 2) % 2) == ((j / 2) % 2))
//				cnt++;
//		}
//	}
//	cout << cnt << endl;
//}

char fun(char a, char b){
	if (a < b)
		return a;
	else
		return b;
}
int main(){
	int a = '1', b = '1', c = '2';
	cout << fun(fun(a, b), fun(b, c));
	
}