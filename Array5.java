package arrays;
import java.util.*;
class Address1
{
   String hno,sname,city;
    Address1(String hno,String sname,String city)
      {
         this.hno=hno;
         this.sname=sname;
         this.city=city;
      }
    public String toString()
       {
           return "\n hno="+hno+"\n sname="+sname+"\n city="+city;
        }
    }
class Studata
{
   String name,rno;
   Studata(String name,String rno)
    {
       this.name=name;
      this.rno=rno;
   }
  public String toString()
    {
        return "\n name="+name+"\n rno="+rno;
   }
}
public class Array5
{
 public static void main(String [] args)
  {
    Scanner s=new Scanner(System.in);
   System.out.println("Enter the studata");
   System.out.println("Enter the name");
    String name=s.nextLine();
   System.out.println("Enter the rno");
   String rno=s.nextLine();
   Studata a1=new Studata(name,rno);
  System.out.println("Enter the hno");
  String hno=s.nextLine();
  System.out.println("Enter sname");
  String sname=s.nextLine();
  System.out.println("Enter city name");
  String city=s.nextLine();
  Address1 a2=new Address1(hno,sname,city);
  Object o[]={a1,a2};
  System.out.println("...Dis studata...");
  for(Object k : o )
    {
         System.out.println(k+" ");
    }
 s.close();
}
}
