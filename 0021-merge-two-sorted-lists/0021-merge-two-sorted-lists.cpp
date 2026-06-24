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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode();
        ListNode* cle = new ListNode(0);
        ListNode* dummy = cle;
        ListNode* p1 = l1;
        ListNode* p2 = l2; 

        while(p1 != NULL && p2 != NULL) {
            if(p1->val >= p2->val){
                dummy->next = p2;
                p2=p2->next;
            } else {
                dummy->next = p1;
                p1=p1->next;
            }
            dummy = dummy->next;
        }
        if(p1 != NULL) {
            dummy->next = p1;
        }
        if(p2 != NULL) {
            dummy->next = p2;
        }

        result = cle->next;
        delete cle ;
        return result;
    }
};