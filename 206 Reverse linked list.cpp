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
    ListNode* rev;
    ListNode* curr;
    ListNode* prev=nullptr; //='NULL';
    // prev=nullptr;
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) return NULL;
        if(head->next==NULL){
            head->next=prev;
            rev=head;
            return rev;
        }
        curr=head->next;
        head->next=prev;
        prev=head;
        reverseList(curr);
        return rev;
    }
};
