#include <iostream>
using namespace std;


 
class Solution {


	struct ListNode {
		int val;
		ListNode *next;
		ListNode(int x) : val(x), next(NULL) {};
		ListNode() : val(1), next(NULL) {}
	};
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

		// 0链表非空
		if (l1 == NULL && l2 == NULL) {
			return l1;
		}
		// 1链表非空
		if (l1 == NULL || l2 == NULL) {
			return l1 == NULL ? l2 : l1;
		}

		// 2链表非空
		ListNode *p = l1, *q = l2;
		ListNode *t;	// 用于构建合并后的链表
		
		// t初始赋值，指向最小值
		if (p->val < q->val) {
			t = p;
			p = p->next;
		}	
		else
		{
			t = q;
			q = q->next;
		}
		// 循环遍历链表，开始合并链表
		while (p!=NULL&&q!=NULL)
		{
			if (p->val < q->val) {
				t->next = p;
				t = t->next;
				p = p->next;
			}
			else
			{
				t->next = q;
				t = t->next;
				q = q->next;
			}
		}

		// 收尾工作，将剩余部分直接添加的新链表
		if (p == NULL) {
			t->next = q;
		}
		else
		{
			t->next = p;
		}

		// 返回合并后的链表。 l1和l2的指向始终未变
		return l1->val < l2->val ? l1 : l2;
	}
};

int main() {
	Solution solution;

}
