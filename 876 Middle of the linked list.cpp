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
    ListNode* middleNode(ListNode* head) {
        ListNode* fast;
        fast=head;
        ListNode* slow;
        slow=head;
        if(fast==NULL || fast->next==NULL){
            return head;
        }else{
            while(fast->next!=NULL){
                fast=fast->next;
                if(fast->next==NULL){
                    slow=slow->next;
                    break;

                }
                fast=fast->next;
                slow=slow->next;
            }
            // slow=slow->next;
            return slow;
        }

    }
};
