import java.util.*;
public class coder {
	private static int n;
	public static void main(String[] args) {
		Scanner ob=new Scanner(System.in);
		n=ob.nextInt();
		System.out.println((int)Math.ceil(n*n/2.0));
		String str1="",str2="";
		for(int i=n;i-->0;) {
			str1+= ( (i&1) == 0) ? "C" : ".";
		}
		for(int i=n;i-->0;) {
			str2+=( (i&1) == 0) ? "." : "C";
		}
		for(int i=n;i-->0;) {
			System.out.println( ( (i&1) == 0) ? str1 : str2);
		}
	}
 
}
