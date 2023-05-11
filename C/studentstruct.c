#include<stdio.h>
struct student
{
    char name[50];
    int marks[5];
    float percentage;
};
int main()
{
    int n;
    printf("How many students : ");
    scanf("%d",&n);
    

    struct student st[n];
//Taking Data Input
    for(int i=0;i<n;i++)
    {
        printf("Name of Student %d : ",i+1);
        getchar();
        fgets(st[i].name,50,stdin);
        for(int j=0;j<5;j++)
        {
            printf("Marks in Subject %d : ",j+1);
            scanf("%d",&st[i].marks[j]);
        }
    }

    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<5;j++)
        {
            sum+=st[i].marks[j];
        }
        st[i].percentage=sum/5.0;
    }


    float avg=0;
    for(int i=0;i<n;i++)
    {
        avg+=st[i].percentage;
    }
    avg/=n;
    printf("Overall Average score : %f\nStudents above average are : \n",avg); 
    for(int i=0;i<n;i++)
    {
        if(st[i].percentage>avg)
        {
            printf("%s\n",st[i].name);
        }
    }

}