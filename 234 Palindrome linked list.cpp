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
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        if(head==NULL || head->next==NULL) return true;
        int count=0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        int index=1;
        temp=head;
        stack<int> st;
        while(temp!=NULL){
            if(index<=count/2){
                st.push(temp->val);
            }else{
                if(st.top() == temp->val){
                    st.pop();
                }
            }
            index++;
            temp=temp->next;
        }
        cout<<count;
        return st.empty();
    }
};
