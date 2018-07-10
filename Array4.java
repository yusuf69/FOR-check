package arrays;
import java.util.*;
class Studata
{
   String name,rno;
  Studata(String name , String rno)
   {
      this.name=name;
       this.rno=rno;
   }
 public String toString()
   {
     return "\n name="+name+"\n rno ="+rno;
  }
}
public class Array4
{
public static void  main(String [] args)
{
   Scanner s=new Scanner(System.in);
   System.out.println("Enter the no of student");
   int n=s.nextInt();
   Studata a[]=new Studata[n];
  System.out.println("..Enter the student data..");
 for(int i=0;i<a.length;i++)
   {
      
     
      System.out.println("Enter student name");
      String name=s.nextLine();
       System.out.println("Enter the rno");
      String rno=s.nextLine();
     a[i]=new Studata(name,rno);
  }
  System.out.println("Dis student ");
   for(Studata k : a )
   {
     System.out.println(k+"  ");
  }
  { 
    s.close();
  }
}
}
