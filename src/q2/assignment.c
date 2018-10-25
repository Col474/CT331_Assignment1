#include <stdio.h>
#include "linkedList.h"
#include "tests.h"


int main(int arg, char* argc[]){
  runTests();
  
 listElement* l = createEl("Test String (1).", 30);
 
 push(&1,"string1push", 10);
 push(&1,"string2push",20);
 struct listElement*c = pop(1);
 
 int len = length(1);

 
 struct Queue *que = createQueue(); 
 
 
    enQueue(que,"string1", 10); 
    enQueue(que,"string2" 30); 
    enQueue(que,"string3" 40); 
    enQueue(que,"string4" 50); 
    struct listElement*n = deQueue(que); 
	
 
  
  return 0;
}
