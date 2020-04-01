#include <iostream>
#include <cstdlib>

#define MAX 5
class Queue {
public:
    int queue_array[MAX];
    int rear = - 1;
    int front = - 1;
    void choice()
    {
        int choice;
        while (1)

        {
            std::cout<<"1.Insert \n";
            std::cout<<"2.Delete\n";
            std::cout<<"3.Display \n";
            std::cout<<"4.Exit \n";
            std::cout<<"Enter your choice : ";
            std::cin>>choice;
            switch (choice)
            {
                case 1:
                    insert();
                    break;
                case 2:
                    remove();
                    break;
                case 3:
                    display();
                    break;
                case 4:
                    exit(1);
                default:
                    std::cout<<"Invalid choice \n";
            } /*End of switch*/
        } /*End of while*/
    } /*End of main()*/
    void insert()
    {
        int add_item;
        if (rear == MAX - 1)
            std::cout<<"Queue Overflow \n";
        else
        {
            if (front == - 1)
                /*queue is initially empty */
                front = 0;
            std::cout<<"Insert the element in queue : ";
            std::cin>> add_item;
            rear = rear + 1;
            queue_array[rear] = add_item;
        }
    }
    void remove()
    {
        if (front == - 1)
        {
            std::cout<<"Queue Underflow \n";
            return ;
        }
        else
        {
            std::cout<<"Deleted Element is :\n", queue_array[front];
            front = front + 1;
        }
    }
    void display()
    {
        int i;
        if (front == - 1)
            std::cout<<"Queue is empty \n";
        else
        {
            std::cout<<"Queue is : \n";
            for (i = front; i <= rear; i++)
                std::cout<< queue_array[i];
            std::cout<<"\n";
        }
    } /*End of display() */

};

//
// Created by Anchal Aithani on 15-01-2020.
//

