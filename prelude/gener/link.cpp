void printLinkedList(SinglyLinkedListNode* head) {
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
}

SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data)
{

    SinglyLinkedListNode *temp=new SinglyLinkedListNode(data);

    temp->data=data;

    if(llist==NULL)
    {
        temp->next=NULL;
        llist=temp;
        return llist;
    }

    SinglyLinkedListNode *curr=llist;

    temp->next=curr;
    llist=temp;
    return llist;
}

SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {

    SinglyLinkedListNode* temp =  head;
    SinglyLinkedListNode* prev = NULL;
    SinglyLinkedListNode* ptr;//ptr for next
    while(temp!=NULL)
    {
        ptr = temp->next;
        temp->next = prev;
        prev = temp;
        temp = ptr;
    }
    head = prev;
    return head;
}

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

DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {

    DoublyLinkedListNode *temp = NULL;
    DoublyLinkedListNode *current = head;


    while (current !=  NULL)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
    if(temp != NULL )
        head = temp->prev;

    return head;

}
