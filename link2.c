#include <stdio.h>
#include <stdlib.h>
void main()
{
  struct node
  {
    int data;
    struct node *next;
  };
  struct node *head =NULL,*pos=NULL,*tail =NULL;
  int ch,entry;
  while(1)
  {
      printf("\n 1.Insert \n 2.Display \n 3.Count \n 4.Exit");
      printf("\nEnter your choice\n");
      scanf("%d",&ch);
      switch(ch)
      {
        case 1:
        {
          printf("\n Enter Data ");
          scanf("%d",&entry);
          if (head==NULL)
          {
            head=(struct node*)malloc(sizeof(struct node));
            head->data=entry;
            pos=head;
            tail=head;
          }
          else
          {
            tail->next=(struct node*)malloc(sizeof(struct node));
            tail=tail->next;
            tail->data=entry;
          }
          break;
       }
       case 2:
       {
         pos=head;
         printf("\n Elements are\n");
         while (pos!=NULL)
         {
            printf("%d",pos->data);
            pos=pos->next;
            break;
         }
       }
       case 3:
       {
         pos=head;
         int i=0;
         while (pos!=NULL)
         {
            i++;
            pos=pos->next;
         }
         printf("\nThe count = %d",i);
         break;
       }
       case 4:
       {
         printf("\n Goodbye");
         exit(0);
       }
      }
  }
}  

