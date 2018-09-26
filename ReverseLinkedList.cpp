//https://www.lintcode.com/problem/reverse-linked-list/description
/**
 * Definition of singly-linked-list:
 *
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *        this->val = val;
 *        this->next = NULL;
 *     }
 * }
 */

class Solution {
public:
    /**
     * @param head: n
     * @return: The new head of reversed linked list.
     */
    ListNode * reverse(ListNode * head) {
        // write your code here
        ListNode* p=NULL;
        ListNode* q=head;
        ListNode* r=NULL;
        
        while(q){
            r=q->next;
            q->next=p;
            p=q;
            q=r;
        }
        return p;
        
    }
};
