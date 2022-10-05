/*
Problem Title: Remove Linked List Elements
Problem Link: https://leetcode.com/problems/remove-linked-list-elements/
*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr) return head;
        
        ListNode *dummyNode = new ListNode(0, head);
        ListNode *prev = dummyNode;
        
        while(head != nullptr){
            
            if(head->val == val)
                prev->next = head->next;
            else
                prev = head;
            
            head = head->next;   
        }
        
        return dummyNode->next;   
    }
};
