import java.lang.*;
import java.util.*;
class Devide
{
    void devide(int a,int b)
    {
        int c=a/b;
      System.out.println("This is devided="+c);
    }
public static void main(String [] args)
{
   Scanner s=new Scanner(System.in);
  System.out.println("Enter a  number");
  int x=s.nextInt();
   System.out.println("Enter a number");
   int y=s.nextInt();
   Devide obj=new Devide();
   obj.devide(x,y);
}
}
  
