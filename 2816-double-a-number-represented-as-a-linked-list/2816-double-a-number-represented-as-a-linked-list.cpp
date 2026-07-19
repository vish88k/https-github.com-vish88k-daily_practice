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

 void helper(ListNode*head, int &carry){
    if(head==NULL){
        return;
    }
       
       //go to last  node   
          helper(head->next,carry); 

         //while moving backword count carry and  insert new value; 
         
          int count=head->val*2+carry;
              
              carry=count/10;
              head->val=count%10;

 }
          
    ListNode* doubleIt(ListNode* head) {
       
        int carry=0;
        helper(head,carry);

         if(carry!=0){
            ListNode*newnode=new ListNode(carry);
            newnode->next=head;
            head=newnode;
         }
        


return head;
    }
};


