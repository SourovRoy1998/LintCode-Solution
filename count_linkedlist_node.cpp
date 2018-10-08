//https://www.lintcode.com/problem/count-linked-list-nodes/description

/**
 * Definition of singly-linked-list:
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
     * @param head: the first node of linked list.
     * @return: An integer
     */
    int countNodes(ListNode * head) {
        // write your code here
        if(!head)
            return 0;
        int x=0;
        ListNode* temp=head;
        
        while(temp){
            x++;
            temp=temp->next;
        }
        return x;
    }
};
