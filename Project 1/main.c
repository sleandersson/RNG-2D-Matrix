#include "Egetbib.h"
/*Staffan Leandersson, "s.leandersson@live.se" , https://www.linkedin.com/in/staffanleandersson81/ */
int Sort(int ett[10][10]);
int Median(int ett[10][10]);
int Calc(int ett[10][10]);
int Hitta(int ett[10][10]);

int main(int argc, const char *argv[]);

int A, B, i, j, Sant, borjan, sum, search;

int main(int argc, const char *argv[])
{
    SetConsoleOutputCP(1252); //För att få min dator att visa å,ä och ö:n.
    int val, ett[10][10],tva[10][10];

borjan:

    printf("\n\nPlease make a choice;\n\n");
    printf("\t0. Exit program.\n");
    printf("\t1. Generate random numbers.\n");
    printf("\t2. Sort table and print on screen.\n");
    printf("\t3. Calculate and print average, mean, max- and min values.\n");
    printf("\t4. Find a numbers position in the table.\n");
    printf("\t5. Show row-sums, column-sums and total-sum.\n");
    printf("\t6. Print the unsorted array.\n");
    printf("\t7. Check value 'True'.\n\n");
    scanf("%i", &val);

        if(val > 1 && Sant == 0)
        {
        system("cls");
        printf("\n\nYou need to generate numbers! i.e. choice no.1.\n\n");
        goto borjan;
        }

        if(val==0)
        {
        system("cls");
        printf("\nUser has chosen to terminate session.\n");
        return 0;
        }

        if(val==1)
        {
        system("cls");
        printf("\nThe array is beeing generated:\n\n");
        srand(time(NULL));
        for(A=0;A<10;A++)
        {
        for(B=0;B<10;B++)
            {
            printf("%d  ", ett[A][B]=(rand()%(900-100)+100));
            }
        printf("\n\n");
        }
        printf("Array created.\n");
        memcpy(tva, ett, sizeof(ett));
        Sant=1;
        goto borjan;
        }

        if (val==1 && Sant==1)
        {
        printf("You have already generated an array!\n\n");
        goto borjan;
        }

        if(val==2)
        {
        system("cls");
        Sort(ett);
        goto borjan;
        }

        if(val==3)
        {
        system("cls");
        Calc(ett);
        goto borjan;
        }

        if(val==4)
        {
        system("cls");
        Hitta(ett);
        goto borjan;
        }

        if(val==5)
        {
        system("cls");
        Median(ett);
        goto borjan;
        }

        if(val==6)
        {
        system("cls");
        printf("\nThis is what the unsorted array looks like: \n\n");
        for(A=0;A<10;A++)
            {
            for(B=0;B<10;B++)
                {
                printf("%d  ", tva[A][B]);
                }
            printf("\n\n");
            }
        goto borjan;
        }

        if(val==7)
        {
        system("cls");
        printf("The value of 'True' is %i \n\n", Sant);
        goto borjan;
        }

        if(val > 7)
        {
        system("cls");
        printf("\n\nYou can't choose anything higher than a seven(7)! Please, try again.\n\n");
        goto borjan;
        }
    return 0;
}

int Median(int ett[10][10]){
    int r, c, i, j, rsum[10],csum[10];

    sum = 0;
     // Row-sum
    for(i=0;i<10;i++)
    {
    rsum[i]=0;
    for(j=0;j<10;j++)
    rsum[i]=rsum[i]+ett[i][j];
    }

    // Column-sum
    for(i=0;i<10;i++)
    {
    csum[i]=0;
    for(j=0;j<10;j++)
    csum[i]=csum[i]+ett[j][i];
    }

    printf("The sums of the rows and columns are :\n\n");
    for(i=0;i<10;i++)
    {
    for(j=0;j<10;j++)
    printf("%d  ",ett[i][j]);
    printf("%d",rsum[i]);
    printf("\n");
    }
    printf("\n");
    for(j=0;j<10;j++)
    {
    printf("%d ",csum[j]);
    }

    int arr2[100], k=0,min ,max, med;

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
        arr2[k]=ett[i][j];
        k++;
        }
    }
    for(i=0;i<100;i++)
    for(i=0; i<100; i++)
    {
    sum = sum + arr2[i];
    }
    for(j=0;j<100;j++)
    for(j=0; j<100; j++)
    {
    sum = sum + arr2[j];
    }
    for(j=10;j<11;j++)
    {
    printf("%d ", sum);
    }
    printf("\n\n");

