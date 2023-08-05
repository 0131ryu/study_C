int main(void)
{
    char sel;

    printf("morning(M), after(A), evening(E) \n");
    printf("check (q to quit) : ");

    scanf("%c", &sel);

    switch (sel)
    {
    case 'M':
    case 'm':
        printf("Morning. \n");
        break;
    case 'A':
    case 'a':
        printf("Afternoon. \n");
        break;
    case 'E':
    case 'e':
        printf("Evening. \n");
        break;
    }
    return 0;
}