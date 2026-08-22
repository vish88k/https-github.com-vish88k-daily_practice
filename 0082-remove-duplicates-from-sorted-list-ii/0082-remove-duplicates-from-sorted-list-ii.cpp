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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
         return NULL;
        }
        while( head && head->next && head->next->val==head->val){
            int val=head->val;
            while( head &&  head->val==val){
                 head=head->next;
            }
        }
        if(head==NULL){
            return NULL;
        }
    
         ListNode*prevtemp=head;
         ListNode*temp=head->next;

         while(temp && temp->next){
            if( temp->next && temp->next->val==temp->val){
                    int val=temp->val;
                    while( temp && temp->val==val){
                        temp=temp->next;
                    }
                 prevtemp->next=temp;
            }
            else{
                prevtemp=temp;
                temp=prevtemp->next;
            }
         }
         return head;
    }
};
        