return 1; //wut?
}

int Sort(int ett[10][10]) //Bubblesort
{
    int temp, t, i, j;

    printf("\nThis is the array sorted:");

    for(t=1; t<(10*10); t++)
    {
        for(i=0; i<10; i++)
        {
            for(j=0; j<10-1; j++)
            {
                if (ett[i][j]>ett[i][j+1])
                {
                temp=ett[i][j];
                ett[i][j]=ett[i][j+1];
                ett[i][j+1]=temp;
                }
            }
        }
        for(i=0; i<10-1; i++)
        {
            if (ett[i][10-1]>ett[i+1][0])
            {
            temp=ett[i][10-1];
            ett[i][10-1]=ett[i+1][0];
            ett[i+1][0]=temp;
            }
        }
    }
    for(i=0; i<10; i++)
    {
    printf("\n\n");
    for(j=0; j<10; j++)
    printf("%d  ", ett[i][j]);
    }
    return (ett[i][j]=ett[10][10]);
}


int Calc(int ett[10][10]){
    int arrmin(int a[],int num_elements);
    int arrmax(int a[], int num_elements);
    float arraver(int a[],int num_elements);
    float arrmed(int a[], int num_elements);

    int arr2[100], i ,j ,k=0 ,c ,min ,max, med;
    float avg;

	printf("\nThe unsorted array :\n\n");

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
        printf("%d  ",ett[i][j]);
        arr2[k]=ett[i][j];
        k++;
        }
    printf("\n\n");
    }
    for(i=0;i<100;i++)

    max = arrmax(arr2,100);
    printf("\nMax-value is: %d\n", max);
    min = arrmin(arr2,100);
    printf("\nMin-value is: %d\n", min);
    avg = arraver(arr2,100);
    printf("\nAverage-value is: %.2f\n", avg);
    med = arrmed(arr2,100);
    printf("\nThe mean is: %d\n", med);
}

int Hitta(int ett[10][10]){

    int flag = 0;

    printf("\n\tWhich is the number you want to look for?\n\n\t");
    scanf("%i", &search);
    system("cls");

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (ett[i][j] == search)
            {
            printf("%i exists, and can be found at row %d and column %d.\n\n", search, i+1, j+1);
            flag = 1;
            }
        }
    }
    if (flag == 0)
    printf("%i is not in the array.\n", search);
}

int arrmax(int a[], int num_elements)
{
   int i, max;
   max = a[0];
   for (i=1; i<num_elements; i++)
   {
        if (a[i]>max)
        {
        max=a[i];
        }
   }
   return(max);
}

int arrmin(int a[], int num_elements)
{
   int i, min;
   min = a[0];
   for (i=1; i<num_elements; i++)
   {
        if (a[i]<min)
        {
        min=a[i];
        }
   }
   return(min);
}

float arraver(int a[], int num_elements)
{
   int sum,i;
   float avg;
   sum=0;
   avg=0;

   for (i=0; i<num_elements;i++)
    {
    sum=sum+a[i];
    avg=(float)sum/(i+1);
    }
   return(avg);
}

float arrmed(int a[], int num_elements){
    float med=0;

    if(num_elements%2 == 0)
    med = (a[(num_elements-1)/2] + a[num_elements/2])/2.0;
    else
    med = a[num_elements/2];

    return med;
}
