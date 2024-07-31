import java.util.*;
class sumofdigit
{
 public static void main(String args[])
  {
   int num,digit=0,sum=0;
   Scanner S=new Scanner(System.in);
   System.out.println("Enter the Number:");
   num=S.nextInt();
   while(num!=0)
   {
    digit = num % 10;  
    sum = sum + digit;
    num = num / 10;    
   }
   System.out.println("The Sum Of Digits is:"+sum);
   S.close();
  }
}