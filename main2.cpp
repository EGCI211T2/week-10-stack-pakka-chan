#include<iostream>
#include<cstring>
using namespace std;

#include "stack.h"

int main(int argc, char **argv){
    int i, j;
   
/*
  Exercise 2
 printf("Checking the parentheses in argv arguments\n");

   */

 for(i=1;i<argc;i++){
     for(j=0;j<strlen(argv[i]);j++){
        Stack s; //Change node to char-->****
        if(argv[i][j]=='[' || argv[i][j]=='{' || argv[i][j]=='(' ){
                s.push(argv[i][j]);
        }
        else if(argv[i][j]==']' || argv[i][j]=='}' || argv[i][j]==')') {
              char x=s.pop();
              if(x==0){
                cout << "Incorrect" << endl;
                break;
              }
              /*How to check????*/
              if((argv[i][j]==']' && x != argv[i][j]=='[') || 
              (argv[i][j]=='}' && x != argv[i][j]=='{') || 
              (argv[i][j]==')' && x != argv[i][j]=='(')){
                cout<<"Incorrect"<<endl;
                break;
              }
          }

        }
      }
      return 0;
    }


