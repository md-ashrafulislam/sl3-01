#include <stdio.h>
#include <math.h>    
int main() {
float X,Y;
scanf("%f%f",&X, &Y);
 if(X == 0.0 && Y == 0.0){
     printf("Origem\n");
}else if(X == 0.0 && Y > 0){
    printf("Eixo Y\n");
}else if(X == 0.0 && Y < 0.0){
    printf("Eixo Y\n");
}else if(X < 0.0 && Y == 0.0){
    printf("Eixo X\n");
}else if(X > 0.0 && Y == 0.0){
    printf("Eixo X\n");
}else if(X > 0.0 && Y > 0.0){
    printf("Q1\n");
} else if(X < 0.0 && Y > 0.0){
    printf("Q2\n");
} else if(X < 0.0 && Y < 0.0){
    printf("Q3\n");
} else if(X > 0.0 && Y < 0.0){
    printf("Q4\n");
}
/* int arr1[100];
    // int n, i, j, tmp;
	
	
       /* printf("\n\nsort elements of array in ascending order :\n ");
       printf("----------------------------------------------\n");	

    printf("Input the size of array : ");
    scanf("%d", &n);

       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr1[j] <arr1[i])
            {
                tmp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = tmp;
            }
        }
    }
    printf("\nElements of array in sorted ascending order:\n");
    for(i=0; i<n; i++)
    {
        printf("%d  ", arr1[i]);
    }
	        printf("\n\n");
} */ 


     return 0;
}