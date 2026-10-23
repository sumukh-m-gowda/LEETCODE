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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode dummy (-1);
        ListNode* tail = &dummy ;
        ListNode* temp = head;
        while(temp != NULL) {
            int check = 0 ;
            if(temp->next != NULL && temp->val == temp->next->val){
                int dup = temp->val ;
                check = 1;
                while (temp != NULL && temp->val == dup) {
                    temp = temp->next;
                }
            }
            if(check == 0){
                tail->next = temp;
                tail = tail->next;
                temp = temp->next;
            }
        }
        tail->next = NULL;
        return dummy.next ;
    }
};