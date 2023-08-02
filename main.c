#include <stdio.h>
#include <stdlib.h>
#include "student.h"

int main()
{
    int y;
    int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int x=sizeof(a)/sizeof(int);


    while(1)
    {

    printf("enter the numbers of the number\n");
    scanf("%d",&y);
    //int ind = linear_search(a,x,y);
    int ind = bi_search(a,x,y);
    if(ind>=0)
    printf("\n the index of the number is %d \n",ind);

    }
//version 2
//ver2.1











    /*
    std_t course[20]={{"Tarek",25,'A'},{"Ali",35,'A'},{"Ahmed",80,'B'}};
    std_t s1={"Ali",35,'A'};
    std_t s2,s3,s4={"Ahmed",80,'B'};
    s3=s1;
    int a=5; int b=6;
    std_o s10;
    s10=multandsum(a,b);
    //printf("the mult is %d and the sum is %d",s10.x,s10.y);
    printf("the size is %d",sizeof(course));
    //student_print(s1);
    //student_print(s4);
    //student_print(s3);
    //student_print(cource[0]);
    //studentArrprint(course,3);
    //student_Refprint(&s1);*/

    return 0;
}
