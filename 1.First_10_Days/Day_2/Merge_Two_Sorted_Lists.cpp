/*
Problem Title: Merge Two Sorted Lists
Problem Link: https://leetcode.com/problems/merge-two-sorted-lists/
*/


struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == nullptr)return l2;
	else if (l2 == nullptr)return l1;
        
	ListNode* temp, * out;
	if (l1->val <= l2->val){out = l1; l1 = l1->next;}
	else {out = l2; l2 = l2->next;}
    temp = out; //make temp point into out space, so any change in temp will reflect in out

	while (1) {
        if(l1 == nullptr) {temp->next= l2; break;}
        else if(l2 == nullptr) {temp->next= l1; break;}
		else if (l1->val <= l2->val) {
			temp->next = l1;
			temp = l1;
			l1 = l1->next;
		}
		else {
			temp->next = l2;
			temp = l2;
			l2 = l2->next;
		}

	}
	return out;
        
    }
};