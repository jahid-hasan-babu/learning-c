#include <stdio.h>
/* int main(){
   int age;
   printf("Enter your age: ");
   scanf("%d", &age);
   if(age > 18){
    printf("Adult \n");
    printf("You can vote \n");
   }else{
    printf("Children \n");
   }
   printf("Thank you \n");
   return 0;
} */


//Ternary operator
/* int main(){
    int age;   
    printf("Enter your age: ");
    scanf("%d", &age);
    age >= 18 ? printf("Adult \n") : printf("Children \n");  
    return 0;
} */

/*int main(){
   int day;
   printf("Enter the day (1-7): ");
   scanf("%d", &day);
   switch(day){
    case 1:
        printf("Monday \n");
        break;
    case 2:
        printf("Tuesday \n");
        break;
    case 3:
        printf("Wednesday \n");
        break;
    case 4:
        printf("Thursday \n");
        break;
    case 5:
        printf("Friday \n");
        break;
    case 6:
        printf("Saturday \n");   
        break;
    case 7:
        printf("Sunday \n");
        break;
    default:
        printf("Invalid day \n");
      }
      return 0;

} */

int main(){
    int Marks;
    printf("Enter your marks: ");
    scanf("%d", &Marks);
    if(Marks <= 30){
      printf("Fail \n");
    }else if (Marks > 100){
      printf("Invalid marks \n");
    }else{
      printf("Pass \n");
    }
    
    return 0;
}