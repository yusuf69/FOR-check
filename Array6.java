package arrays;
import java.util.*;
class Address
{
  String hno,sname,city;
  Address(String hno,String sname,String city)
  {
    this.hno=hno;
   this.sname=sname;
  this.city=city;
 }
 public String tostring()
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
 public String tostring()
  {
    return "\n name="+name+"\n rno="+rno;
  }
}
public class Array6
{
  public static void main(String [] args)
  {
    Scanner s=new Scanner(System.in);
    System.out.println("Enter the studata");
    System.out.println("Enter name ");
    String name=s.nextLine();
    System.out.println("Enter rno");
    String rno=s.nextLine();
     Studata a1=new Studata(name,rno);
    System.out.println("Enter hno");
    String hno=s.nextLine();
    System.out.println("Enter sname");
    String sname=s.nextLine();
    System.out.println("Enter city");
    String city=s.nextLine();
    Address a2=new Address(hno,sname,city);
    Object o[]={a1,a2};
   System.out.println("Student data");
   for(Object k : o )
     {
       System.out.println(k+" ");
      }
   s.close();
}
}
