/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* head, int m, int n) {
    ListNode* newnode=new ListNode(0);
    newnode->next=head;
    head=newnode;
    ListNode* temp=head;
    while(temp) {
        if(m==1) {
            ListNode* prev=NULL, *fur=temp->next, *curr=temp->next, *before=temp->next;
            while(n) {
                fur=fur->next;
                curr->next=prev;
                prev=curr;
                curr=fur;
                n--;
            }
            before->next=fur;
            temp->next=prev;
        }
        temp=temp->next;
        m--;
        n--;
    }
    return head->next;
}
