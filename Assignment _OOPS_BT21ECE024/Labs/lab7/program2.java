
// import java.util.*;
// public class program2 {
//     public static void main(String[] args) {
//         try {
//             Scanner s1=new Scanner(System.in);
//             System.out.println("enter the values");

//             int a=s1.nextInt();
//             int b=s1.nextInt();
//             int c=a/b;
//             System.out.println("value: "+c);
//         } catch (Exception e) {
//             System.out.println("please don't divide any number by zero");
//             //catch block tare che ne error mate hoy che ok 
//         }
//         finally{
//             System.out.println("Program executed Successfully");
//         }
//     }
// }


import java.util.*;


public class program2
{
    //have che ne tu 2 number input le ok ane pachi tu aa kar ok 
    public static void main(String[] args) {
        try
        {
         Scanner s1 = new Scanner(System.in);
         System.out.println("Enter the 2 numbers");
         int a = s1.nextInt();
         int b = s1.nextInt();
         int c = a/b;
         System.out.println("The value of c is"+c);
        }
        catch(Exception e)
        {
            System.out.println("Error is there");
        }
        finally
        {
            System.out.println("Successfully executed");
        }
         
    }
    
   

}
