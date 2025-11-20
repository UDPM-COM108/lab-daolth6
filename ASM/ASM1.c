    #include <stdio.h>
    int main()
    {
        int luachon;
        do
        { 
        printf("-------ASM 1 cua Nguyen Quoc Vu PS49768-------\n");
        printf("1.Kiem tra so nguyen\n");
        printf("2.Tim uoc so chung va boi so chung cua 2 so\n");
        printf("3.Tinh tien cho quan karaoke\n");
        printf("4.Tinh tien dien\n");
        printf("5.Doi tien\n");
        printf("6.Tinh lai suat vay ngan hang vay tra gop\n");
        printf("7.Vay tien mua xe\n");
        printf("8.Sap xep thong tin sinh vien\n");
        printf("9.Xay dunng game FPOLY-LOTT\n");
        printf("10.Tinh toan giai phan so\n");
        printf("0.Thoat\n");
        printf("Nhap chuc nang:");
        scanf("%d",&luachon);
        switch(luachon)
        {
        case 1: printf("ban da chon chuc nang 1 kiem tra so nguyen\n");
        break;
        case 2: printf("ban da chon chuc nang 2 tim uoc so chung va boi so chung cua 2 so\n");
        break;
        case 3: printf("ban da chon chuc nang 3 tinh tien cho quan karaoke\n");
        break;
        case 4: printf("ban da chon chuc nang 4 tinh tien dien\n");
        break;
        case 5: printf("ban da chon chuc nang 5 doi tien\n");
        break;
        case 6: printf("ban da chon chuc nang 6 tinh lai suat vay ngan hang vay tra gop\n");
        break;
        case 7: printf("ban da chon chuc nang 7 vay tien mua xe\n");
        break;
        case 8: printf("ban da chon chuc nang 8 sap xep thong tin sinh vien\n");
        break;
        case 9: printf("ban da chon chuc nang 9 tay dunng game FPOLY-LOTT\n");
        break;
        case 10: printf("ban da chon chuc nang 10 tinh toan giai phan so\n");
        break;
        }
     } while (luachon !=0);
        return 0;
    }