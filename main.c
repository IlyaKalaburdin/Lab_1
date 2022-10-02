    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    int main()
    {
        double delta,result,x1,x2;
        unsigned int N,variant;

        printf("Enter variant (1 or 2)");
        printf("\n Variant 1 means the number of times to execute.");
        printf("\n Variant 2 means \"step\" selection from first to second x:");
        scanf("%d",&variant);

        while(variant!= 1 && variant!= 2)
        {
            printf("Error. Please try again:");
            scanf("%d",&variant);
        }
            if(variant == 1)
            {
                printf("\n Enter x1: ");
                scanf("%lf",&x1);
                printf("\n Enter x2: ");
                scanf("%lf",&x2);
                printf("\n (N>1) Enter N: ");
                scanf("%u",&N);
                printf("\n");

                if (N == 1)
                {
                    printf("\n Error: N is equal ONE!");
                    printf("\n (N>1) Enter N: ");
                    scanf("%u",&N);
                    printf("\n");
                }

                printf("\n***************************************************************");
                printf("\n*    N      *          X           *            F(X)          *");
                printf("\n***************************************************************");

                int i=1;
                delta=(x2-x1)/(N-1);
                for(i;i<=N;i++)
                {
                    result = (x1-50)*cos(x1/10)-3*x1+500;
                    printf("\n|%11.0d|%22.2f|%26.2f|",i,x1,result);
                    if(i%10==0)
                    {
                        printf("\n***************************************************************\n");
                        system("pause");
                        printf("***************************************************************");
                    }
                    x1=x1+delta;
                }
                if ((i-1)%10==0)
                {
                    return 0;
                }
                else
                {
                    printf("\n***************************************************************\n");
                    system("pause");
                    return 0;
                }
            }

            if(variant == 2)
            {
                printf("\n Enter x1: ");
                scanf("%lf",&x1);
                printf("\n Enter x2: ");
                scanf("%lf",&x2);
                printf("\n Enter delta:");
                scanf("%lf",&delta);

                while(delta==0 || delta>=(x2-x1))
                {
                    printf("\n Error: delta is not valid!");
                    printf("\n delta!=0 or delta<(x2-x1) Enter delta: ");
                    scanf("%lf",&delta);
                    printf("\n");
                }

                printf("\n***************************************************************");
                printf("\n*    N      *          X           *            F(X)          *");
                printf("\n***************************************************************");

                int i=1;
                while(x1<=x2)
                {
                    result=(x1-50)*cos(x1/10)-3*x1+500;
                    printf("\n|%11.0d|%22.2f|%26.2f|",i,x1,result);
                    if(i%10==0)
                    {
                        printf("\n***************************************************************\n");
                        system("pause");
                        printf("***************************************************************");
                    }
                    x1=x1+delta;
                    i++;
                }
                if ((i-1)%10==0)
                {
                    return 0;
                }
                else
                {
                    printf("\n***************************************************************\n");
                    system("pause");
                    return 0;
                }
            }
}
