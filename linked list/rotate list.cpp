/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* head, int B) {
    struct ListNode* prev=NULL;
    struct ListNode* forwd=head;
    int n=0;
    while(forwd) {
        n++;
        forwd=forwd->next;
    }
    forwd=head;
    int x=n-abs(B)%n;
    if(head==NULL||head->next==NULL||x==n) {
        return head;
    }
    
    while(x--) {
        prev=forwd;
        forwd=forwd->next;
    }
    struct ListNode* newhead=forwd;
    prev->next=NULL;
    while(forwd->next!=NULL) {
        forwd=forwd->next;
    }
    forwd->next=head;
    return newhead;
}
