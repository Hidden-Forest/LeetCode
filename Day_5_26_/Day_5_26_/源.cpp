#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
#include<algorithm>
#include<stack>

using namespace std;

class Solution {
public:
	string reverseParentheses(string s) {
		stack<string> stk;
		string str;
		for (auto &ch : s){
			if (ch == '('){
				stk.push(str);
				str.clear();
			}
			else if (ch == ')'){
				reverse(str.begin(), str.end());
				str += stk.top();
				stk.pop();
			}
			else
				str.push_back(ch);
		}
		return str;
	}
};
string MY_itoa(int num, int radix){
	string ans;
	do{
		int count = num%radix;
		if (count <= 9 && count >= 0)
			ans += (count + '0');
		else
			ans += (count - 10 + 'A');
		num /= radix;
	} while (num != 0);
	reverse(ans.begin(), ans.end());
	return ans;
}
int cnt = 0;
int Fib(int n){
	cnt++;
	if (n == 0)
		return 1;
	else if (n == 1)
		return 2;
	else
		return Fib(n - 1) + Fib(n - 2);
}
int main(){
	int a[] = { 1, 3, 5, 7, 9 };
	int *p = (int *)(&a + 1);
	printf("%d", *(p - 1));
	/*int N, M;
	int flag = 0; 
	cin >> N >> M;
	if (N < 0){
		N *= -1;
		flag = 1;
	}
	string str;
	if (flag == 1){
		cout <<"-"<< MY_itoa(N, M) << endl;
		return 0;
	}
	cout << MY_itoa(N, M) << endl;
	return 0;
*/
	/*int x, y, z, k;
	int A, B, C;
	cin >> x >> y >> z >> k;
	A = (x + z) / 2;
	B = (y + k) / 2;
	C = (k - y) / 2;
	if (A - B == x && B - C == y && A + B == z && B + C == k)
		cout << A << " " << B << " " << C << endl;
	else
		cout << "No" << endl;
	return 0;*/
}