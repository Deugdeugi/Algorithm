#import<ios>

int main()
{
    int N = 0;
    scanf("%d",&N);
    
    while ( N != 4 ) {
        fputs("long ", stdout);
        N -= 4;
    }

    fputs("long int", stdout);

    return 0;
}