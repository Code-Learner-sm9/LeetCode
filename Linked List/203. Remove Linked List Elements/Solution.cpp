//https://leetcode.com/problems/remove-linked-list-elements/
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
    ListNode* removeElements(ListNode* head, int val) {
        while(head != NULL && head->val == val)
        {
            head = head->next;
        }
        //here we check from where the value match with given value. as the value 6 is after 1th index that is 2 so we stopped it right here to perform our next operation.
        //for the input 1 2 6 3 4 5 6 head is now in 1th index that is value 2

        if(head == NULL || head->next == NULL) return head;
        ListNode* temp = head;
        while(temp->next != NULL)
        {
            //as temp = head so it now checks if values 2's next which is 6 is equal to value 6 or not if yes then the next of 2 is the next of 6. here we didnt remove the value 6. if we do the approach If(temp->val == val) then in the last node the value 6 remains untouched which will be a problem as we are check the while loop until it comes to temp->next!= NULL. so we go 1 index before to match the correct output to compare to the value.
            if(temp->next->val == val)
            {
                temp->next = temp->next->next;  
            }
            else{
            temp = temp->next;
            }
        }
        return head;
    }
};