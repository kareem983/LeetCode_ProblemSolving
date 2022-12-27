/*
Problem Title: Add Two Numbers
Problem Link: https://leetcode.com/problems/add-two-numbers/
*/


class Solution {
public:

    vector<int> setEqualVectorsToSize(vector<int> v, int size){
        while(size--)
            v.push_back(0);

        return v;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> v1, v2;
        int rem = 0, k=0;
        ListNode* result = new ListNode(0);
        ListNode* head = result;

        while(l1 != nullptr){
            v1.push_back(l1->val);
            l1 = l1->next;
        }
        while(l2 != nullptr){
            v2.push_back(l2->val);
            l2 = l2->next;
        }

        // Make the two vectors with equal size if not 
        if(v1.size() > v2.size())
            v2 = setEqualVectorsToSize(v2, v1.size() - v2.size());
        else if(v1.size() < v2.size())
            v1 = setEqualVectorsToSize(v1, v2.size() - v1.size());
                
        // Process
        while(k < v1.size()){
            ListNode* temp = new ListNode(0);
            int sum = v1[k] + v2[k++] + rem;
            if(sum > 9){
                rem = sum / 10;
                sum%=10;
            }
            else rem = 0;

            temp->val = sum;
            result->next = temp;
            result = temp;
        }

        if(rem){
            ListNode* temp = new ListNode(0);
            temp->val = 1;
            result->next = temp;
            result = temp;
        }

        return head->next;
    }
};