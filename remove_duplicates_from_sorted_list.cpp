/*
Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.
*/


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
        if(head == nullptr) { return head; }
        ListNode* tmp = head;
        while(tmp->next != nullptr) {
            if(tmp->val == tmp->next->val) {
                ListNode* tmp2 = tmp->next;
                if(tmp->next->next != nullptr) {
                    tmp->next = tmp->next->next;
                } else {
                    tmp->next = nullptr;
                }
                delete tmp2;
                continue;
            }
            tmp = tmp->next;
        }
        return head;
    }
};

