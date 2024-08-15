//Program to print multiplication table
//Ashna Thajudheen
//Roll No:17
import java.util.*;
class table
{
	public static void main (String args[])
	{
	Scanner S=new Scanner(System.in);
	System.out.println("Enter the Number:");
	int num=S.nextInt();
	System.out.println("Enter the Range:");
	int range=S.nextInt();
	System.out.println("The Multiplication Table is:");
	for(int i=0;i<=range;i++)
	{
		System.out.println(num + "x" + i + " = " + num * i);
	}
	S.close();
	}
}

	
		
	