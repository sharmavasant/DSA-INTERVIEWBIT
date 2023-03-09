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
 * @input B : Head pointer of linked list 
 * 
 * @Output head pointer of list.
 */
listnode* getIntersectionNode(listnode* head1, listnode* head2) {
    struct ListNode* temp1=head1;
    struct ListNode* temp2=head2;
    int n1=0;
    int n2=0;
    while(temp1!=NULL) {
        n1++;
        temp1=temp1->next;
    }
    temp1=head1;
    while(temp2!=NULL) {
        n2++;
        temp2=temp2->next;
    }
    temp2=head2;
    if(n1<n2) {
        temp2=head2;
        int x=n2-n1;
        while(x--) {
            temp2=temp2->next;
        }
    }
    else {
        temp1=head1;
        int x=n1-n2;
        while(x--) {
            temp1=temp1->next;
        }
    }
    while(temp1!=temp2&&(temp1!=NULL&&temp2!=NULL)) {
        temp1=temp1->next;
        temp2=temp2->next;
    }
    if(temp1==NULL) {
        return temp1;
    }
    if(temp2==NULL) {
        return temp2;
    }
    return temp1;
}
