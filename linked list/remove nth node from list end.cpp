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
listnode* removeNthFromEnd(listnode* A, int B) {
    int n=0;
    struct ListNode* temp=A;
    while(temp!=NULL) {
        temp=temp->next;
        n++;
    }
    int x=n-B;
    temp=A;
    if(x<=0) {
        temp=temp->next;
        A=temp;
        return A;
    }
    struct ListNode* prev=NULL;
    while(x--) {
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    return A;
}
