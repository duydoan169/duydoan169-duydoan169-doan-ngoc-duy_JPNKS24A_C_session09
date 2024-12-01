#include <stdio.h>
int main(){
    int array[100], currentLength=0, addIndex=0, addValue=0, option=0;
    printf("nhap so phan tu muon nhap: ");
    scanf("%d", &currentLength);

    for(int i=0; i < currentLength; i++){
        printf("nhap phan tu thu %d: ", i+1);
        scanf("%d", &array[i]);
    }
    do{
        printf("\n1. hien thi mang\n");
        printf("2. them phan tu\n");
        printf("3. sua phan tu\n");
        printf("4. xoa phan tu\n");
        printf("5. thoat\n");
        printf("lua chon cua ban: ");
        scanf("%d", &option);
        if(option==1){
            printf("\nmang hien tai la: ");
            for(int i=0; i<currentLength; i++){
                printf("%d ", array[i]);
            }
            printf("\n");
        }
        if(option==2){
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
            printf("\nnhap phan tu muon thay doi thanh: ");
            scanf("%d", &addValue);
            printf("nhap vi tri muon thay doi: ");
            scanf("%d", &addIndex);
            do{
                if(addIndex>100 || addIndex<0 || addIndex > currentLength){
                    printf("do dai khong hop le\n");
                    printf("nhap vi tri muon thay doi: ");
                    scanf("%d", &addIndex);
                }
            }while(addIndex>100 || addIndex<=0 || addIndex > currentLength);
            array[addIndex-1]=addValue;

        }
        if(option==4){
            printf("\nnhap vi tri muon xoa: ");
            scanf("%d", &addIndex);
            do{
                if(addIndex<=0 || addIndex > currentLength){
                    printf("khong hop le\n");
                    printf("nhap vi tri muon xoa: ");
                    scanf("%d", &addIndex);
                }
            }while(addIndex>100 || addIndex<=0 || addIndex > currentLength);
            array[addIndex-1]=addValue;
            for(int i=addIndex-1; i<currentLength; i++){
                array[i]=array[i+1];
            }
            currentLength-=1;

        }
    }while(option!=5);
    printf("da thoat chuong trinh");
    return 0;
}