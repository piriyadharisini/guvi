import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		String s1,s2; int n,count=0;
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		List<String> list=new ArrayList();
		while(n--!=0)
		{
		    String s=sc.next();
		    list.add(s);
		}
		Collections.sort(list);
		Iterator it=list.iterator();
		s1=(String)it.next();// System.out.println(s1+"..");
		while(it.hasNext()){
		    s2=(String)it.next();//  System.out.println(s2+"..");
		    if(s1.compareTo(s2)!=0)
		       {s1=s2;  count=0;}
		    else
		        {
		            if(count==0){
		                System.out.println(s2);
		                count=1;
		                s1=s2;
		            }
		        }
		}
		
	}
}
