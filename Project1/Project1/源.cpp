#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<string>
#include<math.h>
#include<algorithm>
using namespace std;

int climbStairs(int n) {
		return (int)((pow((1 + sqrt(5)) / 2, n) - pow((1 - sqrt(5)) / 2, n)) / sqrt(5));
}

int main(){
	int from, to;
	while (cin >> from >> to){
		int ans = 0;
		for (int i = from; i <= to; ++i){
			ans += climbStairs(i);
		}
		cout << ans << endl;
	}
}