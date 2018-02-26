import java.lang.*;
import java.util.*;
public class Factor
{
  public static void main(String [] args)
  {
   Scanner s=new Scanner(System.in);
   System.out.println("Enter a number");
   int n=s.nextInt();
   int i;
   int count=0;
 for(i=1;i<=n;i++)
   {
     if(n%i==0)
        {
           System.out.println("Factor of number="+i);
           
          count++;
        }
  
   }
 System.out.println("Number of facto="+count);
}
}
