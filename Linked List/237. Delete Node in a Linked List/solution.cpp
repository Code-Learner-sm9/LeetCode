//https://leetcode.com/problems/delete-node-in-a-linked-list/
//https://phitron.io/ph453/video/ph453-11-6-delete-node-in-a-linkedlist-leetcode-
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
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        ListNode* deleteNode = node->next;
        node->next = node->next->next;
        delete deleteNode;

    }
};