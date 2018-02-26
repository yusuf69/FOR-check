import java.lang.*;
import java.util.Scanner;
public class Emp
{
  public static void main(String [] args)
   {
    Scanner s=new Scanner(System.in);
    System.out.println("Enter employee name:");
    String name=s.nextLine();
    System.out.println("Enter ID:");
    String Id=s.nextLine();
    System.out.println("Enter designation:");
    String desig=s.nextLine();
   System.out.println("Enter bsal:");
    float bsal=s.nextFloat();
   System.out.println("Total salary:");
   double HRA=bsal*0.86;
   double DA=bsal*0.93;
   double totalsal=bsal+HRA+DA;
   System.out.println("name="+name);
   System.out.println("Id="+Id);
  System.out.println("Desig="+desig);
  System.out.println("bsal="+bsal);
   System.out.println("Totalsal="+totalsal);
   }
}
