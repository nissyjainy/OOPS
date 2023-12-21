
import java.util.*;

public class program1 {
    public static void main(String[] args) {
        try {
            int[] numbers = new int[10];
            System.out.println("enter the values in the array");
            Scanner s1 = new Scanner(System.in); //cin che tare ok 
            for (int i = 0; i < 10; i++) {
                int b = s1.nextInt();
                numbers[i] = b;
            }
            System.out.println("enter the index :");
            int p = s1.nextInt();
            s1.close();
            System.out.println("value: "+numbers[p]);

        } catch (Exception e) {
            System.out.println("you are try to access the memory out of index");
        } finally {
            System.out.println("program executed successfully");
        }
    }
}
