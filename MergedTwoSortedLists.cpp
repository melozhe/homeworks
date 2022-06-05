ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if (list1 == nullptr) return list2;
    if (list2 == nullptr) return list1;
    
    ListNode* ptr;
    if (list1->val < list2->val) {
        ptr = list1;
        list1 = list1->next;
    } else {
        ptr = list2;
        list2 = list2->next;
    }
    
    ListNode* curr = ptr;
    while (list1 != nullptr && list2 != nullptr) {
        if (list1->val < list2->val) {
            curr->next = list1;
            list1 = list1->next;
        } else {
            curr->next = list2;
            list2 = list2->next;
        }
        curr = curr->next;
    }
    
    if (list1 == nullptr) {
        curr->next = list2;
    } else {
        curr->next = list1;
    }
    
    return ptr;
}
        