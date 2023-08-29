

/*Given the head of a linked list head, in which each node contains an integer value.

Between every pair of adjacent nodes, insert a new node with a value equal to the greatest common divisor of them.

Return the linked list after insertion.

The greatest common divisor of two numbers is the largest positive integer that evenly divides both numbers. */


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
    int gcd(int a, int b) {
        while(1) {
            if(a && b) {
                if(a > b) {
                    a = a % b;
                } else {
                    b = b % a;
                }
            } else {
                return a + b;
            }
        }
        return 0;
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* tmp = head;
        while(tmp != nullptr && tmp->next != nullptr) {
            int div = gcd(tmp->val, tmp->next->val);
            ListNode* old = tmp->next;
            tmp->next = new ListNode();
            tmp = tmp->next;
            tmp->next = old;
            tmp->val = div;
            tmp = tmp->next;
        }
        return head;
    }
};
