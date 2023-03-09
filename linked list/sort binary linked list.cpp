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
 * @Output head pointer of list.
 */
listnode* solve(listnode* head) {
    struct ListNode* temp=head;
    int ones=0;
    int zeros=0;
    while(temp!=NULL) {
        if(temp->val==0) {
            zeros++;
        }
        else {
            ones++;
        }
        temp=temp->next;
    }
    temp=head;
    while(zeros--) {
        temp->val=0;
        temp=temp->next;
    }
    while(ones--) {
        temp->val=1;
        temp=temp->next;
    }
    return head;
}
