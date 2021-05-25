#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;
class Solution {
public:
	bool isPowerOfTwo(int n) {
		double count = n;
		if (n == 2 || n == 1)
			return true;
		else{
			while (count >= 2){
				count /= 2;
				if (count == 2)
					return true;
			}
			return false;
		}
	}
};

class Solution {
public:
	int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
		int n = arr.size(), cnt = 0;
		for (int i = 0; i < n; ++i) {
			for (int j = i + 1; j < n; ++j) {
				for (int k = j + 1; k < n; ++k) {
					if (abs(arr[i] - arr[j]) <= a && abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c) {
						++cnt;
					}
				}
			}
		}
		return cnt;
	}
};

class Solution {
public:
	vector<int> arr;
	void Insert(int num){
		arr.push_back(num);
	}

	double GetMedian()
	{
		sort(arr.begin(), arr.end());
		if (arr.size() % 2 != 0)
			return static_cast<double>(arr[(arr.size() - 1) / 2]);
		else
			return static_cast<double>(arr[arr.size() >> 1] + arr[(arr.size() - 1) >> 1]) / 2;
	}

};

