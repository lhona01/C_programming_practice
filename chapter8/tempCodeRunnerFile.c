int main() {
    char sName[20] = {'\0'};
    int x;

    printf("\nEnter you name: ");
    scanf("%s", sName);

    printf("\nThere are %ld character in your name ", strlen(sName));

    for ( x = 0; x < strlen(sName); x++ )
        printf("%c", toupper(sName[x]));
    printf("\n");
    return 0;
} //end main