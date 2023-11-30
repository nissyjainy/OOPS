import java.util.*;

// import java.util.Scanner;
 class student {
        int age;
        String name;

        student(int age, String name) {
            this.age = age;
            this.name = name;
            // jo bhai je hisab thi tu kare che ae bahuj saru che ok
            // aa che ne tare inheritance kare che ok to kar ok

        }

    }

    class exam extends student {
        int marks;

        // constructuctor tu je bana ve che aema
        exam(int age, String name, int marks) {
            super(age, name);
            this.marks = marks;

        }
    }

    class roll extends exam
    {
        int roll;
        roll(int age,String name,int marks,int roll)
        {
            super(age,name,marks);
            this.roll = roll;
        }
        void display()
        {
            //ahiya che ne tu display normal kari de tu ok done
            // ke koi tare function hoy ae tu kari de ok 
            System.out.println(age);
            System.out.println(name);
            System.out.println(marks);
            System.out.println(roll);
        }
    }


public class inheritance {
    public static void main(String[] args) {
         Scanner s1 = new Scanner(System.in);
    System.out.println("Enter the age of the student");
    int age = s1.nextInt();
     System.out.println("Enter the name of the student");
    String name = s1.nextLine();   
     System.out.println("Enter the marks of the student");
     int marks = s1.nextInt();
      System.out.println("Enter the roll of the student");
      int roll = s1.nextInt();
      s1.close();
      roll r1 = new roll (age,name,marks,roll);
    //   r1.display();
    // ke tari perimeter etc bhi call kari shake che tu ok 
    System.out.println(r1.age);
    System.out.println(r1.name);
   
    }
    

     


}
   