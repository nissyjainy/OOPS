import java.io.File;
// import java.util.*;
public class File_handling {
    public static void main(String[] args) {
        File f = new File("C:\\Users\\nisar\\OneDrive\\Desktop\\Nisarg.txt");
        if(f.exists())
        {
              System.out.println("File Name" +f.getName());
              System.out.println("File location" +f.getAbsolutePath());
              System.out.println("File write" +f.canWrite());
               System.out.println("File read" +f.canRead());
               System.out.println("File length" +f.length());
        }
        else
        {
            System.out.println("File does not exists");
        }
    }  

}
