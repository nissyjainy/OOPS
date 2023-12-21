//WAP to create a simple class to find out the area and perimeter of rectangle and box using super and
//this keyword.
import java.util.*;
public class program1 {
    public static void main(String[] args) {
        Scanner s1=new Scanner(System.in);
       
        System.out.println("enter length and breadth");
        int l=s1.nextInt();
        int b=s1.nextInt();
        s1.close();
        rectangle r=new rectangle(l, b);
        r.area();
        r.perimeter();

    }
}
class length{
    int l;
    length(int k)
    {
        this.l=k;
    }
    void display()
    {
        System.out.println("the value of lenght is: "+l);
    }
}
class rectangle extends length{
    int b;
   
    rectangle(int k,int m)
    {
        super(k);
        this.b=m;
    }
    void perimeter()
    {
        int p=2*(l+b);
        System.out.println("perimeter: "+p);
    }
    void area()
    {
        int a=l*b;
        System.out.println("Area: "+a);
    }
}
