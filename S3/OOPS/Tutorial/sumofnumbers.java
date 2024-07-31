import java.util.Scanner;

class sumofnumbers
 {
    public static void main(String[] args) 
	{
	int sum=0,n,num;
        Scanner S=new Scanner(System.in);
        System.out.println("Enter the number of elements: ");
        n=S.nextInt();
	System.out.println("Enter Elements:");
        for(int i=0; i<n;i++)
	{
	 num = S.nextInt();
	 sum=sum+num;
        }
        
        System.out.println("The sum of the " + n + " numbers is: " +sum);
        S.close();
    }
}