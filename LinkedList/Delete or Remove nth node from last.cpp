class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* ans=new ListNode();    ✅✅ANY PROCESS REQUIRING DELETION OR CHANGINg LINKS// To avoid edge case  while checking loop for while(node->next) not required for while(node)  :if only 1 node in linked list
           ans->next=head;
           ListNode*fast=ans;
           ListNode*slow=ans;
           for (int i=0;i<n;i++){        //make a difference of n so that fast is always n node far from slow.
               fast=fast->next;
           }

           while(fast->next){             // reaching the node to remove
               fast=fast->next;
               slow=slow->next;          //Code to delete a node
           }
           slow->next=slow->next->next;
           return ans->next;             // To avoid edge case : if only 1 node in linked list

    }
};
