#include<iostream>
using namespace std;
class Quick_sort{
public:
    //int quick(int ar[],int,int,int);
    void Quicksort()
    {
        int x[20],size,i;

        cout<<"Enter size of the array: ";
        cin>>size;

        cout<<"enter elements = ";
        for(i=0;i<size;i++)
            cin>>x[i];

        quicksort(x,0,size-1);

        printf("Sorted elements: ");
        for(i=0;i<size;i++)
            cout<<x[i]<<"  ";


    }

    void quicksort(int x[10],int first,int last){
        int pivot,j,temp,i;

        if(first<last){
            pivot=first;
            i=first;
            j=last;

            while(i<j){
                while(x[i]<=x[pivot]&&i<last)
                    i++;
                while(x[j]>x[pivot])
                    j--;
                if(i<j){
                    temp=x[i];
                    x[i]=x[j];
                    x[j]=temp;
                }
            }

            temp=x[pivot];
            x[pivot]=x[j];
            x[j]=temp;
            quicksort(x,first,j-1);
            quicksort(x,j+1,last);

        }
    }



};

//
// Created by Anchal Aithani on 23-03-2020.
//
