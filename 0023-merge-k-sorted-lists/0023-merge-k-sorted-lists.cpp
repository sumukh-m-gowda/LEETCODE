// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//  ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

//         ListNode* temp1 = list1;
//         ListNode* temp2 = list2;

//         ListNode* head = new ListNode(-1);
//         ListNode* tail = head;
        
//         while (temp1 != nullptr && temp2 != nullptr) {

//             if (temp1->val <= temp2->val) {
//                 tail->next = temp1;
//                 temp1 = temp1->next;
//             }
//             else {
//                 tail->next = temp2;
//                 temp2 = temp2->next;
//             }

//             tail = tail->next;
//         }

//         if (temp1 != nullptr)
//             tail->next = temp1;

//         if (temp2 != nullptr)
//             tail->next = temp2;

//         return head->next;
//     }

//     ListNode* mergeKLists(vector<ListNode*>& lists) {
//         if(lists.size() == 0 ){
//             return 0;
//         }
//         if(lists.size() == 1) {
//             return lists[0];
//         }
//         ListNode* final = lists[0];
//         ListNode* ret;
//         for(int i = 1 ; i < lists.size() ; i++) {
//             ListNode* temp = lists[i];
//             final = mergeTwoLists(final , temp);

//         }
//         return final;
//     }
// };

class Solution {
public:
    struct Compare {
        bool operator()(ListNode* a, ListNode* b) {
            return a->val > b->val;
        }
    };

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, Compare> pq;

        for (auto list : lists) {
            if (list) pq.push(list);
        }

        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (!pq.empty()) {
            ListNode* curr = pq.top();
            pq.pop();

            tail->next = curr;
            tail = tail->next;

            if (curr->next) {
                pq.push(curr->next);
            }
        }

        return dummy.next;
    }
};