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
listnode* Solution::deleteDuplicates(Listode* A) {
ListNode* prev = new ListNode(0);// dummy ListNode
prev->next = A;
auto head = prev;
while(A!=NULL){
               if(A->next != NULL && A->val == A->next->val){
                         while(A->next != NULL && A->val == A->next->val){
                                   A = A->next;
                          }
                  prev->next = A->next;
                  if(A != NULL) A = A->next;
              }  else{
                          prev = A; 
                          A = A->next;
                 }
          }
return head->next;
}
