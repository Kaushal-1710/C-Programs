struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    struct ListNode one;
    one.val = 0;
    one.next = head;

    struct ListNode *pre = &one;
    int i ;

    for(i=0; i<left-1; i++)
    {
        pre = pre -> next;
    }
}