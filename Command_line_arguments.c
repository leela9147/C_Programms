#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: %s <student_name> <mark1> <mark2> ...\n", argv[0]);
        return 1;
    }

    char *studentName = argv[1];
    int i=0 ,totalMarks = 0;
    int numMarks = argc - 2;
    
    printf("Student Name: %s\n", studentName);
    printf("Marks: ");

    for ( i = 2; i < argc; i++) {
        int mark = atoi(argv[i]);
        totalMarks += mark;
        printf("%d ", mark);
    }
    
    printf("\nTotal Marks: %d\n", totalMarks);
    return 0;
}
