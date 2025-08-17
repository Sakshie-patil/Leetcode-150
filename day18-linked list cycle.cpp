bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL) {
            slow = slow ->next;
            fast = fast->next->next;
            // has cycle
            if(slow == fast) return true;
        }
        return false;
    }
