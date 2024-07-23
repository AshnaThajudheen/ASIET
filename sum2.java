//program to print sum of two numbers

import java.util.*;

class sum2
{
    public static void main(String args[])
        {

            Scanner S1= new Scanner(System.in);
            System.out.println("Enter Two Numbers:");
            float a=S1.nextFloat();
            float b=S1.nextFloat(); 
            float sum=a+b;
            float avg = sum/2;
            System.out.println ("The sum of is:" +sum);
            System.out.println("The average of the numbers is "+avg);
            S1.close();
        }

}