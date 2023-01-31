//
//  learn_pointer.cpp
//  lesson
//
//  Created by 王斌军 on 2022/7/28.
//
#include <iostream>
using namespace std;
struct NODE
{
    int data;
    NODE *next;
};
int main()
{
    int num;
    int innum;
    int i;
    NODE *first, *rear, *input;
    cin >> num >> innum;
    input = new NODE;
    input -> data = innum;
    input -> next = NULL;
    rear = first = input;
    for (i = 1; i < num; i++)
    {
        cin >> innum;
        input = new NODE;
        input -> data = innum;
        input -> next = NULL;
        rear -> next = input;
        rear = input;
    }
    input = first;
    while (input != NULL)
    {
        cout << input -> data << " ";
        input = input -> next;
    }
    
}
