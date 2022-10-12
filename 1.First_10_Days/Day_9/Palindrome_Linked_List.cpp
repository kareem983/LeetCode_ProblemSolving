/*
Problem Title: Palindrome Linked List
Problem Link: https://leetcode.com/problems/palindrome-linked-list/
*/


/****************** Solution Using Backtracking********************/

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
    ListNode* temp;
    bool check(ListNode* head) {
        if (NULL == head) return true;
        bool res = check(head->next) & (temp->val == head->val);
        temp = temp->next;
        return res;
    }
    
    bool isPalindrome(ListNode* head) {
        temp = head;
        return check(head);
    }
};




/****************** Solution Using Stack********************/


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
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        stack<ListNode*> st;
        int cnt = 0;
        while(temp != nullptr){
            cnt++;
            temp = temp->next;
        }
        
        
        for(int i=0;i<cnt;i++){
            if(i<cnt/2) st.push(head); //first part
            else{                      //second part
                if(cnt%2 == 1 && i==cnt/2){
                    head = head->next;        
                    continue;
                }
                if(head->val == st.top()->val) st.pop();
            }
            
            head = head->next;    
        }
        
        if(st.empty()) return true;
        return false;
    }
};