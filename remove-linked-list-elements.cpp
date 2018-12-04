//https://www.lintcode.com/problem/remove-linked-list-elements/description

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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head)
            return NULL;
        while(head && head->val==val)
            head=head->next;
        ListNode* temp=head;
        while(temp && temp->next){
            if(temp->next->val==val)
                temp->next=temp->next->next;
            else
                temp=temp->next;
        }
                return head;
        
    }
};
