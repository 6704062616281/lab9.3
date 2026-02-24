#include <stdio.h>
#include <string.h>
int checkLogin(char *login, char *passwd, char *logindb, char *passdb);
int main() {
	char login[5][64]={"user1","user2","user3","user4","user5"};
	char password[5][64]={"pass1","pass2","pass3","pass4","pass5"};
	char inputLogin[64], inputPass[64];
	printf("Enter login : "); gets(inputLogin);
	printf("Enter password : "); gets(inputPass);
	int found = 0,i;
	for(i = 0; i < 5; i++) {
    	if(checkLogin(inputLogin, inputPass, login[i], password[i]) == 1) {
        	found = 1;
        	break;
    	}
	}
	if(found == 1)
		printf("Welcome");
	else
		printf("Incorrect login or password");
}
int checkLogin(char *login, char *passwd, char *logindb, char *passdb){
	if (strcmp(login, logindb) == 0 && strcmp(passwd, passdb) == 0) {
        return 1;
    }else{
    	return 0;
	}
}
