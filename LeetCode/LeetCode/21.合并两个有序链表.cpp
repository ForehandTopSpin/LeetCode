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

		// 0����ǿ�
		if (l1 == NULL && l2 == NULL) {
			return l1;
		}
		// 1����ǿ�
		if (l1 == NULL || l2 == NULL) {
			return l1 == NULL ? l2 : l1;
		}

		// 2����ǿ�
		ListNode *p = l1, *q = l2;
		ListNode *t;	// ���ڹ����ϲ��������
		
		// t��ʼ��ֵ��ָ����Сֵ
		if (p->val < q->val) {
			t = p;
			p = p->next;
		}	
		else
		{
			t = q;
			q = q->next;
		}
		// ѭ������������ʼ�ϲ�����
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

		// ��β��������ʣ�ಿ��ֱ����ӵ�������
		if (p == NULL) {
			t->next = q;
		}
		else
		{
			t->next = p;
		}

		// ���غϲ�������� l1��l2��ָ��ʼ��δ��
		return l1->val < l2->val ? l1 : l2;
	}
};

int main() {
	Solution solution;

}
