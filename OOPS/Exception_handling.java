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
           
          }
          catch(Exception e)
          {
              System.out.println("Please do not divide by the value 0");
          }
          finally
          {
              System.out.println("This statemnet is run everytime");
          }
         

    }
}


