#include<stdio.h>
#include<math.h>

/// Determine nearest Natural Number  from a Particular values square root.

int main()
{
    double num,res,temp;
    int out;
    scanf("%lf",&num);

    temp = sqrt(num);
    out = temp;

    if(temp - out <= 0.4)
    {
        printf("Nearest Natural Number = %d\n",out);
    }
    else
    {
        printf("Nearest Natural Number = %d\n",out+1);
    }


    return 0;
}



