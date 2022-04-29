/*
Problem Title: Reorder List
Problem Link: https://leetcode.com/problems/reorder-list/
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
stack<ListNode*> st;
int size;
    
    ListNode* reorder(ListNode* head){
        ListNode* ansTemp = new ListNode();
        ListNode* ans = ansTemp;
        for (int i = 0; i < size / 2; i++) {
            ansTemp->next = head;
            ansTemp = head;
            head = head->next;

            ansTemp->next = st.top();
            ansTemp = ansTemp->next;
            st.pop();
        }
        ansTemp->next = nullptr;
        
        return ans->next;
    }
    
    
    void reorderList(ListNode* head) {        
        ListNode* copy = head;
        
        while (copy->next != nullptr) {
            st.push(copy);
            size++;
            copy = copy->next;
        }
        st.push(copy);
        size++;
        if (size % 2 == 1)size++;

        head = reorder(head);
    }
};