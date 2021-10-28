#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    char usp[100];
    char str[100];
    printf("User detected...\n");
    printf("What is your name? ");
    scanf("%[^\n]s",str);
    printf("Hello %s", str);
    printf(" nice to have you here.\n");
        while(1)
        {
            printf("==> ");
            scanf(" %[^\n]s",usp);
            if
                (
                    strcmp(usp, "bye")== 0 || strcmp(usp, "exit") == 0
                    || strcmp(usp, "Bye") == 0 || strcmp(usp, "Exit") == 0
                )
            {
                printf("ok bye\n");
                break;
            }

            else if
                (
                    strcmp(usp, "hi")== 0 || strcmp(usp, "Hi") == 0
                    || strcmp(usp, "Hello") == 0 || strcmp(usp, "hello") == 0
                )
            {
                printf("Hi, %s\n",str);
            }

            else if
                (
                    strcmp(usp, "how are you")== 0 || strcmp(usp, "How are you") == 0
                    || strcmp(usp, "you good?") == 0 || strcmp(usp, "how are you?") == 0
                )
            {
                printf("Thanks for asking. I'm doing well.\n");
                printf("what about you? \n");
            }

            else if
                (
                    strcmp(usp, "im fine")== 0 || strcmp(usp, "I'm fine") == 0
                    || strcmp(usp, "good") == 0 || strcmp(usp, "bad") == 0
                )
            {
                printf("Good for you.\n");
            }

            else
            {
                printf("huh?\n");
            }
        }
        return 0;
}
