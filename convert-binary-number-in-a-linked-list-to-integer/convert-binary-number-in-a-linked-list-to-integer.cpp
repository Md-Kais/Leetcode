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
    int getDecimalValue(ListNode* head) {
        ListNode* temp=head;int pos=0;
        while(temp->next !=NULL){
            pos++;
            temp=temp->next;
        }
        long long ans=0;
        ListNode* tt=head;
        while(tt!=NULL){
           if(tt->val==1){
               cout<<pos<<endl;
               ans+=(1<<pos);
           }
            tt=tt->next;
            pos--;
        }
        return ans;
    }
};