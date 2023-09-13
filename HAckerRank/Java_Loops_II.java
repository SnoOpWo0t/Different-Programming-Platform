import java.util.Scanner;
public class Java_Loops_II {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int i,j ;
        int t = scanner.nextInt();
        for(i = 0; i<t; i++)
        {
             int a = scanner.nextInt();
             int b = scanner.nextInt();
             int n = scanner.nextInt();
             for(j= 0 ; j<n ; j++)
             {
                 a = a+b;
                 if(j>0)
                 {
                     System.out.print(" ");
                 }
                 System.out.print(a);
                 b = b*2;

             }
            System.out.println();
        }
    }



}
