import java.util.*;
 class abc
{
public void ww(int n,String ch)
{
String one[]={" ","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
String ten[]={" "," ","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
if(n>19)
{
System.out.print(ten[n/10]+" "+one[n%10]);
}
else
{
System.out.print(one[n]);
}
if(n>0)
System.out.print(ch);
}


public static void main(String args[])
{
int n=0;
Scanner sc=new Scanner(System.in);
 n=sc.nextInt();
if(n<=0)
{
System.out.println("enter numbers greater than 0");}

else
{
abc a1=new abc();
a1.ww((n/1000000000),"hundred");
a1.ww(((n/10000000)%100),"core");
a1.ww(((n/100000)%100),"lakh");
a1.ww(((n/1000)%100),"thousand");
a1.ww(((n/100)%10),"hundred");
a1.ww((n%100)," ");
}
}
}



