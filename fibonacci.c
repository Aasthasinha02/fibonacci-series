#include <stdio.h>
//fibonacci function for implementation of fibonacci series
void fibonacci(int number)
{
    int t1=0, t2=1,i;         //initially two terms(t1&t2) are defined
    if(number<1)
    {
        return;
    }
    for(i=1;i<number;i++)    //the loop will run till the nth term
                            //or the input (number)
    {
        printf("%d",t2);   //t2 is printed(first term of fibonacci series)
        int nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
//main function 
}
 int main()
 {
    
     fibonacci(9);      //for this program i have given 9 as the input(number)
 }
   