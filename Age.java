import java.lang.*;
import java.util.*;
public class Age
{
  public static void main(String [] args)
   {
     Scanner s=new Scanner(System.in);
    System.out.println("Enter age of a person");
    float age=s.nextFloat();
   if(age<0)
     {
           System.out.println("Entered age is invalid");
         
     }
  else if(age>=0 && age<=12)
          {
            System.out.println("This is childhood");
         }
   else if(age>12 && age<=19)
     {
       System.out.println("This is teenager");
    }
  else if(age>=20 && age<=35)
    {
      System.out.println("This is younger");

    }
  else if(age>=36 && age<=60)
    {
      System.out.println("This is middle age");
    }
   else
     {
        System.out.println("This is old age");
     }
  }
}
