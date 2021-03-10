import java.io.*;
import java.util.*;

public class Main
{
	public static ArrayList<Integer> removing(ArrayList<Integer> list, int n) { 
 	
 		ArrayList<Integer> newList = new ArrayList<Integer>();
 		int ctr=0;
 		for (Integer item: list) { 
       	if (++ctr % n != 0) {
             newList.add(item); 
        }
  		}
 		return newList;
	}
	public static void main(String[] args)
	{
		int i,n, temp,ctr,time,d;
		Scanner s = new Scanner(System.in);
		n = s.nextInt();
       	
       	ArrayList<Integer> mylist = new ArrayList<Integer>();
		
       	for(i=0;i<n;i++)
       	{
    		int j = s.nextInt();
    		mylist.add(j);
		}

		time=1;
		while(mylist.size()>time)
		{
			time+=1;
			mylist=removing(mylist,time);
      	}

      	for(Integer item:mylist)
      	{
      		System.out.print(item+" ");
      	}

	}
}