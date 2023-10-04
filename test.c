//ví dụ 1
/*
#include<stdio.h>
int main ()
{
     int a[4];
     int max, min;
    for (int i = 0; i < 4; i++) {
        printf("Day %d: ", i+1);
        scanf("%d", &a[i]) ;
    }
    max=a[0];
    min=a[0];
    for (int i = 1; i < 4; i++) {
        if(max < a[i])
        {
            max = a[i];
        }
        if(min > a[i])
        {
            min = a[i];
        }
    }
    printf("max= %d \n",max);
    printf("min= %d \n",min);
}
*/
# include "stdio.h"
/*
int main ()
{
    int choice;
    int cart[4]={0};
    int count1=0;
    int count2=0;
    int count3=0;
    int count=0;
    int total=0;
    printf("WELCOME TO THE HOUSE!! \n");
    do {
        printf("1.Mi tom             12$\n");
        printf("2.Com                32$\n");
        printf("3.Com rang dua bo    40$\n");
        printf("4.Ket thuc \n");

        printf("Choice 1 -4: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                cart[1]++;
                count1++;
                count++;
                total +=12;
                printf("Ban da them %d mi tom! \n", count1);
                break;
            case 2:
                cart[2]++;
                count2++;
                count++;
                total+=32;
                printf("Ban da them %d com! \n", count2);
                break;
            case 3:
                cart[3]++;
                count3++;
                count++;
                total+= 40;
                printf("Ban da them %d com rang dua bo!! \n", count3);
                break;
            case 4:

                printf("Ban da mua tong la %d san pham \n", count);
                printf("Total your bill is: $%d\n", total);
                printf("Thanks for shopping my house ! \n");
                printf("ket thuc");
                break;
            default:
                printf("Nham roi ban!!!!");
                break;
        }
    }while (choice !=4);
}

*/
/*int main()
{
    int cart[4]={0};
    int choice;
    int count1=0;
    int count2=0;
    int count3=0;
    int count=0;
    int total=0;
    printf("Chao mung ban den voi nha toi!!! \n");
    do {
        printf("1. xoai lac             12$\n");
        printf("2. dua hau lac          15$\n");
        printf("3. kien lac             20$\n");
        printf("4. ket thuc \n");

        printf("Moi ban chon mon 1-4:");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                count1++;
                count++;
                total+=12;
                printf("Ban da them %d xoai lac \n", count1);
                break;
            case 2:
                count2++;
                total+=15;
                count++;
                printf("Ban da them %d dua hau lac \n", count2);
                break;
            case 3:
                count3++;
                count++;
                total+=20;
                printf("Ban da them %d kien lac \n", count3);
                break;
            case 4:
                printf("Ban da mua %d san pham \n", count);
                printf(" Total bill: $%d \n", total);
                printf("Exit! \n");
                break;
            default:
                printf("Ban da sang sever khac!!!");
        }
    } while (choice != 4);
    return 0;
}*/



//int main ()
//{
// float BMI, w,h;
//    printf("w=");
//    scanf("%f",&w);
//    printf("h=");
//    scanf("%f",&h);
//
//    BMI = w/ (h * h);
//    printf("BMI= %f\n ", BMI);
//    if(BMI<=18){
//        printf("Gay ");
//    }else if (BMI>18 && BMI<=24.4)
//    {
//        printf("Binh thuong");
//    }else if (BMI>24.4 && BMI<=29.9)
//    {
//        printf("beo");
//    }else
//    {
//        printf("thua can");
//    }
//    return 0;
//}


int main ()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int ptu;
    printf("Nhap phan tu ban muon tim: \n");
    scanf("%d",&ptu);
    for (int i = 0; i < 10; i++) {  //Duyệt qua các phần tử trong mảng
        if(arr[i]==ptu) //  nếu phần tử i trong mảng mà bằng phần tử mà mình muốn tìm
        {
            printf("Phan tu %d o vi tri %d",ptu,i);
            break;
        }
    }
    if(ptu==10)
    {
        printf("khong tim thay ptu trong mang", ptu);
    }

    return 0;
}
