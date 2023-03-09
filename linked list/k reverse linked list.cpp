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
 * @Output head pointer of list.
 */
listnode* reverseList(listnode* A, int B) {
    if(A==NULL) {
        return NULL;
    }
    struct ListNode* prev=NULL;
    struct ListNode* curr=A;
    struct ListNode* next=NULL;
    int k=0;
    while(curr!=NULL&&k<B) {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        k++;
    }
    if(next!=NULL) {
        A->next=reverseList(next,B);
    }
    return prev;
}
