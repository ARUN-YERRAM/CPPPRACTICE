// b) Write a C program to list every file in directory, its inode number and file name PROGRAM:

#include <fcntl.h>
#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>

int main(int argc, char *argv[])
{
    DIR * dirop;
    dtru
    if (argc != 2)
    {
        printf("Invalid number of arguments\n");
    }
    else if ((dirop = opendir(argv[1])) == NULL)
    {
        printf("Cannot open Directory\n");
    }
    else
    {
        printf("Inode\tFile Name\n");
        while ((dired = readdir(dirop)) != NULL)
        {
            printf("%ld\t%s\n", dired->d_ino, dired->d_name);
        }
        closedir(dirop);
    }
    return 0;
}
