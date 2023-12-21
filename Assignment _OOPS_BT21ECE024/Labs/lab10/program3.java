import java.util.*;
//WAP that shoe the partial implementation of Interface.
interface vechile{
    public void display();
}
class bike implements vechile{
    String name=new String();
    int price;
    bike(String name,int price)
    {
        this.name=name;
        this.price=price;
    }
  public void display()
  {
      System.out.println("Name: "+name);
      System.out.println("PRice: "+price);

  }
}
class car implements vechile{
     String name=new String();
    int price;
    car(String name,int price)
    {
        this.name=name;
        this.price=price;
    }
  public void display()
  {
      System.out.println("Name: "+name);
      System.out.println("PRice: "+price);

  }

}
public class program3 {
    public static void main(String[] args) {
        car c=new car("BMW",3500000);
        bike b=new bike("Bullet", 170000);
        c.display();
        b.display();
    }
}
