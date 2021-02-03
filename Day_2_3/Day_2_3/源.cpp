//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<algorithm>
//#include<string>
//using namespace std;
//int main(){
//	string str, flag;
//	while (cin >> str >> flag){
//		int ans = 0; 
//		while (str.find(flag) != -1){
//			ans++;
//			int count = str.find(flag);
//			for (int i = 0; i < flag.size(); ++i){
//				str[count + i] = '.';
//			}
//		}
//		cout << ans << endl;
//
//	}
//}
// write your code here cpp
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<string>
#include<math.h>
#include<algorithm>
using namespace std;

long long climbStairs(int n) {
	return (int)((pow((1 + sqrt(5)) / 2, n) - pow((1 - sqrt(5)) / 2, n)) / sqrt(5));
}

int main(){
	int from, to;
	while (cin >> from >> to){
		long long ans = 0;
		for (int i = from; i <= to; ++i){
			ans += climbStairs(i);
		}
		cout << ans << endl;
	}
}