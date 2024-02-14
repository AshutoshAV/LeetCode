/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode*, int> tru;
        ListNode* itA=headA;
        ListNode* itB=headB;
        ListNode* answer=NULL;
        while(itB!=NULL){
            tru[itB]++;
            itB=itB->next;
        }
        while(itA!=NULL){
            if(tru.count(itA)){
                answer=itA;
                break;
            }
            itA=itA->next;
        }
        return answer;
    }
};
