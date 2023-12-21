package package2;
import mypackage.student;

public class program1 {
    student s1=new student("Nisarg", 20, 24, "ECE");
    String name=s1.name;
    String branch=s1.branch;
    int age=s1.age;
    int roll=s1.roll;
    int marks;
    public program1(int marks)
    {
        this.marks=marks;
    }
    public void calculate_grade()
    {
        if (marks>55) {
            System.out.println("Grade "+"A");
        }
        else
        {
            System.out.println("Grade "+"B");
        }
    }
    public void display()
    {
        System.out.println("Name: "+name);
        System.out.println("Age: "+age);
        System.out.println("Rollno: "+roll);
        System.out.println("Branch: "+branch);
    }
}
