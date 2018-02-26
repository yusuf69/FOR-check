import java.lang.*;
import java.util.*;
 class Calculate
{
    float cal(float bsal)
     {
       float totalsal=0;
      totalsal+=bsal+0.78f*bsal+0.67f*bsal;
      return (totalsal);
    }
   
}
class Increament
{
   
   float inc(float totalsal,float bsal)
     {
        float incsal=0;   
        if(totalsal<=25000)
          {
              incsal+=totalsal+0.18f*bsal;
          }
        else
         {
             incsal+=totalsal+0.23f*bsal;
         }
      return  (incsal);
    }
}
 class Display
{
    void display(float bsal,float totalsal,float incsal)
     {
       System.out.println("Bsal is="+bsal);
       System.out.println("Totalsal is="+totalsal);
       System.out.println("incsal is="+incsal);
     }
}
class Salary
{
   public static void main(String [] args)
     {
        Scanner s=new Scanner(System.in);
        System.out.println("Enter bsal");
       float a=s.nextFloat();
    if(a>=5000)
    {
      Calculate c=new Calculate();
      float k= c.cal(a);
     Increament c1=new Increament();
      float z=c1.inc(a,k);
     Display d=new Display();
     d.display(a,k,z);
   }
 else
   {
     System.out.println("Invalid amount");
   }
}    
} 
