#ifndef STUDENT_H_
#define STUDENT_H_
typedef struct student
{

    char name[20];
    int age;
    char grade;
}std_t;
typedef struct func
{
    int x;
    int y;

}std_o;

void student_print(std_t s);
void studentArrprint(std_t course[],int x);
void student_Refprint(std_t *ps);
std_o multandsum(int x,int y);
int linear_search(int *arr,int x,int y);
int bi_search(int *arr,int x,int y);


#endif // STUDENT_H_




