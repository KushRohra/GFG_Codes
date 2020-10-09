int modularNode(Node* head, int k)
{
	int index=1,data=-1;
	while(head) {
	    if(index%k==0)
	        data=head->data;
	    head=head->next;
	    index+=1;
	}
	return data;
}

