/*
Problem Title: Reverse Linked List
Problem Link: https://leetcode.com/problems/reverse-linked-list/
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
ListNode* newH = new ListNode();
ListNode* reversed = new ListNode();

    
  ListNode* getReverseList(ListNode* head) {
     if (head->next == nullptr) {
         return head;
     }
     else {
         newH = getReverseList(head->next);
         reversed->next = newH;
         reversed = newH;
         return head;
     }

 }

    ListNode* reverseList(ListNode* head) {
        if(head == nullptr)return head;
        
        ListNode* ans = reversed;
        newH = getReverseList(head);
        reversed->next = newH;
        reversed = newH;
        reversed->next = nullptr;
        
        return  ans->next;;
    }
    
};