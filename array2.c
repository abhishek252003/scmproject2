//Declaration of array
//data type array_name[size of array];
//storage in byte= integer will store 4 byte so 4*60 =240 byte will locate.
/*what is array?
collection of same type of element 
int [2*2]it is  correct
int a[-2]it is wrong


#include <stdio.h>
int main(){
    int a[0];
}

initilisation of array
at compile time:
int a[5]={1,2,3,4,5};
int a []={1,2,3,4,5,6,7};
int a[5]=0 all element will 0.
int a[4]={};error


AT RUN TIME:
int i;
int a[5];
printf("enter the element of array:");
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);

}

MEMORY ALLOCATION OF ARRAY:
size of array= size-1.
array always start from zero.

#include <stdio.h>
int main()
{
    int i;
    int a[5];
    printf("enter element:\n");
    for (i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for (i=4;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
}

#include <stdio.h>
int main()
{
    int i,sum=0;
    float avg;
    int a[5];
    printf("enter the number of element:\n");
    for (i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/5;
    printf("sum of element =%d\n",sum);
    printf("avg of their sum=%f",avg);
}

#include <stdio.h>
int main()
{
    int i,odd=0,even=0;
    int a[10];
    printf("enter number of element:\n");
    for (i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if (a[i]%2==0)
        {
            even++;
        }
        else
            odd++;
       
    }
    printf("total number of even=%d\n",even);
    printf("total number of odd =%d",odd);
    
    
} 

#include <stdio.h>
int main()
{
    int i;
    int arr1[5],arr2[5],sumarr[5];
    printf("enter element in array:\n");
    for (i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("\nenter element in array:\n");
    for (i=0;i<5;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for (i=0;i<5;i++)
    {
        sumarr[i]=arr1[i]+arr2[i];
        printf("sum of array at index %d is %d\n",i,sumarr[i]);
    }
   
}
#include <stdio.h>
int main(){
    int i;
    int a[5],b[5],c[5];
    printf("enter the element in first array:\n");
    for (i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element in second array:\n");
    for (i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    for (i=0;i<5;i++)
    {
        c[i]=a[i]+b[i];
        printf("sum of element of both array at index %d is %d\n",i,c[i]);
    }
}

#include <stdio.h>
int main(){
    int i,n;
  
    printf("enter number you want array:\n");
    scanf("%d",&n);
    int a[n];
   
    printf("enter element:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        printf("element = %d\n",a[i]);
    }

}

#include<stdio.h>
int main(){
    int i,n,gen;
    printf("enter the number of element you want the size:\n");
    scanf("%d",&n);
    int a[n];
    printf("enter element :\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter gender :\n");
    scanf("%d",&gen);
    int sum=0,add=0;
    if (gen==1)
    {
        for (i=0;i<n;i=i+2)
        {
            sum= sum+a[i];
        
            
        }
        printf("%d",sum);
    }
    else{
        for (i=1;i<n;i=i+2)
        {
            add=add+a[i];
            
        }
        printf("%d",add);
    }
   
    
}
#include <stdio.h>
int main (){
    int i,n,s,ori;
    printf("enter the size of array:\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the element in array:\n");
   
    for (i=0;i<n;i++)
    {
       
        scanf("%d",&a[i]);
    }
    printf("enter the element you want to search in array:\n");
    scanf("%d",&s);
    
    for (i=0;i<n;i++)
    {
        if (i==s)
        {
            ori=s;
            break;
            
        }
        printf("%d is the searched element at index %d",i,a[i]);
         
    }
}

insert an element in arrray:

#include <stdio.h>
int main(){ 
    int i,n,num,pos;
    printf("enter the number you want array:");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    {
        printf("enter an element in array: ");
        scanf("%d",&a[i]);
    }
    printf("enter at which position you insert element");
    scanf("%d",&pos);
    printf("enter an element you want to insert:");
    scanf("%d",&num);
   
    for (i=n;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=num;
    n++;
    printf("array after insertion:\n");
    for (i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}

delete  an array;

#include <stdio.h>
int main(){
    int i,n,index,num,j;
    printf("Enter the size of an array:\n");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    {
        printf("Enter an element in array: ");
        scanf("%d",&a[i]);
    }
    index=n-1;
    printf("enter element you wnat to delete:");
    scanf("%d",&num);
    for (i=0;i<=index;i++)
    {
        if (a[i]==num)
        {
            for (j=i+1;j<=index;j++)
            {
                a[j-1]=a[j];
            }
            
            
            
        }
        
        
    }
    
    printf("array after deletion:\n");
    for (i=0;i<index;i++)
    {
        printf("%d\n",a[i]);
    }
    

}

#include <stdio.h>  
#include <conio.h>  
  
int main ()  
{  
    // declaration of the int type variable  
    int arr[50];  
    int pos, i, num; // declare int type variable  
    printf (" \n Enter the number of elements in an array: \n ");  
    scanf (" %d", &num);  
      
    printf (" \n Enter %d elements in array: \n ", num);  
      
    // use for loop to insert elements one by one in array  
    for (i = 0; i < num; i++ )  
    {   printf (" arr[%d] = ", i);  
        scanf (" %d", &arr[i]);  
    }  
      
    // enter the position of the element to be deleted  
    printf( " Define the position of the array element where you want to delete: \n ");  
    scanf (" %d", &pos);  
      
    // check whether the deletion is possible or not  
    if (pos >= num+1)  
    {  
        printf (" \n Deletion is not possible in the array.");  
    }  
    else  
    {  
        // use for loop to delete the element and update the index  
        for (i = pos - 1; i < num -1; i++)  
        {  
            arr[i] = arr[i+1]; // assign arr[i+1] to arr[i]  
        }  
          
        printf (" \n The resultant array is: \n");  
          
        // display the final array  
        for (i = 0; i< num - 1; i++)  
        {  
            printf (" arr[%d] = ", i);  
            printf (" %d \n", arr[i]);  
        }  
    }  
    return 0;  
}  

sorting in array

#include <stdio.h>
int main(){
    int i,n,j,b;
    printf("enter size of element :");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    {
        printf("enter an element in array:");
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
       for (j=i+1;j<n;j++)
       {
            if (a[i]>a[j])
            {
                b =  a[i];
                a[i] = a[j];
                a[j] = b;
            }
       }
        
        
    }
    for (i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}

Q write a program to insert an element from an array

#include <stdio.h>
int main(){
    int i,n,j,pos,num;
    printf("enter size of element :");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    {
        printf("enter an element in array:");
        scanf("%d",&a[i]);
    }
    printf("enter at what position you want insertion:");
    scanf("%d",&pos);
    printf("enter an elemet you want to insert:");
    scanf("%d",&num);
    for (i=n;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=num;
    n++;
    printf("array after insertion:\n");
    for (i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}
sorting of an array.*/


#include <stdio.h>
int main(){
    int i,n,j,b;
    printf("enter size of element :");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    {
        printf("enter an element in array:");
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (a[i]>a[j])
            {
                b=a[i];
                a[i]=a[j];
                a[j]=b;

            }
        }
    }
    printf("array after sorting:\n");
    for (i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }

    
}













