#include<stdio.h>
int main()
{
int roll,mark1,mark2,mark3,mark4,mark5;
int total,choice;
float average;
char name[50];
char grade;

printf("STUDENT MARKS MANAGEMENT SYSTEM \n");
printf("-------------------------------------\n");
printf("1.enter student details\n");
printf("2.calculate Result\n");
printf("3.Display Result\n");
printf("4.exit\n");

    printf("Enter your choice:");
        scanf("%d",&choice);
    printf("Enter Roll number:");
        scanf("%d",&roll);
    printf("Enter student Name:");
        scanf("%s",&name);


    printf("Enter subject mark 1:");
        scanf("%d",& mark1);
    printf("Enter subject mark 2:");
        scanf("%d",& mark2);
    printf("Enter subject mark 3:");
        scanf("%d",& mark3);
    printf("Enter subject mark 4:");
        scanf("%d",& mark4);
    printf("Enter subject mark 5:");
        scanf("%d",& mark5);

    total=mark1+mark2+mark3+mark4+mark5;
    average=total/5;
    if(average>=90)
    {
     grade='A';
    }

    else if(average>=80)
    {
     grade='B';
    }
    else if(average>=70)
    {
     grade='c';
    }
    else if(average>=60)
    {
    grade='D';
    }
    else
    {
        printf("FAIL");
    }


    
printf("STUDENT RESULT\n");
printf("-----------------------\n");
printf("Roll number:%d\n",roll);
printf("Name:%s\n",name);
printf("total:%d\n",total);
printf("average:%f\n",average);
printf("grade:%c\n",grade);
    if (average>=50)
        printf("result:pass\n");
        
   else
        printf("resut: fail\n");
    
    return 0;
}
