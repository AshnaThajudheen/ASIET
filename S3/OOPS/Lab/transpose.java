import java.util.*;

class transpose {
    public static void main(String args[]) {
        Scanner S = new Scanner(System.in);
        int matrix[][] = new int[50][50];
        int transposematrix[][] = new int[50][50];
        int i, j;
        System.out.println("Enter the number of rows:");
        int row = S.nextInt();
        System.out.println("Enter the number of columns:");
        int column = S.nextInt();
        System.out.println("Enter the matrix:");
        for (i = 0; i < row; i++) {
            for (j = 0; j < column; j++) {
                matrix[i][j] = S.nextInt();
            }
        }
        for (i = 0; i < row; i++) {
            for (j = 0; j < column; j++) {
                transposematrix[j][i] = matrix[i][j];
            }
        }
        System.out.println("The transpose is:");
        for (i = 0; i < column; i++) {
            for (j = 0; j < row; j++) {
                System.out.print(transposematrix[i][j] + " ");
            }
            System.out.println();
        }
        S.close();
    }
}
