/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* head, int B) {
    vector<int> arr;
    struct ListNode* curr=head;
    while(curr) {
        if(B>curr->val) {
            arr.push_back(curr->val);
        }
        curr=curr->next;
    }
    curr=head;
    while(curr) {
        if(B<=curr->val) {
            arr.push_back(curr->val);
        }
        curr=curr->next;
    }
    curr=head;
    int i=0;
    while(curr) {
        curr->val=arr[i];
        i++;
        curr=curr->next;
    }
    return head;
}
