#include<stdio.h>
// int main(){
//     int oldAge = 22;
//     int years = 5;
//     int a, b,c;
//     a = b = c = 4;
//     int newAge = oldAge + years;
//     printf("%d \n", newAge);
//     return 0;
// }

// int main(){
//     int a = 4 * 3 / 6 * 2; // ans 4
//     printf("%d \n", a);
//     return 0;
// }

// int main(){
//     int a = 5 * 2 - 2 *2; //ans 6
//     printf("%d \n", a);
//     return 0;
// }

// int main(){
//     int a = 5 * 2 / 2 * 3; //ans 15
//     printf("%d \n", a);
//     return 0;
// }

// int main(){
//     int a = 5 * (2 / 2 ) * 3; //ans 15
//     printf("%d \n", a);
//     return 0;
// }

// int main(){
//     int a = 5 + 2 / 2  * 3; //ans 8
//     printf("%d \n", a);
//     return 0;
// }

// int main(){
//     printf("%d \n", 4 == 4); //output 1
//     return 0;
// }

// int main(){
//     printf("%d \n", 4 != 4); //output 0
//     printf("%d \n", 4 != 3); //output 1
//     return 0;
// }

// int main(){
//     int a = 4;
//     int b = 3;
//     a += b;
//     a -= b;
//     printf("%d \n", 4 > 3 && 5 > 7); //output 0
//     printf("%d \n", 4 > 3 || 5 > 7); //output 1 
//     printf("%d \n", !((4 > 3) && (3 > 4))) ; //output 1
//     return 0;
// }
///even or odd
// int main(){
//     int x;
//     printf("Enter a number: ");
//     scanf("%d", &x);
//     printf("%d \n", x % 2 == 0 );
//     return 0;
// }

// int main(){
//     int a = 8 ^ 8; // valid
//     int x; int y = x; // valid
//     int x, y = x; //invalid
//     char stars = '**'; //invalid
//     return 0;
// }

// average of three numbers
// int main(){
//     int a, b, c;
//     printf("Enter the first number: ");
//     scanf("%d", &a);
//     printf("Enter the second number: ");
//     scanf("%d", &b);
//     printf("Enter the third number: ");
//     scanf("%d", &c);
//     printf("Average of three number is %d", a, b, c, (a + b + c) / 3);
//     return 0;
// }

// Check given character is digit or not    
// int main(){
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c", &ch);
//     printf("%d", ch >= 0 && ch <= 9);
//     return 0;
// }

//Write a program to print the smallest number of two.
int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("%d", a < b ? a : b);
    return 0;
}