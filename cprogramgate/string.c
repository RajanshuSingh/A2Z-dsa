#include <stdio.h>
#include <string.h>

int main() {
    // char ch[] = "parakram"; // Stored in an array, modifiable
    // ch[0] = 'k'; // Modifying the first character

    // printf("%s", ch); // Output: "karakram"
    // return 0;

    // char ch[]="abcde";
    // char *p[]={ch+3,ch+2,ch,ch+4,ch+1};
    // char **ptr;
    // ptr= p+3;
    // printf("%c",ptr[0][1]);
    // return 0;

    // char ch[10]="abcd";
    // printf("%c", *(ch+2));

   
// 

// char p[20];
// char *s="string";
// int l=strlen(s);
// for(int i=0;i<l;i++){
//     p[i]=s[l-i];

// }

// printf("%s", s[5]);

char character;
character = getchar();
printf("Entered character is:  %c \n " ,character );
putchar( character);
return 0;


}

 