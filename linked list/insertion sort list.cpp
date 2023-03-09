/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::insertionSortList(ListNode* head) {
    ListNode* dummy=new ListNode(0);
    while(head) {
        ListNode* next=head->next;
        struct ListNode* temp=dummy;
        while(temp->next&&temp->next->val<head->val) {
            temp=temp->next;
        }
        head->next=temp->next;
        temp->next=head;
        head=next;
    }
    return dummy->next;
}
