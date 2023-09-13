import java.util.Scanner;
public class Java_Datatypes {
    public static void main(String []args)
    {
        Scanner scanner = new Scanner(System.in);
       long t = scanner.nextLong();
      //  long x = scanner.nextLong();
        for(int i = 0 ; i<t;i++) //test cases
        {
            try{
              long x = scanner.nextLong();
                System.out.println(x+" can be fitted in:");
                if(x>=Short.MIN_VALUE && x<= Short.MAX_VALUE)
                {
                    System.out.println("* short");
                }
                if(x>= Byte.MIN_VALUE && x<=Byte.MAX_VALUE)
                {
                    System.out.println("* byte");
                }
                if(x>=Integer.MIN_VALUE && x<=Integer.MAX_VALUE)
                {
                    System.out.println("* int");
                }
                if(x>= Long.MIN_VALUE && x<= Long.MAX_VALUE)
                {
                    System.out.println("* long");
                }
                    scanner.close();
            }
            catch(Exception e)
            {
                System.out.println(scanner.next()+" can't be fitted anywhere.");
            }
            scanner.close();
        }
    }
}
