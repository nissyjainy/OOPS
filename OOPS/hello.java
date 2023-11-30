
// /// atle mare che en badhu j import karvu padshe ok 
// package first;
// public class hello
// {
//       // je folder ma hoy ae lakh ok 
//       public static void main(String[] args) {
//            System.out.println("Hi , Nisarg");
           
//       }

// }
public class hello{
    
   int age;
   String name;
   static long population;
   //constructor call kar ok 
   hello(int age , String name)
   {
       this.age = age;
       this.name = name;
       hello.population+=1;
   }

   public static void main(String args[])
   // ahiya hu shu kau chu tare che ne je tu main class banave che ne aeni andar j tare main walu function lakh ok please
   {
       hello nisarg = new hello(21, "Nisarg");
       hello manish = new hello(50, "manish");
       System.out.println(nisarg.age);
       System.out.println(manish.name);
       System.out.println(hello.population);

   }
}
