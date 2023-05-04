/*
 *You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

Constraints:

The number of nodes in both lists is in the range [0, 50].
-100 <= Node.val <= 100
Both list1 and list2 are sorted in non-decreasing order.
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> arr;
        ListNode *list1_1 = list1;
        ListNode *list2_2 = list2;
        while(list1_1 != nullptr) {
            arr.push_back(list1_1 -> val);
            list1_1 = list1_1 -> next;
        }

        while(list2_2 != nullptr) {
            arr.push_back(list2_2 -> val);
            list2_2 = list2_2 -> next;
        }
        sort(arr.begin(), arr.end());

        if(arr.empty()) {
            return nullptr;
        }

        ListNode *result = new ListNode(), *cur, *prew;
        cur = result;
        bool indicate = false;
        for(auto elem: arr) {
            if(indicate) {
                cur -> next = new ListNode();
                cur = cur -> next;
            }
            cur -> val = elem;
            indicate = true;
        }
        return result;
    }
};
