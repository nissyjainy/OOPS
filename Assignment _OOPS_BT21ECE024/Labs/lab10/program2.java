import mypackage.student;
//here we are importing the student class from my package and accessing the member variables of the class student ...
//WAP that import user defined package and access the member variable of classes that contained by
//package.

public class program2 {
  public static void main(String[] args) {
    student s1=new student("Nisarg", 20, 24, "ECE");
    System.out.println("Name "+s1.name);
    System.out.println("Age: "+s1.age);
    System.out.println("Rollno: "+s1.roll);
    System.out.println("Branch: "+s1.branch);


  }
   
}
