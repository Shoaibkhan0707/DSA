#include<iostream>
using namespace std;
        class stack{
        int data;
        stack *next;
        public:
        stack(int x){
        data=x;
        next=NULL;
}
        bool push(int data,stack**);
        int pop(stack*);
        int top(stack*);
        bool empty(stack*);
};
bool stack::push(int d,stack **head){
        stack *temp=new stack(d);
        if(temp==NULL){
        return false;// stack using linkedlist
        }else{
                if(*head==NULL){
                *head=temp;
        }else{
                temp->next=*head;
                *head=temp;
        }
        return true;
        }
}
int stack::pop(stack *head){
        if(head==NULL){
                cout<<"stack is empty\n";
        }else{
                stack *p=head;
                stack *temp;
                p->next=temp;
                cout<<p->data<<" ";
                head=p->next;
                delete(p);
        }
        return 0;
}
int stack::top(stack* head){
        stack *p=head;
         while(p!=NULL){
                cout<<p->data<<" ";
                p=p->next;
        }
        return true;
}
bool empty(stack *head){
        if(head==NULL)return true;
        return  false;
}
int main(){
        stack *head=NULL;
        int option,data;
        stack *st=new stack(data);
        while(1){
        cout<<"option\n 1.push\n 2.pop\n 3.top\n 4.empty\n 5.exit\n";
        cin>>option;
        switch(option){
                case 1:
                        cout<<"enter the data\n";
                        cin>>data;
                        st->push(data,&head);
                        break;
                case 2:
                        st->pop(head);
                        break;
                case 3:
                        st->top(head);
                        break;
                case 4:
                        st->empty(head);
                        break;
                case 5:
                        return 0;
                default:
                        cout<<"invalid option";
                }
        }
}


