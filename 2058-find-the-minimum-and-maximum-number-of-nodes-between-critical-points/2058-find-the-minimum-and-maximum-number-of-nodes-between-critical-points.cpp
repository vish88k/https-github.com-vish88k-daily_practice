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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
          ListNode*temp=head->next;
          ListNode*prev=head;
          int maxindex=INT_MIN;
          int minindex=INT_MAX;
          int mindist=INT_MAX;
          int previndex=-1;
          int i=2;
          while(temp->next){
            if(temp->val>prev->val && temp->val>temp->next->val || 
            temp->val<prev->val && temp->val<temp->next->val)
            {
                maxindex=max(maxindex,i);
                minindex=min(minindex,i);
                if(previndex!=-1){
                mindist=min(mindist,i-previndex);
                }
                 previndex=i;
            }
           i++;
           prev=temp;
           temp=temp->next;
          }
          if(previndex==-1 || mindist==INT_MAX){
            return {-1,-1};
          }
          int maxdist=maxindex-minindex;
          vector<int>ans;
          ans.push_back(mindist);
          ans.push_back(maxdist);
    return ans;
    }
};

                

        