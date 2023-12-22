 //empty list
        if(head == NULL)
        return NULL;

        //non empty case

        Node* curr = head;

        while(curr != NULL){
            if(curr -> next != NULL && curr -> data == curr -> next -> next){
                //equal to condition
                Node* next_next = curr -> next -> next;
                Node* nodeToDel = curr -> next;
                delete(nodeToDel);
                curr -> next = next_next;
            }
            else{
                curr = curr -> next;
            }
        }
        return head;
    }