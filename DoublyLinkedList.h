# include <iostream>
class DoublyLinkedList{
public:
    int size = {};
    int data = {};
    struct Node{
        int data;
        Node* left;
        Node* right;
    }*head = nullptr, *tail = nullptr;
    void creation(){
        Node* temp = nullptr;
        std::cout << "Enter the number of nodes to be inserted";
       std:: cin>>size;
       for (int i = 0 ; i <size;i++){
           std::cout<<"Enter the data";
           std::cin>>data;
           temp = new Node();
           temp->data = data;
           temp->left = nullptr;
           temp->right = nullptr;
           if(head == nullptr){
               head = temp;
               tail = temp;
           }
           else{
               tail->right = temp;
               temp->left = tail;
               tail = temp;
           }


       }
        display();
    }
    void display(){
        struct Node *temp;
        temp=head;
        std::cout<<"Linked List :-   ";
        while(temp!=NULL){
            std::cout<<temp->data<<"     ";
            temp=temp->right;
        }
    }
    void insertion (){
        int pos = {};
        int data = {};
        Node*ptr = head;


        std::cout<<"Enter the position";
        std::cin>> pos;
        std::cout<<"Enter the data";
        std::cin>>data;
        Node*temp = nullptr;
        temp = new Node();
        temp->data = data;
        temp->right = nullptr;
        temp->left = nullptr;
        for(int i= 1; i<pos-1; i++){

            ptr = ptr->right;
        }

        temp->right = ptr->right;
        ptr->right->left =temp;
        ptr->right = temp;
        temp->left = ptr;
        display();
    }
    void deletion(){
        int loc ;
        int number;
        Node* temp =head;
        Node*prev = nullptr;

        std::cout<<"Enter the location you want to delete the node";
        std::cin>> loc;
        for (int i = 1;i<loc;i++) {
            temp = temp->right;
        }

        temp->right->left=temp->left;
        temp->left->right=temp->right;
        display();
    }
};
//
// Created by Anchal Aithani on 11-01-2020.
//
