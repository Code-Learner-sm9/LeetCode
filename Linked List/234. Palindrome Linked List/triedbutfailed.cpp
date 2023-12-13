class Solution
{
public:
  void reverse(ListNode *&head, ListNode *current)
  {
    if (current->next != NULL)
    {
      head = current;
      return;
    }

    reverse(head, current->next);
    current->next->next = current;
    current->next = NULL;
  }
   void print(ListNode* head)
    {
        ListNode* temp = head;
        while(temp != NULL)
        {
            cout<<temp->val<<" ";
            temp = temp->next;
        }
    }
  bool isPalindrome(ListNode *head)
  {
    if(head == NULL || head->next == NULL) return true;
    

    ListNode *original = head;
    print(original);
    cout<<endl;
    ListNode *check = head;
    reverse(check, check);
    
    print(check);
    cout<<endl;
    while(original != NULL)
    {
      if(original->val != check->val)
      {
        return false;
      }
      original = original->next;
      check = check->next;
    }

   
    return true;
  }
};