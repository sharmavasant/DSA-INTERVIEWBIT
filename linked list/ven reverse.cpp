/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 //1st-> make a vector
 //2nd-> add the even place elements to vector
 //3rd-> reverse the vector
 //4th-> add back the values from vector to linked list. This makes a even place reversed linked list.
ListNode* Solution::solve(ListNode* head) {
    int n=1;
    struct ListNode* temp=head;
    vector<int> arr;
    while(temp) {
        if(n%2==0) {
            arr.push_back(temp->val);
        }
        n++;
        temp=temp->next;
    }
    reverse(arr.begin(),arr.end());
    temp=head;
    n=1;
    int i=0;
    while(temp) {
        if(n%2==0) {
            temp->val=arr[i];
            i++;
        }
        n++;
        temp=temp->next;
    }
    return head;
}
