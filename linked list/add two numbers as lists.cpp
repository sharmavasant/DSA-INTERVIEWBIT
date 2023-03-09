/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* head1, ListNode* head2) {
    struct ListNode* curr1=head1;
    struct ListNode* curr2=head2;
    struct ListNode* prev=NULL;
    struct ListNode* forwd=NULL;
    int n1=0, n2=0;
    while(curr1) {
        n1++;
        curr1=curr1->next;
    }
    forwd=NULL;
    prev=NULL;
    while(curr2) {
        n2++;
        curr2=curr2->next;
    }
    int carry=0;
    struct ListNode* newnode;
    curr1=head1;
    curr2=head2;
    int m=min(n1,n2);
    if(n1>n2) {
        newnode=head1;
    }
    else {
        newnode=head2;
    }
    int temp=0;
    while(m--) {
        
        if(carry!=0){
            temp=(curr1->val+curr2->val)+carry;
            newnode->val=((curr1->val+curr2->val)+carry)%10;
            carry=0;
        }
        else{
            temp=(curr1->val+curr2->val);
            newnode->val=(curr1->val+curr2->val)%10;
        }
        carry=(temp)/10;
        curr1=curr1->next;
        curr2=curr2->next;
        newnode=newnode->next;
    }
    while(newnode) {
        if(carry!=0) {
            temp=newnode->val+carry;
            newnode->val=(newnode->val+carry)%10;
            carry=0;
        }
        else {
            temp=newnode->val;
            newnode->val=(newnode->val)%10;
        }
        carry=temp/10;
        prev=newnode;
        newnode=newnode->next;
    }
    if(carry!=0) {
        ListNode* lastnode=new ListNode(1);
        prev->next=lastnode;
        lastnode->next=NULL;
    }
    if(n1>n2) {
        newnode=head1;
    }
    else {
        newnode=head2;
    }
    return newnode;
}
