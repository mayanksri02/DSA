#include<stdio.h>
void toh(int n,char S,char H,char D){
    if(n==1){
        printf("Move disc %d from %c to %c\n",n,S,D);
        return;
    }
    toh(n-1,S,D,H);
    printf("Move disc %d from %c to %c\n",n,S,D);
    toh(n-1,H,S,D);

}
int main(){
    toh(3,'S','H','D');
}