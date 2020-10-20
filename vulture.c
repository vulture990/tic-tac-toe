/*#include <stdio.h> 
int main(void)
{
    printf("hello newbie \n");
    printf("learning branches and merging");
    return 0;
}
 so ifigured a  good way of starting of this would be b resolving one of the basics is figuring the convertio of minutes to years*/
#include <stdio.h>
int main(void)
{
    double minutes;
    double years ;
    double x;
    printf("please enter the number of minutes you want converted: ");
    scanf("%lf",&minutes);
    x=(minutes/(525600));
    printf("easy peezy lemon squezy ,there you go %lf",x);
    return 0;
}