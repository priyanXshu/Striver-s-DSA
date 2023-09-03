class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL)   return list2;
        if(list2 == NULL)   return list1;
        ListNode* ans = new ListNode(-1);
        ListNode* ptr = ans;
        while(list1 && list2){
            if(list1 -> val < list2 -> val){
                ptr->next = list1;
                ptr = list1;
                list1 = list1->next;
            }
            else{
                ptr->next = list2;
                ptr = list2;
                list2 = list2->next;
            }
        }
        // if list1 is not empty, so add the remaining list1 nodes to the ans;
        while(list1){
            ptr->next = list1;
            ptr = list1;
            list1 = list1->next;
        }
        // if list2 is not empty, so add the remaining list2 nodes to the ans;
        while(list2){
            ptr->next = list2;
            ptr = list2;
            list2 = list2->next;
        }
    return ans->next;
    }
};
