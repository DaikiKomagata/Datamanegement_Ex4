#include<stdio.h>
#include<stdlib.h>

int main(void) {
    char name[100];
    printf("Who are you?\n>");
    scanf("%s",name);
    printf("Hello %s\n",name);
    
    int a,k=0,l=0;
    printf("Tossing a coin...\n");
    for(int i = 1; i <= 3; i++) {
        a=rand()%2;
        if(a){
            printf("Round %d:Heads\n",i);
            k++;
        }
        else{
            printf("Round %d:Tails\n",i);
            l++;
        }
    }
    printf("Heads; %d, Tails: %d\n",k,l);
    if(k>l){
        printf("%s won\n",name);
    }
    else printf("%s lose\n",name);
    return 0;
}
