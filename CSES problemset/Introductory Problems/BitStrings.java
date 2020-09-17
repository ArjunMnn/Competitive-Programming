import java.util.*;

class first{
	public static long power(long pow,long mod){
		long ans=2;long num=2;
		pow-=1;
		while(pow>0)
		{
			if(pow%2!=0)
			{
				ans=ans*num%mod;
				pow-=1;
			}
			num=num*num%mod;
			pow/=2;
		}
		return ans;
	}


	public static void main(String args[]) {
		Scanner in = new Scanner(System.in);
		long n = in.nextLong();
		System.out.println(power(n,1000000007));
	}
}
