import java.io.*;
import java.util.*;


class Main {

	public static int randomnumber(double x)
	{
		if(x>=0.5)
			return 1;
		else
			return 0;
	}

	public static void main(String[] args)
	{
		
		int attendance[][] = new int[3][];

		double percentage[] = new double[3];

		attendance[0] = new int[12];

		attendance[1] = new int[10];

		attendance[2] = new int[8];

		int count = 0;

		//random filling of attendance data for a student 

		for (int i = 0; i < attendance.length; i++)
			for (int j = 0; j < attendance[i].length; j++)
			{
				attendance[i][j]= randomnumber(Math.random());
				
			}

		//Printing 

		for (int i = 0; i < attendance.length; i++) 
		{
			percentage[i]=0;
			for (int j = 0; j < attendance[i].length; j++)
			{
				System.out.print(attendance[i][j] + " ");
				percentage[i]+=attendance[i][j];
			}
			System.out.println(" ");
			percentage[i]=percentage[i]/attendance[i].length;
		}

		System.out.println("\n\n");

		for(int i=0;i<percentage.length;i++)
		{
			System.out.print("Percentage for "+i+"th :"+ percentage[i]+"\n");
		}
	}
}
