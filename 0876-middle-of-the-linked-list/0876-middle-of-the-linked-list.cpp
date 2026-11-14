/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
    ListNode*temp=head;
    int countN=0;
    while(temp!=NULL){
        temp=temp->next;
        countN++;
    }
    temp=head;
    int middleIndex=((countN)/2)+1;
    for(int i=0;i<middleIndex-1;i++){
        temp=temp->next;
    }
    return temp;
    
        
    }
};