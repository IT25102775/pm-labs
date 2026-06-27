#include <stdio.h>
#include <string.h>

 int main(){
    char Mail[150] = "";
    char greetings[50] = "";
    char body[50] = "";
    char closing[50] = "";

    printf("Enter Greeting: ");
    fgets(greetings, sizeof(greetings), stdin);
    greetings[strlen(greetings) - 1] = '\0';

    printf("Enter body part of mail: ");
    fgets(body, sizeof(body), stdin);
    body[strlen(body) - 1] = '\0';

    printf("Enter Closing: ");
    fgets(closing, sizeof(closing), stdin);
    closing[strlen(closing) - 1] = '\0';

    strncat(Mail, greetings, sizeof(Mail) - strlen(Mail) - 1);
    strncat(Mail, " ", sizeof(Mail) - strlen(Mail) - 1);
    strncat(Mail, body, sizeof(Mail) - strlen(Mail) - 1 );
    strncat(Mail, " ", sizeof(Mail) - strlen(Mail) - 1);
    strncat(Mail, closing, sizeof(Mail) - strlen(Mail) - 1 );

    printf("Email: %s\n", Mail);
    

    return 0;
}
