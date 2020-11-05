//Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
//An input string is valid if:
//Open brackets must be closed by the same type of brackets.
//Open brackets must be closed in the correct order.

#include <stdio.h>

int main()
{

   char string[20];
   int final=0;
   int i;
   printf("Enter string:");
   scanf("%s", string);
   printf("%s", string);
   for (i = 0; i < 100; i++)
   {
      if (string[i]== '\0')
         break;
      else if (string[i]=='(' && string[i+1]==')'){
         final = 1;
         i++;
      }
      else if (string[i]=='[' && string[i+1]==']'){
         final = 1;
         i++;
      }
      else if (string[i]=='{' && string[i+1]=='}'){
         final = 1;
         i++;
      }
      else{
        final = 0;
        break;
      }

   }
    printf("%d", final);
   if (!final)
      printf("false");
   else
      printf("true");

}


// Ex: ()({})[]

//if (char == '(')
//    stack.push(')')

// Stack: ) <- Top

// Queue: 