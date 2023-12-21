import java.util.*;

public class Exception_handling {
    public static void main(String args[])
    {
          try{ 
           Scanner s1 = new Scanner(System.in);
           System.out.println("Enter the value of the integer A");
           int a = s1.nextInt();
           System.out.println("Enter the value of the integer B");
           int b = s1.nextInt();
           int c = a/b;
           System.out.println("The output of the a/b is" +c);
           int nums[] = new int[4];
           //type mare int che ne atle new int ok
           nums[1] = 10;
           
          }
          catch(ArithmeticException e)
          {
              System.out.println("Please do not divide by the value 0");
          }
          catch (ArrayIndexOutOfBoundsException e)
          {
              System.out.println("The limit is exceeded");
          }
          finally
          {
              System.out.println("This statemnet is run everytime");
          }
         

    }
}


