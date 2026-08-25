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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int countA = 0, countB = 0;
        struct ListNode *tempA = headA;
        struct ListNode *tempB = headB;
        
        while (tempA != NULL) {
            countA++;
            tempA = tempA->next;
        }

        while (tempB != NULL) {
            countB++;
            tempB = tempB->next;
        }

        tempA = headA;
        tempB = headB;

        int diff = abs(countA - countB);

        if (countA > countB) {
            while (diff--) {
                tempA = tempA->next;
            }
        } else {
            while (diff--) {
                tempB = tempB->next;
            }
        }

        while (tempA != NULL && tempB != NULL) {
            if (tempA == tempB) {
                return tempA;
            }
            tempA = tempA->next;
            tempB = tempB->next;
        }

        return 0;
        }
};