#include <stdio.h>
#include <stdlib.h>
int main()
{
    int index = 0, i = 0, n,*marks,res;
    marks = (int*)malloc(sizeof(int));
    if (marks == NULL)
        {
            printf("error");
    }
    else
        {
            printf("\n marks = %pc\n",marks);
        do
            {
            printf("\n Enter Marks\n");
            scanf("%d", &marks[index]);
            printf("added elements ");
            scanf("%d", &res);
        if (res== 1) {
                index++;
                marks = (int*)realloc(marks,(index + 1)* sizeof(int));
                if (marks == NULL) {
                    printf("error");
                }
                else
                    {
                        printf("\n base address of marks are:%pc",marks);
                }
            }
        }
        while (res== 1);
        for (i = 0; i <= index; i++) {
            printf("marks of students %d are: %d\n ", i,marks[i]);
        }
        free(marks);
    }
    return 0;
}
