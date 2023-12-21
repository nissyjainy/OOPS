
// //WAP to design a class using abstract methods and classes.
// abstract class person{
//     String name=new String();
//     int age=0;
//     //abstract method
//     public abstract void display();
// }
// class student extends person{
//   int roll;
//   String branch=new String();
//   student(String name,int age,int roll,String branch)
//   {
//     this.name=name;
//     this.age=age;
//     this.roll=roll;
//     this.branch=branch;
//   }
//  public void display()
//  {
//    System.out.println("Name: "+name);
//    System.out.println("Age "+age);
//    System.out.println("RollNo "+roll);
//    System.out.println("Branch "+branch);

//  }
// }
// class employee extends person{
//     int employee_id;
//     String Department=new String();
//     employee(String name,int age,int employee_id,String Department)
//     {
//       this.name=name;
//       this.age=age;
//       this.employee_id=employee_id;
//       this.Department=Department;
//     }
//     public void display()
//     {
//         System.out.println("Name: "+name);
//         System.out.println("Age: "+age);
//         System.out.println("Employee_ID: "+employee_id);
//         System.out.println("Department: "+Department);
        
//     }
// }
// public class program2 {
//    public static void main(String[] args) {
//     student s=new student("Nisarg", 20, 24, "ECE");
//     s.display();
//     employee e=new employee("MANISH", 50, 99, "Marketing");
//     e.display();
//    }

    
// }
class student{
    int marks;
    String name;
    //constructor banavu chu hu ok 
    student(int marks , String name)
    {
      this.marks = marks;
      this.name = name;
    }
    void display()
    {
       System.out.println("Marks" + marks);
       System.out.println("Name" + name);
    }
}
public class program2{
   public static void main(String args[])
   {
       //create an object ok 
       student s1 = new student(90," Nisarg");
       s1.display();
   }
}