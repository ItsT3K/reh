#include<stdio.h>
#include<string.h>
/* reh - a skunk in your terminal! */
/* written by ItsT3K << josh d >>  */
/* https://itst3k.tk		   */
/* 2022 - 05 - 17 :: 19:31 UTC-5   */
    static unsigned char skunk[] = {
    0x27, 0x20, 0x5F, 0x5F, 0x20, 0x20, 0x20, 
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x5F, 0x5F, 0x0D, 0x0A, 0x20,
    0x3A, 0x7C, 0x7C, 0x3A, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
    0x3A, 0x7C, 0x7C, 0x3A, 0x0D, 0x0A, 0x20,
    0x3A, 0x7C, 0x7C, 0x3A, 0x20, 0x20, 0x5F, 
    0x5F, 0x5F, 0x20, 0x20, 0x20, 0x20, 0x20, 
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
    0x5F, 0x5F, 0x5F, 0x20, 0x20, 0x20, 0x3A, 
    0x7C, 0x7C, 0x3A, 0x0D, 0x0A, 0x20, 0x3A, 
    0x7C, 0x7C, 0x3A, 0x2F, 0x7E, 0x20, 0x20,
    0x20, 0x7E, 0x2D, 0x5F, 0x5F, 0x20, 0x20, 
    0x20, 0x20, 0x5F, 0x5F, 0x2D, 0x7E, 0x20, 
    0x20, 0x20, 0x7E, 0x5C, 0x3A, 0x7C, 0x7C, 
    0x3A, 0x0D, 0x0A, 0x20, 0x3A, 0x20, 0x20, 
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
    0x20, 0x20, 0x2E, 0x5C, 0x20, 0x20, 0x2E, 
    0x2E, 0x22, 0x20, 0x20, 0x20, 0x20, 0x20, 
    0x20, 0x20, 0x20, 0x20, 0x3A, 0x0D, 0x0A, 
    0x20, 0x20, 0x5C, 0x20, 0x5F, 0x20, 0x2D, 
    0x5F, 0x5F, 0x5F, 0x20, 0x2D, 0x5F, 0x5F, 
    0x5F, 0x3E, 0x3C, 0x5F, 0x5F, 0x5F, 0x2D, 
    0x20, 0x5F, 0x5F, 0x5F, 0x2D, 0x20, 0x5F, 
    0x2F, 0x0D, 0x0A, 0x20, 0x20, 0x7C, 0x5F, 
    0x29, 0x5C, 0x5F, 0x29, 0x20, 0x20, 0x5C, 
    0x5F, 0x29, 0x20, 0x20, 0x20, 0x20, 0x28, 
    0x5F, 0x2F, 0x28, 0x5F, 0x7C, 0x20, 0x20, 
    0x28, 0x5F, 0x7C, 0x00,
    };
    static unsigned char fox[] = {
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
    0x2F, 0x5E, 0x2E, 0x5F, 0x0D, 0x0A, 0x2C, 
    0x5F, 0x5F, 0x5F, 0x2C, 0x2D, 0x2D, 0x7E, 
    0x7E, 0x7E, 0x7E, 0x2D, 0x2D, 0x27, 0x20, 
    0x2F, 0x27, 0x7E, 0x0D, 0x0A, 0x60, 0x7E, 
    0x2D, 0x2D, 0x7E, 0x5C, 0x20, 0x29, 0x5F, 
    0x5F, 0x5F, 0x2C, 0x29, 0x2F, 0x27, 0x0D, 
    0x0A, 0x20, 0x20, 0x20, 0x20, 0x28, 0x2F, 
    0x5C, 0x5C, 0x5F, 0x20, 0x20, 0x28, 0x2F, 
    0x5C, 0x5C, 0x5F, 0x0D, 0x0A, 0x00,
    };
    static unsigned char horse[] = {
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
    0x2F, 0x5C, 0x2F, 0x5C, 0x0D, 0x0A, 0x20, 
    0x20, 0x20, 0x20, 0x20, 0x20, 0x2F, 0x20, 
    0x20, 0x20, 0x20, 0x5C, 0x0D, 0x0A, 0x20, 
    0x20, 0x20, 0x20, 0x7E, 0x2F, 0x28, 0x5E, 
    0x20, 0x20, 0x5E, 0x29, 0x0D, 0x0A, 0x20, 
    0x20, 0x20, 0x7E, 0x2F, 0x20, 0x20, 0x29, 
    0x20, 0x20, 0x28, 0x0D, 0x0A, 0x20, 0x20, 
    0x7E, 0x2F, 0x20, 0x20, 0x20, 0x28, 0x20, 
    0x20, 0x29, 0x0D, 0x0A, 0x20, 0x7E, 0x2F, 
    0x20, 0x20, 0x20, 0x20, 0x20, 0x7E, 0x7E, 
    0x0D, 0x0A, 0x7E, 0x2F, 0x20, 0x20, 0x20, 
    0x20, 0x20, 0x20, 0x20, 0x7C, 0x00,
    };
    static unsigned char dog[] = {
    0x20, 0x20, 0x20, 0x20, 0x20, 0x5F, 0x5F, 
    0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
    0x5C, 0x20, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 
    0x5F, 0x2F, 0x20, 0x56, 0x60, 0x2D, 0x2C, 
    0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
    0x20, 0x7D, 0x20, 0x20, 0x20, 0x20, 0x20, 
    0x20, 0x20, 0x20, 0x2F, 0x7E, 0x7E, 0x0D, 
    0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2F, 
    0x5F, 0x29, 0x5E, 0x20, 0x2D, 0x2D, 0x2C, 
    0x72, 0x27, 0x0D, 0x0A, 0x20, 0x20, 0x20, 
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
    0x20, 0x7C, 0x62, 0x20, 0x20, 0x20, 0x20, 
    0x20, 0x20, 0x7C, 0x62, 0x0D, 0x0A, 0x00,
    };
    int main(int argc, char **argv){
        /*dog*/
        if (argc > 1 && !strcmp(argv[1], "--dog")) {
            printf("%s\n", dog);
            printf("\nwoof! - have a good day!\n");
            return 0;
        }
        
        /*horse*/       
        if (argc > 1 && !strcmp(argv[1], "--horse")) {
            printf("%s\n", horse);
            printf("\nneigh! - have a good day!\n");
            return 0;
        }
        
        /*version*/
        if (argc > 1 && !strcmp(argv[1], "--version")) {
            printf("\nVersion 1.1 - ItsT3K <<Josh D>>, 2022\n");
            return 0;
        }
        
        /*help*/
        if (argc > 1 && !strcmp(argv[1], "--help")) {
            printf("\nreh! - animals in the terminal");
            printf("\n	reh - Displays a skunk!");
            printf("\n	--fox - Displays a fox!");
            printf("\n	--horse - Displays a horse!");
            printf("\n	--dog - Displays a dog!");
            printf("\n");
            printf("\n	--help - Displays this screen");
            printf("\n	--version - Displays Version and Author");
            printf("\n");
            return 0;
        }
        
        /*fox*/
        if (argc > 1 && !strcmp(argv[1], "--fox")) {
            printf("%s\n", fox);
            printf("\nyip! - have a good day!\n");
            return 0;
        }
        
        /*skunk*/
            printf("%s\n", skunk);
            printf("\nreh! - have a good day!\n");
            return 0;
        
}