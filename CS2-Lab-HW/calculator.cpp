





int gcd(int num1, int num2 )
{
    if (num2 !=0)
        return gcd(num1,num1 %/num2 );
    else
        return num1;
}
