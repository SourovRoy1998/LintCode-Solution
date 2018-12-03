//https://www.lintcode.com/problem/nth-to-last-node-in-list/description

/**
 * Definition of ListNode
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *         this->val = val;
 *         this->next = NULL;
 *     }
 * }
 */


class Solution {
public:
    /*
     * @param head: The first node of linked list.
     * @param n: An integer
     * @return: Nth to last node of a singly linked list. 
     */
    ListNode * nthToLast(ListNode * head, int n) {
        // write your code here
        if(!head)
            return head;
        ListNode* fast=head;
        ListNode* slow=head;
        for(int i=0;i<n-1;i++)
            fast=fast->next;
        while(fast->next){
            fast=fast->next;
            slow=slow->next;
        }
        return slow;
    }
};
