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
   void InsertAtBegin(ListNode* &head,int val){
    ListNode* newNode= new ListNode(val);
    newNode->next=head;
    head=newNode;
    return;
}

  ListNode* reversi(ListNode* &head){
      if(head==NULL) return head;
      ListNode* nextnode;
      ListNode* curr=head;
      ListNode* prev=NULL;

      while(curr!=NULL){
        nextnode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextnode;
      }

      head=prev;
      return head;

  }


    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // if(list1==NULL) return list1;
        ListNode* temp=NULL;
        while(list1!=NULL && list2!=NULL){
            if(list1->val<list2->val){
                InsertAtBegin(temp,list1->val);
                list1=list1->next;
            }
            else{
                InsertAtBegin(temp,list2->val);
                list2=list2->next;

            }
        }

        while(list1!=NULL){
            InsertAtBegin(temp,list1->val);
            list1=list1->next;
        }

        while(list2!=NULL){
            InsertAtBegin(temp,list2->val);
            list2=list2->next;
        }
        return reversi(temp);
      
    }
};