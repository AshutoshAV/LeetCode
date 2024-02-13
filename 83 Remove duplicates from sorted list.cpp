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
        ListNode* curr;
        curr=head;
        ListNode* ahead;
        ahead=head;
        while(ahead!=NULL){
            if((curr->val)<(ahead->val)){
                curr->next=ahead;
                curr=curr->next;
                ahead=ahead->next;
            }else{
                ahead=ahead->next;
                if(ahead==NULL){
                curr->next=NULL;
            }
            }

        }

        return head;
    }
};
