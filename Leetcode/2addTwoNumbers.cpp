#include "leetcode.h"

/*
 * 给出两个[非空]的链表用来表示两个非负的整数。
 * 其中，它们各自的位数是按照[逆序]的方式存储的，并且它们的每个节点只能存储[一位]数字。
 * 如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。
 */

//速度会比较慢

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
	int add = 0, val;
	ListNode* pCur1 = l1, * pCur2 = l2;
	ListNode* pHead = NULL, * pTail = NULL;
	ListNode* pNew = NULL;
	while (pCur1 || pCur2 || add)
	{
		val = 0;
		if (pCur1!=NULL)
		{
			val += pCur1->val;
			pCur1 = pCur1->next;
		}
		if (pCur2!=NULL)
		{
			val += pCur2->val;
			pCur2 = pCur2->next;
		}
		if (add)
		{
			val += add;
		}

		pNew = new ListNode(val);

		if (pNew->val >= 10)
		{
			add = 1;
			pNew->val -= 10;
		}
		else {
			add = 0;
		}

		if (NULL == pHead)//尾插法
		{
			pHead = pNew;
			pTail = pNew;
		}
		else {
			pTail->next = pNew;
			pTail = pNew;
		}
	}
	return pHead;
}