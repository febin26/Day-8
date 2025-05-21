
include<stdio.h>
int add(){
    int x,y;
    scanf("%d%d",&x,&y);
    return x+y;
}
int main(){
    int x=add();
    printf("%d",x);
    printf("%d",add());
    return 0;
}