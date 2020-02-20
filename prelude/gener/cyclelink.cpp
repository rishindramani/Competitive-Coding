bool has_cycle(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *h=head,*t=head;
    while(h && t && t->next)
    {
        h=h->next;
        t=t->next->next;
        if(h==t)
        {
            return true;
        }

    }
       return false;
}