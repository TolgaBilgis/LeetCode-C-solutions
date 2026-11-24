struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *prev = 0;
    while (head) {
        struct ListNode *next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    return prev;
}
