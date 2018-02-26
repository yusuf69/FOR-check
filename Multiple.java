import java.lang.*;
import java.util.*;
class Multiple
{
   void multi(int a,int b)
   {
     int c=a*b;
   System.out.println("This is multiple="+c);
  }
public static void main(String [] args)
 {
    Scanner s=new Scanner(System.in);
    System.out.println("Enter a number");
    int x=s.nextInt();
    System.out.println("Enter a number");
    int y=s.nextInt();
    Multiple obj=new Multiple();
    obj.multi(x,y);
 }
}
