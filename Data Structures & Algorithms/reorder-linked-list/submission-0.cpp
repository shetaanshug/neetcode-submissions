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
    ListNode* reverse(ListNode * head){
        ListNode* curr=head,*prev=nullptr;

        while(curr!=nullptr){
            ListNode *next =curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        
        ListNode* fast =head,*slow= head;
        while(fast!=nullptr&&fast->next!=nullptr){
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode* l2 = slow->next;
        slow->next = nullptr;
        l2 = reverse(l2);
        ListNode*curr = head,*l1=head;

        while(l2!=nullptr && l1!=nullptr){
            
                ListNode* n1 = l1->next;
                ListNode* n2 = l2->next;

                l1 ->next = l2;
                l2->next = n1;

                l1 = n1;
                l2 = n2;
           


        }
    //    if(curr) 
  
    }
};
