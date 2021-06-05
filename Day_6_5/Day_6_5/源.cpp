#define _CRT_SECURE_NO_WARNINGS 1


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
	ListNode* removeElements(ListNode* head, int val) {
		ListNode* hh = new ListNode;    // 额外头结点
		hh->next = head;

		ListNode* p = head, *pre = hh;

		while (p != nullptr){
			if (p->val == val){
				pre->next = p->next;
				p = p->next;
			}
			else{
				pre = pre->next;
				p = p->next;
			}
		}

		return hh->next;
	}
};
