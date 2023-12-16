import java.util.Scanner;
public class A_Is_your_horseshoe_on_the_other_hoof {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[] arr = new int[4];
        int count = 0;
        for (int i = 0; i < 4; i++) {
            arr[i] = input.nextInt();
        }
        for (int i = 0; i < 4; i++) {
            for (int j = i+1; j < 4; j++) {
                if(arr[i]==arr[j]){
                    count++;
                    break;
                }
            }
        }
        System.out.println(count);
    }
}