#include <stdio.h>

int main(){

   /*  int a;

    scanf("%d", &a);
    printf("The number is: %d\n", &a);
    printf("memory size is: %d\n", sizeof(a)); */

     /* int A, B, X;
    scanf("%d%d", &A, &B);
    
     X = A + B;
    printf("X = %d\n", X); */

     /* double r;

    scanf("%lf", &r);
    double a= PI * r* r;
    printf("A=%.4lf\n", a); 

    /* int a,b,PROD;
    scanf("%d%d", &a,&b);
    PROD= a * b;
    printf("PROD = %d", PROD); 

    /* float a,b,MEDIA;
    scanf("%f%f", &a,&b);
    MEDIA= (a+b)/2.0;
    printf("MEDIA = %.5f", MEDIA); */




int arr[100]; // 0---999
int length = sizeof(arr) / 4;
int position[100];
int positionSize = 0;
int indexNumber;
int value;



while (1){
    int isFound=0;
    //index from user
    printf("Enter the index number : ");
    scanf("%d", &indexNumber);

    //no validation
    if(indexNumber < 0){
        printf("Breaking for loop\n");
        break; // breaking for loop
    }
    if(indexNumber >= 100){
        printf("Array index out of bound\n");
        continue; // run loop from start
    }

    //value from user

   
 printf("Enter value : ");
     scanf("%d", &value);
    

    for(int i = 0; i <= positionSize; i++){
        
    if(indexNumber==arr[i]){
        printf("Index already exist==> value %d please enter the new index number\n", indexNumber);
       
        isFound++;
        break;
    }
   } 
   if(isFound) continue;
    
    
        arr[indexNumber] = value;
        position[positionSize] = indexNumber;
        positionSize++;
      
    
     
    
    
    
    // arr[indexNumber]  = positionSize;
    // position[positionSize] = value;
    // indexNumber == positionSize;
   
}

for (int i = 0; i < positionSize; i++){
    printf("index %d <-> value %d\n", position[i], arr[position[i]]);
}














    

    return 0;
} 

