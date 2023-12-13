//https://leetcode.com/problems/palindrome-linked-list/
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
    void insert_at_tail(ListNode* &head, ListNode*&tail, int value)
    {
        ListNode* newNode = new ListNode(value);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next; 
    }
    void reverse(ListNode *& head, ListNode* current)
    {
        if(current->next == NULL)
        {
            head = current;
            return;
        }
        reverse(head,current->next);
        current->next->next = current;
        current->next = NULL;

    }
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL) return true;
        ListNode* newhead = NULL;
        ListNode* newtail = NULL;
        ListNode * temp = head;
        while(temp != NULL)
        {
            insert_at_tail(newhead,newtail,temp->val);
            temp = temp->next;
        }
        reverse(newhead,newhead);
        ListNode* temp1 = newhead;
        temp = head;// update temp bcz in the prev while loop it goes to NULL. so update it to the head.
        while(temp != NULL)
        {
            if(temp->val != temp1->val)
            {
                return false;
            }
            temp = temp->next;
            temp1 = temp1->next;
        }
        return true;
    }
};