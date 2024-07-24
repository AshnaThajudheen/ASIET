import java.util.*;

class sum
{
    public static void main(String args[])

    {
        Scanner S1= new Scanner(System.in);
        System.out.println("Enter Three Numbers:");
        int a=S1.nextInt();
        int b=S1.nextInt();
        int c=S1.nextInt();
        int sum=a+b+c;
        System.out.println("The sum is "+sum); 
        S1.close();
    }
}