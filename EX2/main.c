#include <stdio.h>

int main(){
    FILE* fp;
    int a[]={0,1,2};
    char b[] = "ABC";
    float c []={1.1,1.2,1.3};
    int ra[3];
    char rb[3];
    float rc[3];
    
    fp = fopen("a.bin","wb+");
    fwrite(a, sizeof(int),3,fp);
    fread(ra,sizeof(int),3,fp);
    for(int r =0; r<3;r++){
        printf("%d ",a[r]);
    }
    printf("\n");
    
    fwrite(b, sizeof(char),3,fp);
    fread(rb,sizeof(char),3,fp);
    for(int r =0; r<3;r++){
        printf("%c ",b[r]);
    }
    printf("\n");
    
    fwrite(c, sizeof(float),3,fp);
    fread(rc,sizeof(float),3,fp);
    for(int r =0; r<3;r++){
        printf("%f ",c[r]);
    }
    printf("\n");
    return 0;
}
