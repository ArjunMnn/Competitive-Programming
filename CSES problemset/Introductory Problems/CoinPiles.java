import java.io.*;
import java.util.*;

class first{
	


	public static void main(String args[]) throws IOException{
		BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
	
	
		long n = Long.parseLong(input.readLine());
		for(long i = 0;i<n;i++){
		
		String line = input.readLine();
		String[] splitLine = line.split(" ");
		long a = Long.parseLong(splitLine[0]);
		long b = Long.parseLong(splitLine[1]);
		if(a<b){
			long temp = a;
			a = b;
			b = temp;
		}
		if(a>2*b){
			System.out.println("NO");
		}
		else{
			a = a%3;
			b = b%3;
			if(a<b){
				long temp = a;
				a = b;
				b = temp;
			}
			if((a==2 && b == 1) || (a == 0 && b == 0)){
				System.out.println("YES");
			}
			else{
				System.out.println("NO");
			}
		}
		}
		
		
		

	
	}
}
  
