import java.lang.*;
import java.util.*;
class Designation
{
  boolean k=false;
  boolean valid (String desg)
  {
    switch(desg)
    {
       case "se":k=true;
                 break;
      case "te":k=true;
                 break;
    }
 return k;
  
}
}
class DesgVarify
{
  public static void main(String [] args)
   {
      Scanner s=new Scanner(System.in);
      System.out.println("Enter the desg");
      String desg=s.nextLine();
      Designation d1=new Designation();
     boolean k=d1.valid(desg);
     if(k)
       {
         System.out.println("Valid desg");
      }
    else
     {
      System.out.println("Invalid desg");
     }
  }
}
