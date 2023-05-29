class Solution{
  public:
  
    void push(Node **head,int data)
    {
        Node *newnode = new Node(data);
        newnode->next=*head;
        *head=newnode;
    }
    
    Node* findIntersection(Node* head1, Node* head2)
    {
        // code here
        // return the head of intersection list
        map<int,int>mp;
        
        Node *p=head1;
        while(p)
        {
            mp[p->data]++;
            p=p->next;
        }
        
        p=head2;
        while(p)
        {
            mp[p->data]++;
            p=p->next;
        }
        
        Node *res=new Node(0);
        Node *temp=res;
        
        p=head1;
        while(p)
        {
            if(mp[p->data]==2)
            {
                Node *newnode=new Node(p->data);
                temp->next=newnode;
                temp=temp->next;
            }
            p=p->next;
        }
        
        return res->next;
    }
};
