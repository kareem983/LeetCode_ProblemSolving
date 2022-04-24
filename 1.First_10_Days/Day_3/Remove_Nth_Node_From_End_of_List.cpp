/*
Problem Title: remove Nth From End
Problem Link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode* tmp = head;
		ListNode* deleted;
		ListNode* ansTmp = head;
		ListNode* ans = new ListNode();
		int size = 1;

		//get the list size
		while (tmp->next != nullptr) {
			size++;
			tmp = tmp->next;
		}

        
		tmp = head; size -= n;
        	if (size == 1) {
			tmp->next = tmp->next->next;
			return tmp;
		}
		else if (size > 1) {

			ans->next = ansTmp->next;
			for (int i = 0; i < size-1; i++) {
				ansTmp->next = tmp->next;
				tmp = tmp->next;
			}

			//delete the node
			deleted = tmp->next;
			tmp->next = deleted->next;
			ansTmp->next = tmp;


			tmp = head;
			tmp->next = ans->next;
			return tmp;
		}
        
		return head->next;
    }
};