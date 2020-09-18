import java.util.*;

class first{
	


	public static void main(String args[]) {
		Scanner in = new Scanner(System.in);
		long n = in.nextLong();
		long c = 0;
		long i = 5;
		while(n/i>=1){
			c+=n/i;
			i = i*5;
		}
		System.out.println(c);
		
		

	
	}
}
  
