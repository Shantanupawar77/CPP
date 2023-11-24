#include<stdio.h>
struct studentDB{
   int roll_n;
   char name[50];
   float spi;
}studentDB[50];
void create(){
    int no;
    printf("Enter the value for n:");
    scanf("%d", &no);
    for(int i= 0; i<no; i++){
        printf("Enter the rollno:");
        scanf("%d", &studentDB[i].roll_n);
    }

    for(int i= 0; i<no; i++){
        printf("Enter the name:");
        scanf("%c", &studentDB[i].name);
    }
    for(int i= 0; i<no; i++){
        printf("Enter the spi:");
        scanf("%f", &studentDB[i].spi);
    }
}
void main()
{
  int studentDB[50];
  int flag=0;
  int ch;
  scanf("%d",&ch);
//   int no;
//   printf("Enter the value for n:");
//   scanf("%d", &no);
  printf("1.Create:\n");
  printf("2.Add:\n");
  printf("3.Delete:\n");
  printf("4.Display:\n");
  printf("5.Exit:\n");
//   char ch;
//   scanf("%c",&ch);
  while(flag == 0){
    switch (ch)
    {
    case 1:
       create();
       
        break;
    // case 2:
    //    add();
       
    //     break;
    
    // case 3:
    //     delete();       
    //     break;
    // case 4:
    //    display();
       
    //     break;
    // case 5:
    //    Exit();
       
    //     break;
    
    }

  }  




}

// struct student{
//    int roll_n;
//    char name[50];
//    float spi;
// }
// studentDB[50];

// void create(){
//     int no;
//     printf("Enter the value for n:");
//     scanf("%d", &no);
//     for(int i= 0; i<no; i++){
//         printf("Enter the rollno:");
//         scanf("%d", &studentDB[i].roll_n);
//     }

//     for(int i= 0; i<no; i++){
//         printf("Enter the name:");
//         scanf("%c", &studentDB[i].name);
//     }
//     for(int i= 0; i<no; i++){
//         printf("Enter the spi:");
//         scanf("%f", &studentDB[i].spi);
//     }
// }
// void display(){
    
    
//     for(int i= 0; i<no; i++){
        
//         printf("%d", studentDB[i].roll_n);
//     }

//     for(int i= 0; i<no; i++){
//         printf("Enter the name:");
//         scanf("%c", &studentDB[i].name);
//     }
//     for(int i= 0; i<no; i++){
//         printf("Enter the spi:");
//         scanf("%f", &studentDB[i].spi);
//     }
// }
