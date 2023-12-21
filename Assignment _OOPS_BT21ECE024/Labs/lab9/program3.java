
import java.util.Scanner;

class Mystring {
    private String str;

    Mystring(String str) {
        this.str = str;
    }

    String concat(String s) {
        return str + s;
    }

    int length() {
        return str.length();
    }

    int index_finder(char b) {
        return str.indexOf(b);
    }

    String substr() {
        System.out.println("please provide the starting and index for the substring");
        System.out.println("enter starting index");
        Scanner s1 = new Scanner(System.in);
        int a = s1.nextInt();
        System.out.println("Please provide ending index");
        int b = s1.nextInt();
        s1.close();
        String p = str.substring(a, b);
        return p;
    }

    boolean comparator(String s) {
        if (str ==s) {
            return true;
        }
        else{
            return false;
        }
        
    }
}

public class program3 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter the String");
        String p = s.nextLine();
        Mystring s1 = new Mystring(p);
        System.out.println(s1.length());
        System.out.println(s1.concat("Agarwal"));
        System.out.println(s1.index_finder('s'));
        System.out.println(s1.comparator("sujal"));
        String n = s1.substr();
        System.out.println(n);

    }
}
