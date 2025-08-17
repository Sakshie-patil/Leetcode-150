ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // creating new list by alll node initialise by 1
        ListNode* dummyNode = new ListNode(-1);
        // ptr for dummy node
        ListNode* curr = dummyNode;
        int carry = 0;
        
        while(l1 != NULL || l2 != NULL || carry != 0) {
            int digit1 = (l1 != NULL) ? l1->val : 0;
            int digit2 = (l2 != NULL) ? l2->val : 0;

            int sum = digit1 + digit2 + carry;
            // new node in the new list
            int digit = sum%10;
            carry = sum/10;

            curr->next = new ListNode(digit);
            curr = curr->next;
            if(l1 != NULL) l1 = l1->next;
            if(l2!= NULL) l2=l2->next;
        }
        return dummyNode->next;
    }
