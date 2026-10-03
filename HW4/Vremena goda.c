#include <stdio.h>

int main(int argc, char **argv)
{
int month;
       if(scanf("%d", &month)!=1)
       {
        printf("Error input\n");
    }    
    switch(month){
        case 1:printf("winter\n");
        break;
        case 2:printf("winter\n");
        break;
        case 3:printf("spring\n");
        break;
        case 4:printf("spring\n");
        break;
        case 5:printf("spring\n");
        break;
        case 6:printf("summer\n");
        break;
        case 7:printf("summer\n");
        break;
        case 8:printf("summer\n");
        break;
        case 9:printf("autumn\n");
        break;
        case 10:printf("autumn\n");
        break;
        case 11:printf("autumn\n");
        break;
        case 12:printf("winter\n");
        break;
        default:printf("Error input");
        return 0;}
}

