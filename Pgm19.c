#include <stdio.h>
struct student
{
    char regno[20];
    char name[50];
    float marks;
};
 int main(void)
 {
    struct student s[50];
    int n,i;
    printf("Enter number of students(1-50):");
    scanf("%d",&n);
    if(n<1||n>50){
        printf("invalid number of students.\n");
        return 0;
    }
    for (i=0;i<n;i++){
        printf("\nstudent %d\n",i+1);
        printf("regiter number:");
        scanf("%195",s[i].regno);
        printf("Name:");
        scanf("%49[^\n]",s[i].name);
        printf("Marks:");
        scanf("%f",&s[i].marks);
    }
    printf("/n%-20s%-25s%-%s\n","Register No.","name","Marks");
    for(i=0;i<n;i++)
    printf("%-20s%-25s%2f\n",s[i].regno,s[i].name,s[i].marks);
    return 0;
 }