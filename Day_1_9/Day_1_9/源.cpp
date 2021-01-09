#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	int countOdds(int low, int high) {
		int count = 0;
		for (int i = low; i < high; ++i){
			if (i % 2 != 0)
				count++;
		}
		return count++;
	}
};