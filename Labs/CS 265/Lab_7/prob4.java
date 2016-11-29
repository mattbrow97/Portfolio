//Matthew Brower
//Proublem 4 Lab7
//11/6/16
//Java
import java.io.* ;
import java.util.Date;
import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.Calendar;
public class prob4
{
	
    public static void main( String[] args )
	 {
		Date date= new Date();
	//	Date date2 = new Date(long millisec);
		int input = Integer.parseInt(args[0]);
		long dates = date.getTime();
		switch(input)
		{
			case 0:
				System.out.println(date.getTime());
				break;
			case 1:
				dates=dates/1000;
				System.out.println(dates);
				break;
			case 2:
				dates=dates/86400000;
				System.out.println(dates);
				break;
			case 3:
				System.out.println(date);
				break;
		}
	 }	 
} //class prob4
