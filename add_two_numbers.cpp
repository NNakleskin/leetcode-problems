/*
 You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.
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
    std::string to_str(ListNode *l) {
        std::string res;
        while(l != nullptr) {
            res += l->val + '0';
            l = l->next;
        }
        std::reverse(res.begin(), res.end());
        return res;
    }

    ListNode* to_list(std::string n) {
        ListNode *root = new ListNode(), *tmp;
        tmp = root;
        bool indicate = false;
        for(auto elem: n) {
            if(indicate) {
                tmp -> next = new ListNode();
                tmp = tmp -> next;
            }
            tmp->val = elem - '0';
            indicate = true;
        }
        return root;
    }


    std::string sum_str(std::string a, std::string b) {
        char *res = new char[256];
        char *aa = new char[256], *bb = new char[256];
        for(int i = 0; i < 256; i++) {
            res[i] = '0';
            aa[i] = '0';
            bb[i] = '0';
        }
        int i = 0;
        for(auto elem: a) {
            aa[i] = elem;
            i++;
        }
        i = 0;
        for(auto elem: b) {
            bb[i] = elem;
            i++;
        }

        res[255] = '\0';
        for(int i = 0; i < 255; i++) {
            int sum_help = (aa[i] - '0') + (bb[i] - '0') + (res[i] - '0');
            res[i] = sum_help % 10 + '0';
            res[i + 1] = sum_help / 10 + '0';
        }


        i = 254;
        while(res[i] == '0' && i > 0) {
            i--;
        }

        res[i + 1] = '\0';
        std::string str = res;

        return str;
    }


    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        std::string res = sum_str(to_str(l1), to_str(l2));
        return to_list(res);
    }
};
