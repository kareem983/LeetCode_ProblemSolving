/*
Problem Title: Intersection of Two Linked Lists
Problem Link: https://leetcode.com/problems/intersection-of-two-linked-lists/
*/


class Solution {
public:
    ListNode *getHead(ListNode *head, int n){
        while(n--)
            head = head->next;
        return head;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *tempA = headA;
        ListNode *tempB = headB;
        int sizeA = 0 , sizeB = 0;

        while(tempA!= nullptr){
            tempA = tempA->next;
            sizeA++;
        }
        while(tempB!= nullptr){
            tempB = tempB->next;
            sizeB++;
        }
        if(sizeA > sizeB)
            headA = getHead(headA, sizeA - sizeB);
        else if(sizeA < sizeB)
            headB = getHead(headB, sizeB - sizeA);

        while(headA!= nullptr){
            if(headA == headB)
                return headA;
            headA = headA->next;
            headB = headB->next;
        }
        
        return nullptr;
    }
};