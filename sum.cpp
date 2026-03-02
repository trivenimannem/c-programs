#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
};
class Linkedlist{
	private:
		Node *head;
	public:
		Linkedlist()
		{
			head=NULL;
		}
		void insertAtEnd(int val)
		{
			Node*newnode=new Node();
			newnode->data=val;
			newnode->next=NULL;
			if(head==NULL)
			{
				head=newnode;
			}
			else{
			
			Node* temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
				
			}
			temp->next=newnode;}
		}
		void display()
		
		{
			Node* temp=head;
			while(temp!=NULL)
			{
				cout<<temp->data<<"->";
				temp=temp->next;
			}
			cout<<"NULL";
		}
		void sumoffirstmiddleandend()
		{
			 if (head == NULL) {
        		cout << "List is empty\n";
        		return;
   			 }

    		int first = head->data;
   			Node* slow = head;
    		Node* fast = head;
   			 Node* temp = head;
   			 while (fast != NULL && fast->next != NULL) {
        			slow = slow->next;       
       				 fast = fast->next->next;
   			 }

   			 while (temp->next != NULL) {   
      			  temp = temp->next;
    		}
    		int middle = slow->data;
   			 int last = temp->data;
    		cout << "Sum = " << first + middle + last << endl;
			
			}
};
int main()
{
	Linkedlist list;
	int n,val,key;
	cout<<"Enter number of newnodes to be created";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>val;
		list.insertAtEnd(val);
	}
	list.display();
	list.sumoffirstmiddleandend();
	return 0;
}
