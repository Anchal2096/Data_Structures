# include <iostream>
class LinkedList{
public:
    int size{};
    int data{};
    struct Node{
        int data;
        Node* next;
    }*head = nullptr;

    void Creation() {

        Node *tail = nullptr;
        Node *temp = nullptr;
        std::cout << "Enter the size of your Linked list";
        std::cin >> size;
        for (int i = 0; i < size; i++) {
            std::cout << "Enter the data into the node";
            std::cin >> data;
            Node* temp = new Node();
            temp->data = data;
            temp->next = nullptr;
            if (head == nullptr) {
                head = temp;
                tail = temp;
            } else {
                tail->next = temp;
                //temp->next = nullptr;
                tail = temp;
            }
        }
        //std::cout << "Hello";
            display();

    }
    void display() {
    struct Node *tempr= nullptr;

        tempr = head;
        std::cout << "Linked List :-   ";
        while (tempr != nullptr) {
            std::cout << tempr->data << "     ";
            tempr = tempr->next;
        }
    }
    void insertion(){
        int loc ;
        int number;
        Node* temp =nullptr;
        Node* ptr =head;
        std::cout<<"\nEnter the data into the node";
        std::cin>>number;
        temp = new Node();
        temp->data = number;
        //std::cout<<"Reached till here";
        temp->next = nullptr;
        std::cout<<"Enter the location you want to insert the node";
        std::cin>> loc;
        for (int i = 1;i<loc-1;i++){
            //std::cout<<ptr->data;
            ptr= ptr->next;
        }
            temp->next = ptr->next;
            ptr->next= temp;

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
            //std::cout<<ptr->data;
            prev = temp;
            temp = temp->next;
            //std::cout <<"\n"<< prev->data <<"\n";
            //std::cout << temp->data <<"\n";
        }
        prev->next = temp->next;

        display();
    }
};

//
// Created by Anchal Aithani on 01-01-2020.
//

