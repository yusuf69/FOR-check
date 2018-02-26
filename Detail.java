import java.lang. *;
import java.util.*;
public class Detail
{
    public static void mian(String [] args)
    {
      Scanner s=new Scanner(System.in);
      System.out.println("ENter name of studnet:");
      String Sname=s.nextLine();
      System.out.println("Enter rollno :");
     int rno=s.nextInt();
      System.out.println("Enter branch:");
      String br=s.nextLine();

     System.out.println("Enter Hindi:");
     int a=s.nextInt();
   System.out.println("Enter English:");
     int b=s.nextInt();
  System.out.println("Enter Physics:");
     int c=s.nextInt();
 System.out.println("Enter Chemistry:");
     int d=s.nextInt();
 System.out.println("Enter Maths:");
     int e=s.nextInt();
System.out.println("Enter social:");
     int f=s.nextInt();
  float total=(a+b+c+d+e+f);
System.out.println(total);
  
}
}
