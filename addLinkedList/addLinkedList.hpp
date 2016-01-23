#ifndef _ADDLINKEDLIST_HPP_
#define _ADDLINKEDLIST_HPP_

#include <iostream>

class ListNode{
    public:    
    int val;
    ListNode * next;
        
    ListNode(int x){
        val = x;
        next = NULL;
    }
};

ListNode * addListedNumbers(ListNode * a, ListNode * b){
    ListNode *dummy = new ListNode(0);
    ListNode *curr = dummy;

    int carry = 0;
    while(a != NULL || b != NULL) {
        int va = (a!=NULL) ? a->val : 0;
        int vb = (b!=NULL) ? b->val : 0;
        int digit = va + vb + carry;
        carry = digit / 10;
        curr->next = new ListNode(digit % 10);
        if (a != NULL) a = a->next;
        if (b != NULL) b = b->next;
        curr = curr->next;
    }

    if (carry > 0) curr->next = new ListNode(carry);
    return dummy->next;
}

void printListedNumbers(ListNode *p){
    while (p != NULL){
        std::cout<<p->val;
        p=p->next;
    }
    std::cout<<"\n";
}


#endif
