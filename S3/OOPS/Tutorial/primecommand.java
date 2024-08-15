class primecommand
{
    public static void main(String args[]) 
    {
        int num, count;
        num = Integer.parseInt(args[0]);
        for (int i = 2; i <= num; i++) 
        { 
            count = 0;
            for (int j = 1; j <= i; j++) 
            {
                if (i % j == 0) 
                {
                    count++;
                }
            }
            if (count == 2) 
            { 
                System.out.println("The prime numbers upto input is"+i);
            }
        }
    }
}

