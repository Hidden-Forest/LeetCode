#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

//class Solution {
//public:
//	int findMaxLength(vector<int>& nums) {
//		unordered_map<int, int> m = { { 0, -1 } };
//		int cur = 0, ans = 0;
//		for (int i = 0; i < nums.size(); ++i)
//		{
//			nums[i] == 0 ? --cur : ++cur;
//			if (m.count(cur))
//				ans = max(ans, i - m[cur]);
//			else
//				m[cur] = i;
//		}
//		return ans;
//	}
//};
//
//class Solution {
//public:
//	int Fib(int n){
//		if (n == 0)
//			return 1;
//		else if (n == 1)
//			return 1;
//		return Fib(n - 1) + Fib(n - 2);
//	}
//	int numWays(int n) {
//		return Fib(n) % 1000000007;
//	}
//};


int transform(int n){
	int max = 0;
	int count = 0;
	while (n > 0){
		if (n % 2 == 1){
			count++;
			n /= 2;
		}
		else if (n % 2 == 0){
			if (count != 0){
				if (count > max)
					max = count;
				count = 0;
			}
			n /= 2;
		}
	}
	if (max == 0)
		return count;
	return max;
}



class LCA {
public:
	static int getLCA(int a, int b) {
		// write code here
		int i = 0, deep_a, deep_b;
		int count = 0;
		while (1){
			if (a >= pow(2, i) && a <= (pow(2, i+1) - 1)){
				deep_a = i;
				count++;
			}
			if (b >= pow(2, i) && b <= (pow(2, i+1) - 1)){
				deep_b = i;
				count++;
			}
			if (count == 2)
				break;
			i++;
		}
		if (deep_a != deep_b){
			if (deep_a < deep_b)
				b >>= (deep_b - deep_a);
			if (deep_b < deep_a)
				a >>= (deep_a - deep_b);
		}
		while (a != b){
			a >>= 1
			b >>= 1;
		}
		return a;
	}
};
int foo(int n){
	if (n < 2)
		return n;
	else{
		return 2 * foo(n - 1) + foo(n - 2);
	}
}

int main(){
	cout << foo(5) << endl;
}