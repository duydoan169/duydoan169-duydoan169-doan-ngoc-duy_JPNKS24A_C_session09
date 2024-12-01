#include <stdio.h>
int main(){
    int array[100], currentLength=0, deleteIndex=0, addValue=0;
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
    printf("\nnhap vi tri muon xoa: ");
    scanf("%d", &deleteIndex);
    do{
        if(deleteIndex<=0 || deleteIndex > currentLength){
            printf("khong hop le\n");
            printf("nhap vi tri muon xoa: ");
            scanf("%d", &deleteIndex);
        }
    }while(deleteIndex>100 || deleteIndex<=0 || deleteIndex > currentLength);
    array[deleteIndex-1]=addValue;
    for(int i=deleteIndex-1; i<currentLength; i++){
        array[i]=array[i+1];
    }
    currentLength-=1;
    printf("mang hien tai la: ");
    for(int i=0; i<currentLength; i++){
        printf("%d ", array[i]);
    }

    return 0;
}