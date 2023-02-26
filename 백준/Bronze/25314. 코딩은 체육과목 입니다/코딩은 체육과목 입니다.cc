#import<ios>

int main()
{
    int N = 0;
    scanf("%d",&N);
    
    while ( N != 0 ) {
        fputs("long ", stdout);
        N -= 4;
    }

    fputs("int", stdout);

    return 0;
}