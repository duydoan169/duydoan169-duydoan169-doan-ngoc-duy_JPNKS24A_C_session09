#include <stdio.h>
int main(){
    int array[100], currentLength=0, addIndex=0, addValue=0, option=0, lonNhat=0, nhoNhat=0, tong=0, tongNguyenTo=2, checkPrime=0, search=0, found=0;
    printf("nhap so phan tu muon nhap: ");
    scanf("%d", &currentLength);

    for(int i=0; i < currentLength; i++){
        printf("nhap phan tu thu %d: ", i+1);
        scanf("%d", &array[i]);
    }
    do{
        printf("\n1. hien thi mang\n");
        printf("2. in ra cac phan tu chan va tinh tong\n");
        printf("3. in ra gia tri lon nhat va nho nhat\n");
        printf("4. in ra cac so nguyen to va tinh tong\n");
        printf("5. nhap vao 1 so va thong ke trong mang va so luong do\n");
        printf("6. them 1 phan tu vao vi tri chi dinh\n");
        printf("7. thoat\n");

        printf("lua chon cua ban: ");
        scanf("%d", &option);
        if(option==1){
            printf("\nmang hien tai la: ");
            for(int i=0; i<currentLength; i++){
                printf("%d ", array[i]);
            }
            printf("\n");
        }
        if(option==6){
            printf("\nnhap phan tu muon them: ");
            scanf("%d", &addValue);
            printf("nhap vi tri muon them: ");
            scanf("%d", &addIndex);
            do{
                if(addIndex>100 || addIndex<=0){
                    printf("do dai khong hop le\n");
                    printf("nhap vi tri muon them: ");
                    scanf("%d", &addIndex);
                }
            }while(addIndex>100 || addIndex<=0);
            for(int i=currentLength; i>=addIndex; i--){
                array[i]=array[i-1];
            }
            if(addIndex>currentLength){
                addIndex=currentLength+1;
            }
            array[addIndex-1]=addValue;
            currentLength+=1;}
        if(option==3){
            for(int i=0; i < currentLength; i++){
            if(lonNhat<=array[i]){
                lonNhat=array[i];
            }
            if(nhoNhat>=array[i]){
                nhoNhat=array[i];
            }
            }
            printf("gia tri lon nhat trong mang la: %d\n", lonNhat);
            printf("gia tri nho nhat trong mang la: %d\n", nhoNhat);

        }
        if(option==4){
                for(int i=0; i<currentLength; i++){
                    checkPrime=0;
                    for(int j=2; j<array[i]; j++){
                        if(array[i]%j==0){
                            checkPrime=1;
                        }
                    }
                    if(checkPrime==0){
                    printf("%d ", array[i]);
                    tongNguyenTo+=array[i];
                        }
                }
            printf("\ntong cac so nguyen to la: %d", tongNguyenTo);
        }
        if(option==2){
            for(int i=0; i<currentLength; i++){
                if(array[i]%2==0){
                    printf("%d ",array[i]);
                    tong=tong+array[i];
                }
            }
            printf("\ntong cac so chan la: %d\n", tong);
        }
        if(option==5){
            printf("nhap so muon tim: ");
            scanf("%d", &search);
            for(int i=0; i<currentLength; i++){
                if(array[i]==search){
                    found=found+1;
                }
            }
            printf("trong mang co %d phan tu %d", found, search);
        }
    }while(option!=7);
    printf("da thoat chuong trinh");
    return 0;
}