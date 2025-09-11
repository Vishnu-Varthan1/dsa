#include<iostream>

using namespace std;

 struct Node
 {
    /* data */
    int data;
    Node* next;
 };

Node* top = NULL;

void push(int value){
    Node* newNode = new Node();
    newNode->data =  value;
    newNode->next = top;
    top = newNode;
    cout<<value<<"Pushe";
}

void pop(){
    if (top == NULL)
    {
        /* code */cout<<"stack underflow";
        return;
    }
    Node* temp = top;
    cout<<"popedd"<<temp->data<<endl;
    top= top->next;
    delete temp;
    
}

void peek(){
    if (top == NULL)
    {
        /* code */cout<<"stack is empty";

    }
    else{
        cout<<"top"<<top->data<<endl;
    }
    
}
 

void display(){
    if (top==NULL)
    {
        /* code */
        cout<<"stack em";
    }
    Node* temp = top;
    while (temp!=NULL)
    {
        /* code */
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;

    
    
}

int main(){
    int cho , value;
    do
    {
        /* code */

        cout<<"1";
         cout<<"2";

          cout<<"3";
           cout<<"4";
            cout<<"5";
            cout<<"enter your cho";
            cin>>cho;


            switch (cho)
            {

                case 1:
             cout<<"enter your val:";
             cin>>value;
             push(value);
             break;
            
             
  case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        } 
    } while (cho != 5);

    return 0;
}