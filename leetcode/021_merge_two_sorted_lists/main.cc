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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if( !l1 ) {
            return l2;
        }
        else if( !l2 ){
            return l1;
        }
        ListNode* head = NULL;
        if(l1->val <= l2->val){
            head = l1;
            l1 = l1->next;
        }else{
            head = l2;
            l2 = l2->next;
        }
        ListNode* res = head;
        while( l1 && l2 ){
            if( l1->val < l2->val ){
                head->next = l1;
                l1 = l1->next;
            }
            else{
                head->next = l2;
                l2 = l2->next;
            }
            head = head->next;
        }
        head->next = l1 ? l1 : l2;
        return res;
    }
};