import java.lang.*;
import java.util.Scanner;
public class per
{
   public static void main(String [] args)
    {
      Scanner s=new Scanner(System.in);
      System.out.println("Enter Student name:");
      String name=s.nextLine();
     System.out.println("Enter Student Branch:");
      String br=s.nextLine();
     System.out.println("Enter Rollno:");
     int  rn=s.nextInt();
     System.out.println("Enter marks1:");
     float  sub1=s.nextFloat();
     System.out.println("Enter marks2:");
     float  sub2=s.nextFloat();
     System.out.println("Enter marks3:");
     float  sub3=s.nextFloat();
     System.out.println("Enter marks4:");
     float  sub4=s.nextFloat();
     System.out.println("Enter marks5:");
     float  sub5=s.nextFloat();
    System.out.println("Enter marks6:");
     float  sub6=s.nextFloat();
    System.out.println("name="+name);
    System.out.println("Branch="+br);
    System.out.println("Rollno="+rn);
    System.out.println("sub1="+sub1);
    System.out.println("sub2="+sub2);
   System.out.println("sub3="+sub3);
   System.out.println("sub4="+sub4);
    System.out.println("sub5="+sub5);
     System.out.println("sub6="+sub6);
    float total=(sub1+sub2+sub3+sub4+sub5+sub6);
    float per=total/6 ;
    System.out.println("Total="+total);
    System.out.println("per="+per);
  if(per>=70 && per<=100)
    {
      System.out.println("Distnction="+per);
   }
 else  if(per>=60 && per<70)
    {
      System.out.println("1st Class="+per);
   }
 else if(per>=50 && per<60)
    {
      System.out.println("2nd class="+per);
   }
else if(per>=35 && per<50)
    {
      System.out.println("3rd class="+per);
   }
 else
    {
      System.out.println("failed");
   }

}

}

