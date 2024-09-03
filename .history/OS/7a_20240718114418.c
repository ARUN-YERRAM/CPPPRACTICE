// Experiment 7
// a) Write a C program that takes one or more file/directory names as command line input and reports following information i) File Type ii) Number of Links iii) Time of last Access iv) Read, write and execute permissions.
// PROGRAM:



#include <stdio.h>
#include <sys/stat.h>
#include <time.h>
#include <errno.h> // Include errno for error reporting

int main(int argc, char *argv[])
{
    struct stat a;

    // Iterate through each command-line argument (file/directory name)
    for (int i = 1; i < argc; i++)
    {
        printf("%s\n", argv[i]);

        // Use stat() to get file/directory information
        if (stat(argv[i], &a) == 0)
        {
            // Check if it's a directory or regular file
            if (S_ISDIR(a.st_mode))
            {
                printf("File Type: Directory\n");
            }
            else if (S_ISREG(a.st_mode))
            {
                printf("File Type: Regular File\n");
            }
            else
            {
                printf("File Type: Unknown\n");
            }

            printf("FILE PROPERTIES\n");
            printf("Inode Number: %ld\n", a.st_ino); // Inode number
            printf("Number of Links: %ld\n", a.st_nlink); // Number of links
            printf("Last Access Time: %s", asctime(localtime(&a.st_atime))); // Last access time
            printf("Permissions (octal): %o\n", a.st_mode & 0777); // Permissions
            printf("Size: %ld bytes\n", a.st_size); // Size in bytes
        }
        else
        {
            // Print error message based on errno
            if (errno == ENOENT)
            {
                printf("Error: %s does not exist\n", argv[i]);
            }
            else if (errno == EACCES)
            {
                printf("Error: Access denied for %s\n", argv[i]);
            }
            else
            {
                printf("Error retrieving information for %s\n", argv[i]);
            }
        }

        printf("\n"); // Separate entries with a blank line
    }

    return 0;
}
