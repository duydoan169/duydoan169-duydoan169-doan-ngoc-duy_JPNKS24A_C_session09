#include <stdio.h>
int main(){
    int array[100], currentLength=0, addIndex=0, addValue=0;
    printf("nhap so phan tu muon nhap: ");
    scanf("%d", &currentLength);

    for(int i=0; i < currentLength; i++){
        printf("nhap phan tu thu %d: ", i+1);
        scanf("%d", &array[i]);
    }
    printf("mang hien tai la: ");
    for(int i=0; i<currentLength; i++){
        printf("%d ", array[i]);
    }
    printf("\nnhap phan tu muon them: ");
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
    printf("mang hien tai la: ");
    for(int i=0; i<currentLength; i++){
        printf("%d ", array[i]);
    }

    return 0;
}