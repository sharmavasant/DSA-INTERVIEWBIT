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
 * @input B : Integer
 * 
 * @Output Integer
 */
int solve(listnode* A, int B) {
    int n=0;
    struct ListNode* temp=A;
    while(temp!=NULL) {
        temp=temp->next;
        n++;
    }
    int traverse=(n/2)-B;
    if(traverse==0) {
        return A->val;
    }
    else if(traverse>0) {
        struct ListNode* temp=A;
        while(traverse--) {
            temp=temp->next;
        }
        return temp->val;
    }
    return -1;
}

