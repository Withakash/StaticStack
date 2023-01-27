#include"StaticStack.c"
int main()
{
  int choice;
  item_type item;
  stack s;
  init(&s);
  while(1)
  {
  	  clrscr();
     puts("1. PUSH");
     puts("2. POP");
     puts("3. PEEK");
     puts("4. SIZE");
     puts("5. EXIT");
     printf("Enter your choice: ");
     scanf("%d",&choice);
     switch(choice)
     {
       case 1:
	 printf("enter item: ");
	 scanf("%d",&item);
	 push(&s,item);
	 break;
       case 2:
	 item = pop(&s);
	 if(item!=0)
	   printf("%d is popped\n",item);
	 break;
       case 3:
	 item = peek(&s);
	 if(item!=0)
	   printf("%d is top item\n",item);
	 break;
       case 4:
	 printf("%d item found\n",size(s.top));
	 break;
       case 5:
	   return 0;
       default:
	 puts("Invalid operation");
     }
     getch();
  }
  return 0;
}







