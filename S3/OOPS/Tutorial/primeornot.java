import java.util.*;
class primeornot 
{
           public static void main(String args[])
    {
        Scanner S=new Scanner(System.in);
        int count=0;
        System.out.println("Enter the number");
         int num=S.nextInt();
         for(int i=1;i<=num;i++)
         {
            count=0;
            if(num%i==0)
            {
                count++;
            }
            }
                if(count==2)
                {
                    System.out.println(num+" is a prime number");
                }   
                else
                {
                    System.out.println(num+" is not a prime number");
                }      
         S.close();
    }
}

