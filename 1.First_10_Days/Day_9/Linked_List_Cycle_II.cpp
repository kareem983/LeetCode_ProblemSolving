/*
Problem Title: Linked List Cycle II
Problem Link: https://leetcode.com/problems/linked-list-cycle-ii/
*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == nullptr) return nullptr;
        
        unordered_map<ListNode *, bool> umap;
        while(head->next != nullptr){
            if(umap.find(head) != umap.end())
                return head;
            
            umap[head] = true;
            head = head->next;
        }
        
        return nullptr;
    }
};