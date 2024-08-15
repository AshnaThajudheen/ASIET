import java.util.*;
class secondsmallest 
{
    public static void main(String args[])
     {
        int arr[];
        int i, j, temp, num;
        Scanner S = new Scanner(System.in);
        System.out.println("Enter the number of elements:");
        num =S.nextInt();
        arr = new int[50];
        System.out.println("Enter the elements of the array:");
        for (i = 0; i < num; i++) 
        {
            arr[i] =S.nextInt();
        }
        for (i = 0; i < num - 1; i++) 
        {
            for (j = 0;j<num-i-1;j++) 
            {
                if (arr[j]>arr[j+1]) 
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        System.out.println("The Second Smallest Element is : "+arr[1]);
        S.close();  
}
}
