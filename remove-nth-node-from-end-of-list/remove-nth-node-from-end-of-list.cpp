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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *hare,*tortoise;
        hare=tortoise=head;
        for(int i=0;i<n;i++){
            hare=hare->next;
        }
        if(!hare) return head->next;
        while(hare->next!=NULL){
            hare=hare->next;
                tortoise=tortoise->next;
                
            }
         tortoise->next=tortoise->next->next;
      
       return head;
            
      
         
        
        
    }
};