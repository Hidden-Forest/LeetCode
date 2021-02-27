#define _CRT_SECURE_NO_WARNINGS 1
public int trailingZeroes(int n) {
	int count = 0;
	while (n > 0) {
		count += n / 5;
		n = n / 5;
	}
	return count;
}
