/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
ListNode* midnode(ListNode* head) {
    struct ListNode* slow=head, *fast=head->next;
    while(fast!=NULL&&fast->next!=NULL) {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}

ListNode* merge(ListNode* left, ListNode* right) {
    if(left==NULL) {
        return right;
    }
    if(right==NULL) {
        return left;
    }
    ListNode* newnode=new ListNode(0);
    struct ListNode* temp=newnode;
    while(left!=NULL&&right!=NULL) {
        if(left->val<right->val) {
            temp->next=left;
            temp=left;
            left=left->next;
        }
        else {
            temp->next=right;
            temp=right;
            right=right->next;
        }
    }
    while(left) {
        temp->next=left;
        temp=left;
        left=left->next;
    }
    while(right) {
        temp->next=right;
        temp=right;
        right=right->next;
    }
    newnode=newnode->next;
    return newnode;
}
 
ListNode* Solution::sortList(ListNode* head) {
    if(head==NULL||head->next==NULL) {
        return head;
    }
    struct ListNode* mid=midnode(head);
    struct ListNode* left=head;
    struct ListNode* right=mid->next;
    mid->next=NULL;
    left=sortList(left);
    right=sortList(right);
    struct ListNode* result=merge(left,right);
    return result;
}