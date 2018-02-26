import java.lang.*;
import java.util.*;
class Increament
{
   
  static float add(int x,int y)
   {
      float avg=(float)(x+y)/2 ;
      return (avg);
   }
}
class Static1
{
 public static void main(String [] args)
  {
    Scanner s=new Scanner(System.in);
    System.out.println("Entered number is n");
    int a=s.nextInt();
    System.out.println("Entered number is n");
    int b=s.nextInt();
    float k=Increament.add(a,b);
    System.out.println("The increamented number is="+k);
  }
}
