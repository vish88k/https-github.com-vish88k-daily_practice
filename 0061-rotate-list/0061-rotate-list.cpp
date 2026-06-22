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
    ListNode* rotateRight(ListNode* head, int k){
        if(head==NULL  || head->next==NULL){
            return head;
        }
        
        ListNode*temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }

       
        if(k>=count){
            k=k%count;
        }
        if(k==0){
            return head;
        }
        

     temp=head;
     ListNode*perv=NULL;
      while(temp->next!=NULL){
            temp=temp->next;
      }
      ListNode*lastnode=temp;
      temp=head;
      for(int i=0;i<count-k;i++){
        perv=temp;
        temp=temp->next;
      }
      lastnode->next=head;
      perv->next=NULL;
    
    head=temp;
    return head;
    }
};

        



      

        