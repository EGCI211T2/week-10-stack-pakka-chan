
#ifndef stack_h
#define stack_h
#include "node.h"
class Stack {
	NodePtr top;
	int size;
public:
    void push(int);
    int pop();
    Stack();
    ~Stack();
};


void Stack::push(int x){
  NodePtr new_node=new NODE(x);
  if(new_node){
            // Left missing for exercises…
         new_node->set_next(top); 
         top = new_node; 
         size++; 
  }
         // Left missing for exercises…
         else cout<<"Not enough memory."<< endl;
    
}

int Stack::pop(){
        NodePtr t=top;
        if(t!=NULL){
        int value;
        value=t->get_value();
    // Left missing part for exercises
        top=top->get_next();
        size--;
        delete t;
        return value;
	//be careful of the empty stack!!!
    }
    cout<<"Empty stack"<<endl;
    return 0;
}

Stack::Stack(){
    top=NULL;
    size = 0;
    //initialize stack
    
}
Stack::~Stack(){
    cout<<"Clear the stack"<<endl;
    int n = size;
    while(n>0){
        pop();
        n--;
    }
   /* NodePtr t = top;
    while(t != NULL){
        NodePtr next = t->get_next();
        delete t;
        t = next;
    }
    //delete all remaning stack (i.e. pop all) 
    top = NULL;
    size = 0;*/
}


#endif
