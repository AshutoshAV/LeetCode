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
    ListNode *detectCycle(ListNode *head) {
        map<ListNode*,int> tru;
        map<ListNode*,int>::iterator ite;
        ListNode* it=head;
        ListNode* answer=NULL;
        int count=0;
        while(it!=NULL){
            if(tru.count(it)){
                ite=tru.find(it);
                answer=ite->first;
                break;
            }
            tru.insert({it,count});
            count++;
            it=it->next;
        }
        return answer;
    }
};
