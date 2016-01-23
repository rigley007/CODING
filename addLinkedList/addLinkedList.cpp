#include <iostream>
#include "addLinkedList.hpp"

int main(){
    std::cout<<"Input List a, end by typing -1."<<std::endl;
    int temp = 0;
    ListNode *a, *b, *c;
    ListNode *carry;
    bool head = true;
    while(temp != -1){
        std::cin>>temp;
        if(temp == -1) break;
        if(head){
            carry = new ListNode(temp);
            a = carry;
            head = false;
        }else{
            carry->next = new ListNode(temp);
            carry = carry->next;
        }
    }
    std::cout<<"Input List b, end by typing -1."<<std::endl;
    head = true;
    temp = 0;
    while(temp != -1){
        std::cin>>temp;
        if(temp == -1) break;
        if(head){
            carry = new ListNode(temp);
            b = carry;
            head = false;
         }else{
             carry->next = new ListNode(temp);
             carry = carry->next;
         }
     }
    
    c = addListedNumbers(a,b);
    
    printListedNumbers(a);
    printListedNumbers(b);
    printListedNumbers(c);
    return 0;

}
