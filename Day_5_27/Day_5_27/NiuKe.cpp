#define _CRT_SECURE_NO_WARNINGS 1
#pragma pack(8)
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>

using namespace std;


class Solution {
public:
	//string intToA(int n, int radix)    //n是待转数字，radix是指定的进制
	//{
	//	string ans = "";
	//	do{
	//		int t = n%radix;
	//		if (t >= 0 && t <= 9)	ans += t + '0';
	//		else ans += t - 10 + 'a';
	//		n /= radix;
	//	} while (n != 0);	//使用do{}while（）以防止输入为0的情况
	//	reverse(ans.begin(), ans.end());
	//	return ans;
	//}

	/*int hammingDistance(int x, int y) {
		string str1, str2;
		string str;
		str1 = intToA(x, 2);
		str2 = intToA(y, 2);
		if (str1.size() > str2.size()){
			str = str2;
			int count = str1.size() - str2.size();
			str2.clear();
			for (size_t i = 0; i < count; ++i){
				str2.push_back('0');
			}
			str2 += str;
		}
		else
			str = str1;
		
	}*/

	
	int hammingDistance(int x, int y) {
		int cnt = 0;
		while (x & y){
			if ((x & 1) != (y & 1))
				cnt++;
			x >>= 1;
			y >>= 1;
		}
		return cnt;
	}
};

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

//class Solution {
//public:
//	void reorderList(ListNode* head) {
//		stack<ListNode*> stk;
//		if (head->next == nullptr)
//			return;
//		ListNode* node = head->next;
//		while (node != nullptr){
//			stk.push(node);
//			node = stk.top()->next;
//		}
//		ListNode* node = head;
//		while (!stk.empty()){
//			node->next = stk.top();
//			stk.pop();
//			node = node->next;
//		}
//		free(node);
//		return;
//	}
//};

bool Palindrome(string str){
	if (str.size() == 1)
		return true;
	int begin = 0, end = str.size() - 1;
	while (begin < end){
		if (str[begin++] != str[end--])
			return false;
	}
	return true;
}

//int main(){
//	int ans = 0;
//	string str1, str2, str;
//	getline(cin, str1);
//	getline(cin, str2);
//	for (size_t i = 0; i <= str1.size(); ++i){
//		str = str1;
//		str.insert(i, str2);
//		if (Palindrome(str))
//			ans++;
//	}
//	cout << ans << endl;
//}

//int main(){
//	int length;
//	cin >> length;
//	vector<int> arr(length);
//	for (size_t i = 0; i < length; ++i)
//		cin >> arr[i];
//	int result = arr[0];
//	int sum1 = 0, sum2 = 0;
//	for (size_t i = 0; i < length; ++i){
//		sum2 = sum1 >= 0 ? sum1 + arr[i] : arr[i];
//		if (sum2>result)
//			result = sum2;
//		if (sum2 < 0)
//			sum2 = 0;
//		sum1 = sum2;
//	}
//	cout << result << endl;
//
//	return 0;
//}

//struct One
//{
//	double d;
//	char c;
//	int i;
//};
//struct Two
//{
//	char c;
//	double d;
//	int i;
//};
int main()
{
	/*char p1[15] = "abcd", *p2 = "ABCD", str[50] = "xyz";
	strcpy(str + 2, strcat(p1 + 2, p2 + 1));
	printf("%s", str);*/
	cout << (0 | 1) << endl;
}//xycdBCD