import java.lang.*;
import java.util.*;
public class Even1
{
  public static void main(String [] args)
   {
     Scanner s=new Scanner(System.in); 
     System.out.println("Enter a number");
     int n=s.nextInt();
    int i=0;
 if(n>=0)
   {
     while(i<=n) 
       {
        if(i%2==0)
        {
         System.out.println("Even Number is="+i);
       }
         i=i+1;
       }
}
else
  {
     System.out.println("Entered number is invalid");
}
}}
