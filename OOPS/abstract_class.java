
 abstract class parent {

    abstract void carrer(String name);
    abstract void age(int n);
}
// have tu che ne inherit kar son ane daughter class ok 
class son extends parent
{
    @Override
    void carrer(String name)
    {
        System.out.println("I am going to be " + name);
    }
    void age(int n)
    {
        System.out.println("I am going to be of the following age " + n);
    }
}
class daughter extends parent
{
    @Override
    void carrer(String name)
    {
        System.out.println("I am going to be " + name);
    }
    void age(int n)
    {
        System.out.println("I am going to be of the following age " + n);
    }
}
public class abstract_class {
    public static void main(String args[])
    {
         //have tu che ne new object banay ok 
         son s = new son();
         s.carrer("doctor");
         // tare string che ne to tare " " aavshe ok 
         // same with daughter tare ok done

    }
}
