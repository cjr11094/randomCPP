/* 
 * File:   List.h
 * Author: connerreilly
 *
 * Created on May 27, 2014, 12:11 AM
 */

#ifndef LIST_H
#define LIST_H


class List
{
    
private:
    typedef struct node{
        int data;
        node* next;
    }* nodePtr;

//        typedef struct node* nodePtr; <-- this is equivalent to code directly above
        
    nodePtr head;
    nodePtr curr;
    nodePtr temp;

public:
    List();
    void addNode(int addData);
    void deleteNode(int delData);
    void printList();
    
};


#endif // LIST_H
