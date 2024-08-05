import java.util.Scanner;
class palindrome {
    public static void main(String[] args) {
        String st, reverse = "";
        Scanner S1 = new Scanner(System.in);
        System.out.println("Enter the string:");
        st = S1.nextLine();
        int length = st.length();

        for (int i = length - 1; i >= 0; i--) {
            reverse = reverse + st.charAt(i);
        }

        if (reverse.equals(st)) {
            System.out.println("The string " +st+ " is a Palindrome");
        } else {
            System.out.println("The string " +st +" is not a Palindrome");
        }

        S1.close();
    }
}
