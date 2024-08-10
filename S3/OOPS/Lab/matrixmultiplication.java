//Program to print matrixmultiplication
//Ashna Thajudheen
//Roll No:17
import java.util.*;
class matrixmultiplication {
    public static void main(String args[]) {
        int[][] matrix1 = new int[50][50];
        int[][] matrix2 = new int[50][50];
        int[][] product = new int[50][50];
        int i, j, k;
        Scanner S = new Scanner(System.in);
        System.out.println("Enter the number of rows in the first matrix:");
        int row1 = S.nextInt();
        System.out.println("Enter the number of columns in the first matrix:");
        int col1 = S.nextInt();
        System.out.println("Enter the number of rows in the second matrix:");
        int row2 = S.nextInt();
        System.out.println("Enter the number of columns in the second matrix:");
        int col2 = S.nextInt();
        if (col1 != row2) 
        {
            System.out.println("The product is not possible");
            S.close();
            return;
        }
        System.out.println("Enter the elements of the first matrix:");
        {
        for (i = 0; i < row1; i++)
         {
            for (j = 0; j < col1; j++) 
            {
                matrix1[i][j] = S.nextInt();
            }
        }
        }
        System.out.println("Enter the elements of the second matrix:");
        {
        for (i = 0; i < row2; i++) 
        {
            for (j = 0; j < col2; j++)
            {
                matrix2[i][j] = S.nextInt();
            }
        }
        }
        {
        for (i = 0; i < row1; i++) 
        {
            for (j = 0; j < col2; j++) 
            {
                product[i][j] = 0;
                for (k = 0; k < col1; k++) 
                {
                    product[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }
        }
        System.out.println("The product of the matrices is:");
        {
        for (i = 0; i < row1; i++) 
        {
            for (j = 0; j < col2; j++) 
            {
                System.out.print(product[i][j] + " ");
            }
            System.out.println();
        }
        }   
        S.close();
    }
}
