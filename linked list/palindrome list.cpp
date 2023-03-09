/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 * 
 * typedef struct ListNode listnode;
 * 
 * listnode* listnode_new(int val) {
 *     listnode* node = (listnode *) malloc(sizeof(listnode));
 *     node->val = val;
 *     node->next = NULL;
 *     return node;
 * }
 */
/**
 * @input A : Head pointer of linked list 
 * 
 * @Output Integer
 */
 //firstly-> find the mid node of linked list
 //secondly-> reverse the linked list from mid node to last node of linked list
 //thirdly-> compare the node from begenning node to mid node with mid node to last node
 //and increment count
 //check if count is equal to n/2 or not
 //return 1 or 0 accordingly.
int lPalin(listnode* head) {
    struct ListNode* curr=head;
    struct ListNode* slow=head;
    struct ListNode* fast=head->next;
    int n=0;
    int count=0;
    while(curr!=NULL) {
        n++;
        curr=curr->next;
    }
    curr=head;
    while(fast!=NULL) {
        fast=fast->next;
        if(fast!=NULL) {
            fast=fast->next;
        }
        slow=slow->next;
    }
    struct ListNode* prev=NULL;
    struct ListNode* forwd=NULL;
    curr=slow;
    if(n%2!=0) {
        curr=curr->next;
    }
    while(curr!=NULL) {
        forwd=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forwd;
    }
    curr=head;
    while(prev!=NULL) {
        if(curr->val==prev->val) {
            count++;
        }
        prev=prev->next;
        curr=curr->next;
    }
    if(count==n/2) {
        return 1;
    }
    return 0;
}