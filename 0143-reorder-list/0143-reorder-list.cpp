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
    void reorderList(ListNode* head) {
        ListNode* fast = head->next;
        ListNode* slow = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* r = slow;
        slow = slow->next;
        stack<ListNode*> s;
        while(slow!=NULL){
            s.push(slow);
            slow = slow->next;
        }
        r->next = NULL;
        ListNode* curr = head;
        int i = 0;
        while(curr->next!=NULL){
            if(i%2==0){
                ListNode* temp = s.top();
                s.pop();
                temp->next = curr->next;
                curr->next = temp;
            }
            i++;
            curr = curr->next;
        }
        if(s.empty() == false){
            ListNode* temp = s.top();
            s.pop();
            temp->next = curr->next;
            curr->next = temp;
        }
    }
};