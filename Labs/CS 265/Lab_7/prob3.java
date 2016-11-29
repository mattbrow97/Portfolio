//Matthew Brower
//Proublem 3 Lab7
//11/6/16
//Java
import java.io.* ;

public class prob3
{

    public static void main( String[] args )
	 {
		int year = Integer.parseInt(args[0]);

		if(year%4==0)
		{
			if(year%400==0)
			{
				System.out.println("leap year!");
			}
			else if(year%100==0)
			{
				System.out.println("not a leap year!");
			}
			else
			{
				System.out.println("leap year!");
			}
		}
		else
		{
			System.out.println("not a leap year!");
		}
	 }	 
} //class prob3
