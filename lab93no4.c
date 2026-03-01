#include <stdio.h>
#define MAX 50
int countVowel(char t[], int *a, int *e, int *ii, int *o, int *u);
void main() {
    char text[MAX];
    int cVowel;
    int a, e, i, o, u;

    printf("Enter text : ");
    scanf("%s", text);
    cVowel = countVowel(text, &a, &e, &i, &o, &u);
    printf("Text : [%s] has %d vowels\n", text, cVowel);
    printf("A/a = %d\n", a);
    printf("E/e = %d\n", e);
    printf("I/i = %d\n", i);
    printf("O/o = %d\n", o);
    printf("U/u = %d\n", u);
}
int countVowel(char t[], int *a, int *e, int *ii, int *o, int *u){
    int i = 0, count = 0;
    *a = 0; *e = 0; *ii = 0; *o = 0; *u = 0;
    while(i < MAX && t[i] != '\0'){
    	if (t[i] == 'A' || t[i] == 'a') {(*a)++; count++;}
        if (t[i] == 'E' || t[i] == 'e') {(*e)++; count++;}
        if (t[i] == 'I' || t[i] == 'i') {(*ii)++; count++;}
        if (t[i] == 'O' || t[i] == 'o') {(*o)++; count++;}
        if (t[i] == 'U' || t[i] == 'u') {(*u)++; count++;}
        i++;
	}
        
    return count;
}
