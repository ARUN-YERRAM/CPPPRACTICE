// Experiment 7
// a) Write a C program that takes one or more file/directory names as command line input 
// and reports the following information: i) File Type ii) Number of Links iii) Time of last Access 
// iv) Read, write, and execute permissions.

#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int i;
    struct stat a;

    if (argc < 2) {
        printf("Usage: %s <file/directory names>\n", argv[0]);
        return 1;
    }

    for (i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);
        if (stat(argv[i], &a) == -1) {
            perror("stat");
            continue;
        }

        if (S_ISDIR(a.st_mode)) {
            printf("Is a directory\n");
        } else if (S_ISREG(a.st_mode)) {
            printf("Is a regular file\n");
        } else {
            printf("Is another type of file\n");
        }

        printf("FILE PROPERTIES\n");
        printf("Inode number: %ld\n", a.st_ino);
        printf("Number of Links: %ld\n", a.st_nlink);
        printf("Last access time: %s", asctime(localtime(&a.st_atime)));
        printf("Permissions: %o\n", a.st_mode & 0777);
        printf("Size: %ld bytes\n\n", a.st_size);
    }

    return 0;
}
