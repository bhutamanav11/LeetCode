
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = new ListNode(0);
        ListNode* current = head;

        while(list1 !=nullptr && list2 !=nullptr){
            if(list1->val <= list2->val){
                current->next = list1;
                list1 = list1->next;
            }
            else{
                current->next = list2;
                list2 = list2->next;
            }
            current = current->next;
        }
        while(list1!=nullptr){
            current->next = list1;
            list1 = list1->next;
            current = current-> next;

        }
        while(list2!=nullptr){
            current->next = list2;
            list2 = list2->next;
            current = current-> next;

        }
        return head->next;
    }
};
