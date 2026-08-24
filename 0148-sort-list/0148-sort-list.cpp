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

    // Merge two sorted linked lists
    ListNode* merge(ListNode* left, ListNode* right) {

        ListNode dummy(0);
        ListNode* curr = &dummy;

        while (left != NULL && right != NULL) {

            if (left->val <= right->val) {
                curr->next = left;
                left = left->next;
            }
            else {
                curr->next = right;
                right = right->next;
            }

            curr = curr->next;
        }

        // Attach remaining nodes
        if (left != NULL) {
            curr->next = left;
        }
        else {
            curr->next = right;
        }

        return dummy.next;
    }


    // Merge Sort
    ListNode* sortList(ListNode* head) {

        // Base case
        if (head == NULL || head->next == NULL) {
            return head;
        }

        // Find middle
        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Split the list
        ListNode* right = slow->next;
        slow->next = NULL;

        // Recursively sort both halves
        ListNode* left = sortList(head);
        right = sortList(right);

        // Merge sorted halves
        return merge(left, right);
    }
};