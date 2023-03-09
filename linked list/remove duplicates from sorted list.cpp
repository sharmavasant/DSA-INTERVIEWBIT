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
listnode* deleteDuplicates(listnode* head) {
    struct ListNode* curr=head;
    while(curr!=NULL) {
        if(curr->next!=NULL&&curr->val==curr->next->val) {
            curr->next=curr->next->next;
        }
        else {
            curr=curr->next;
        }
    }
    return head;
}
