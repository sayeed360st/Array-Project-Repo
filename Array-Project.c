#include<stdio.h>
#define MAX_LENGTH 100
int main()
{
    system("cls");
    int data[MAX_LENGTH];
    int length=0;
    int input;
    int value,index;
    int item;
    int max,min,sum=0,avg;
    do{
    printf("Menu: \n");
    printf("--------------------- \n");
    printf("0.Exit\n");
    printf("1.Add\n");
    printf("2.Insert\n");
    printf("3.Edit\n");
    printf("4.Delete\n");
    printf("5.Display\n");
    printf("6.clear\n");
    printf("7.Binary search\n");
    printf("8.Linear search\n");
    printf("9.Sorting Insertion\n");
    printf("10.Sorting Selection\n");
    printf("11.Bubble Sorting\n");
    printf("12.Array Maximum\n");
    printf("13.Array Minimum\n");
    printf("14.Array sum\n");
    printf("15.Array Average\n");
    printf("--------------------- \n");
    printf("Enter a Menu:- ");
    scanf("%d",&input);
    system("cls");
    printf("--------Result-------\n");
    switch(input)
    {
        case 0:
        // just terminate
        break;
        case 1:
        // Add operation 
        printf("Enter an integer value=");
        scanf("%d",&value);
        data[length]=value;
        printf("%d inserted at index %d\n",value,length);
        length++;
        break;
        case 2:
        // insert operation
        printf("Enter an integer value: ");
        scanf("%d",&value);
        printf("Enter an index between 0-%d: ",length);
        scanf("%d",&index);
        for(int i=length;i>index;i--)
        {
            data[i]=data[i-1];
        }
        data[index]=value;
        length++;
        printf("New value inserted at index %d\n",value,index);
        break;
        case 3:
        // Edit operation
        printf("Enter an index between 0-%d: ",length);
        scanf("%d",&index);
         printf("Enter a new integer value: ");
        scanf("%d",&value);
        data[index]=value;
        printf("%d Updated at Index=%d\n",value,index);
        break;
        case 4:
        // delete operation
        printf("Enter an index between 0-%d: ",length);
        scanf("%d",&index);
        int dv=data[index];
        for(int i=index;i<length;i++)
        {
            data[i]=data[i+1];
        }
        data[length]=0;
        length--;

        printf("%d Delated at Index=%d\n",dv,index);
        break;
        case 5:
        if(length==0)
        {
            printf("There is no data\n");
        }
        else
        {
        // data display 
        printf("Data: ");
        for(int i=0;i<length;i++)
        {
            printf("%d ",data[i]);
        }
        printf("\n");
        }
        break; 
        case 6:
        // data clear
        for(int i=0;i<length;i++)
        {
            data[i]=0;
        }
        length=0;
        printf("Data clear\n");
        break; 
        case 7:
        // Binary Search
        printf("Enter an integer value=");
        scanf("%d",&value);
        int left,right,middle;
        left=0;
        right=length;
        while(left<=right)
        {
        middle=(left+right)/2;
        if(data[middle]==value)
        {
        printf("item found at index=%d\n",middle);
        return 0;
        }
        else if(data[middle]<value)
       {
        left=middle+1;
       }
       else
       {
        right=middle-1;
       }
       }
       printf("Item not found");
       break;
       case 8:
       // Linear Search
       printf("Enter an integer value");
       scanf("%d",&value);
       for(int i=0;i<length;i++)
       {
        if(data[i]==value)
        {
            printf("Item found at inedx: %d\n",i);
            return;
        }
       }
       printf("Item not found\n");
       break;
       case 9:
       // Sorting Insertion
       for(int i=0;i<length;i++)
       {
        value=data[i];
        int hole=i;
        while(hole>0 && data[hole-1]>value)
        {
            data[hole]=data[hole-1];
            hole--;
        }
        data[hole]=value;
       }
       printf("Insertion Sorted Array=\n\n");
       for(int i=0;i<length;i++)
       {
        printf("%d ",data[i]);
       }
       printf("\n\n");
       break;
       case 10:
       //Sorting Selection
       for(int i=0;i<length;i++)
       {
        int min_index = i;
        for(int j=i+1;j<length;j++)
        {
            if(data[j]<data[min_index])
            {
                min_index=j;
            }
        }
        // swap two number
        int temp=data[i];
        data[i]=data[min_index];
        data[min_index]=temp;
        printf("Selection Sorted Array=\n");
        for(i=0;i<length;i++)
        {
            printf("%d ",data[i]);
        }
        printf("\n\n");
        break;
       }
       case 11:
       // Sorting Bubble
       for(int i=0;i<length;i++)
       {
        for(int j=0;j<length;j++)
        {
            if(data[j] > data[j+1])
            {
                int temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
       }
       printf("\nBubble Sorted Array=\n");
       for(int i=0;i<length;i++)
       {
        printf("%d ",data[i]);
       }
       printf("\n");
       break;
       case 12:
       // Array maximum
       max=data[0];
       for(int i=0;i<length;i++)
       {
        if(max < data[i])
        {
            max=data[i];
        }
       }
       printf("Maximum=%d\n",max);
       break;
       case 13:
       // Array Minimum
       min=data[0];
       for(int i=0;i<length;i++)
       {
        if(min >data[i])
        {
            min=data[i];
        }
       }
       printf("Minimum=%d\n",min);
       break;
       case 14:
       for(int i=0;i<length;i++)
       {
        sum=sum+data[i];
       }
       printf("The sum is=%d",sum);
       break;
       case 15:
       for(int i=0;i<length;i++)
       {
        sum=sum+data[i];
       }
       printf("The average is=%.2f",(float)sum/length);
       default:
        printf("Invalid Value\n");
        break;
    }
       printf("--------Result End-------\n\n");
       }while(input != 0);
       system("cls");
       printf("Thanks for using Application.Good Bye\n");
}