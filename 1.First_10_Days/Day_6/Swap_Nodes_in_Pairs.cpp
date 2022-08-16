/*
Problem Title: Swap Nodes in Pairs
Problem Link: https://leetcode.com/problems/swap-nodes-in-pairs/
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
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr || head->next == nullptr)
            return head;
        
        ListNode* tmp;
        tmp = head->next;
        head->next = swapPairs(tmp->next);
        tmp->next = head;
        
        return tmp;
    }
};
