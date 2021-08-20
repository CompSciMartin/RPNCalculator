/*

1. Format the input expression and create an empty array to add those numbers

2. Check for expression is empty or not before looping through.

3. Loop through expression and push the numbers to stack array. Once we are out of numbers, that means we have stepped up on operators, hence pop out the last two numbers and perform corresponding operations

4. Add the result to stack again.

4b. If the stack has more than one number and we are out of operators, we return "ERROR" to the console, else return the result to console

EXAMPLE
3 4 + 2 * 1 +
is equivalent to (3+4) * 2 + 1 = 15

3 4 5 × −
is equivalent to 3 - (4 * 5) = -17

*/

#include <stdio.h>
#include <stdlib.h>
int isEmpty(char userArray[]);
void show(char userArray[]);
char topElement(char userArray[]);


int top = -1;
char userArray[10] = {'3', '4', '+', '2', '*', '1', '+'};
//char userArray[] ={};//for testing empty arrays; remember to change the top variable in the main funct

int main() {
  top = 6;
  show(userArray);
  printf("top element is: %c", topElement(userArray));
  return 0;
}

int isEmpty(char userArray[]){
  if (top==-1) {
    printf("Error: Array is empty \n");
    return 1;
  }else{
    return 0;
  }

}//end of isEmptyfunction; 1 means the array is empty, 0 means its not empty

void show(char userArray[]){
  if (!isEmpty(userArray)){
    for(int i = 0; i<=top; i++){
      printf("%c", userArray[i]);
      printf(" ");
    }
  }else{
      return;
    }
}//end of show function

char topElement(char userArray[]){
  if(!isEmpty(userArray)){
    return userArray[top];
  }else{
    return '\0';
  }
}//end of top stack function




// first thing to do is to define the data structures that will store the userArray
// second thing to do is program the stack sata structure
// stacks have push, pop, isEmpty, isFull, top functions

/*
will be helper arrays



int top(int userArray);
int push(int userArray);
int pop(int UserArray);



int top(int userArray){

  return userArray[-1];
  return 0;
}//top function end, returns the top of the userArray stack

int push(int userArray){
  return 0;
}

int pop(int UserArray){
  return 0;
}



*/
