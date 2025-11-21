#include <stdio.h>
#include <math.h>
void chinhphuong() 
{
    int x; 
    int i;
    int phai = 0; 
    printf("Nhap so nguyen duong: ");
    scanf("%d", &x);
    if (x < 0) 
    {
        printf("%d khong phai la so chinh phuong\n", x);
        return; 
    }
    if (x == 0 || x == 1) {
        printf("%d la so chinh phuong.\n", x);
        return;
    }
    for (i = 1; i * i <= x; i++) 
    {
        if (i * i == x) 
        {
            phai = 1; 
            break;               

        }
    }
    if (phai)
     {
        printf("%d la so chinh phuong.\n", x);
     } 
    else
     {
        printf("%d khong phai la so chinh phuong.\n", x);
     }
}
int main()
{
   //BÀI 1: TÍNH TRUNG BÌNH TỔNG CỦA CÁC SỐ TỰ NHIÊN CHIA HẾT CHO 2
   /*int min,max,i=min;
   printf("Nhap min:");
   scanf("%d",&min);
   printf("Nhap max:");
   scanf("%d",&max);
   float tong=0,biendem=0,trungbinh=0;
   while(i<=max)
   {
    if(i%2==0)
    {
        tong+=i;
        biendem++;
    }
    i++;
    trungbinh=tong/biendem;
   }
   printf("Trung binh tong la %2.f ",trungbinh);
   */
 //Bài 2: XÁC ĐỊNH SỐ NGUYÊN TỐ
   /* int x,count=0,i;
    printf("Nhap so nguyen x");
    scanf("%d",&x);
    if (x<=1)
    {
        printf("%d khong phai so nguyen to",x);
        
    }
    for(i=2;i<x;i++)
    {
        if(x%i==0)      
        {
            count++;
            break;
        }
    }
        if(count==0)
        {
            printf("%d la so nguyen to\n",x);
        }
        else
        {
            printf("%d khong phai so nguyen to",x);
        }
        printf(" ");
    while(getchar() != '\n'); 
    getchar();
    */
   chinhphuong();
   printf("Nhan Enter de thoat...");
    while (getchar() != '\n');
    getchar();                 
   
    return 0;
}