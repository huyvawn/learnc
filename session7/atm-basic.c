#include<stdio.h>
#include<stdlib.h>

int atm_basic(int argc, char *argv[]){
//    int main(){

printf("Ban da dang nhap thanh cong. Xin chuc mung.\n");
printf("Ban muon su dung chuc nang nao?\n");
printf("1. rut tien\n");
printf("2. kiem tra so du\n");
printf("3. chuyen khoan\n");
printf("4. kiem tra lich su giao dich\n");
printf("Moi ban nhan cac lua chon 1-4\n");

int choose = 0;
scanf("%d", &choose);
if(choose >= 1 && choose <=4){
    switch (choose) {
        case 1:
            printf("Giao dich thanh cong. So tien con lai la 4 trieu USD\n");
            break;
        case 2:
            printf("So du trong tai khoan cua ban la 5 trieu USD\n");
            break;
        case 3:
            printf("Ban hay nhap so tai khoan can chuyen\n");
            break;
        case 4:
            printf("Danh sach cac giao dich gan day cua ban\n");
            break;
        default:
            printf("Ban chon chua chinh xac\n");
    }
}
else
    printf("Lua chon khong phu hop. Moi ban chon tu 1-4");
}