//Program to find the frequency of numbers in a string
//Ashna Thajudheen
//Roll No:17
import java.util.*;
class frequency
 {
    public static void main(String[] args) 
    {
        Scanner S1 = new Scanner(System.in);
        String st;
        int frequency = 0;
        System.out.println("Enter the String:");
        st = S1.nextLine();
        st = st.toLowerCase(); 
        System.out.println("Enter the character to check:");
        char c = S1.next().charAt(0); 
        int leng = st.length();
        for (int i = 0; i < leng; i++) 
        {
            if (st.charAt(i) == c) 
            { 
                frequency++;
            }
        }

        System.out.println("The frequency of character '" + c + "' is " + frequency);
        S1.close(); 
    }
}

