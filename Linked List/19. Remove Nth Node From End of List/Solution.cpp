//https://leetcode.com/problems/remove-nth-node-from-end-of-list/
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
 //Two Pointers Approach
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         ListNode *slow=head,*fast=head;
        // Fast will be at K from start
        for(int i=0;i<n;i++){
            fast=fast->next;
        }
        if(fast==NULL){
            return head->next;
        }
        // Fast and Slow both will cover n-k from start
        while(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        return head;
    }
};