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
    bool hasCycle(ListNode *head) {
        ListNode* it=head;
        map<ListNode*,int> tru;
        bool answer=false;
        while(it!=NULL){
            if(tru.count(it)){
                answer=true;
                break;
            }
            tru[it]++;
            it=it->next;
        }
        return answer;
    }
};
