import java.lang.*;
import java.util.*;
class Arithmatic
{
   int a,b;
   void add()
   {
    int c=a+b;
    System.out.println("The sum is="+c);
    }
   void sub()
    {
     int d=a-b;
     System.out.println("The sub is="+d);
     }
    void mult()
     {
       int e=a*b;
      System.out.println("The multiplication="+e);
    }
    void devision()
    {
      int f=a/b;
       System.out.println("The devision="+f);
   }
  void mod()
   {
      int g=a%b;
     System.out.println("the remainder is="+g);
   }
}
class Calculator
{
   public static void main(String [] args)
    {
      Scanner s=new Scanner(System.in);
      System.out.println("Enter a number");
      int x=s.nextInt();
      System.out.println("Enter a number");
     int y=s.nextInt();
      Arithmatic r=new Arithmatic();
      r.a=x;
      r.b=y;
     System.out.println("Enter your choice");
     int choice=s.nextInt();
    boolean k=true;
   while(k)
    {
      System.out.println("1:addition");
      System.out.println("2:subtraction");
      System.out.println("3:multiplication");
      System.out.println("4:Division");
      System.out.println("5:modulus");
      System.out.println("6:exit");
     switch(choice)
     {
       case 1:r.add();
              break;
       case 2:r.sub();
               break;
       case 3:r.mult();
              break;
      case 4:r.devision();
             break;
      case 5:r.mod();
              break;
     case 6:exit(false);
      default:System.out.println("Invalid choice");
     }
}
}
}
