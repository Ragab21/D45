#include"student.h"

void student_print(std_t s)
{
    printf("The name is %s\n",s.name);
    printf("The age is %d\n",s.age);
    printf("The grade is %c\n\n",s.grade);
}

    void studentArrprint(std_t *course,int x)
    {
        int i=0;
        for(i;i<x;i++)
        {
            printf("The name is %s\n",course[i].name);
            printf("The age is %d\n",course[i].age);
            printf("The grade is %c\n\n",course[i].grade);
        }
    }
void student_Refprint(std_t *ps)
{
    printf("The name is %s\n",ps->name);
    printf("The age is %d\n",ps->age);
    printf("The grade is %c\n\n",ps->grade);
}
std_o multandsum(int x,int y)
{
    std_o s1;
    s1.x=x*y;
    s1.y=x+y;
    return s1;
}
int linear_search(int arr[],int x,int y)
{
    for(int i=0;i<x;i++)
    {
        if(y==arr[i])
            return i;
    }
    printf("the number is not found");
    return -1;
}
int bi_search(int *arr,int x,int y)
{
    int first=0;
    int last=x;
    int mid=(first+last)/2;
    for(int i=0;i<x;i++)
    {
        if(y==arr[mid])
            return mid;
        else if(y>arr[mid])
        {
            first=mid+1;
        }
        else
            last=mid-1;
        mid=(first+last)/2;
    }
    printf("\nnumber is not found\n");
    return -1;
}
