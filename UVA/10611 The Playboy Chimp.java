import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;
import java.util.*;

public class Main {
	
	static int upper_bound(int hold[],int key) {
		int ub=-1;
		int mid;
		int begin=0,end=hold.length-1;
		while(begin<=end){
			mid=(begin+end)>>1;
			if(key==hold[mid]) {
				ub=mid;
				begin=mid+1;
			}
			else if(key>hold[mid])
				begin=mid+1;
			else if(key<hold[mid])
				end=mid-1;
		}
		if(ub==-1) {
			return begin;
		}
		return ub+1;
	}
	static int lower_bound(int hold[],int key) {
		int lb=-1;
		int mid;
		int begin=0,end=hold.length-1;
		while(begin<=end) {
			mid=(begin+end)>>1;
			if(key==hold[mid]) {
				lb=mid;
				end=mid-1;
			}
			else if(key>hold[mid])
				begin=mid+1;
			else if(key<hold[mid])
				end=mid-1;
		}
		if(lb==-1) {
			return end;
		}
		return lb-1;
	}
	
	public static void main(String[] args) throws Exception {
		
		Scanner ob=new Scanner(System.in);
		PrintWriter obj=new PrintWriter(new BufferedOutputStream(System.out));
		int n,q,key,arr[],lb,ub;
		
		n=ob.nextInt();
		
		arr=new int[n];
		for(int i=0;i<n;i++) {
			arr[i]=ob.nextInt();
		}
		
		q=ob.nextInt();
		
		while(q-->0) {
			key=ob.nextInt();
						
			lb=lower_bound(arr,key);
			ub=upper_bound(arr,key);
			
			obj.println(((lb<0)?"X":arr[lb])+" "+((ub>n-1)?"X\n":arr[ub]));			
		}
		obj.flush();
		obj.close();
	}

	static class Scanner {
		StringTokenizer st;
		BufferedReader br;
		
		public Scanner(InputStream s) {
			
			br=new BufferedReader(new InputStreamReader(s));
			st=new StringTokenizer("");
		} 
		
		public String next() throws IOException {
			while(st==null || !st.hasMoreTokens()) {
				st=new StringTokenizer(br.readLine());
			}
			return st.nextToken();
		}
		
		public int nextInt() throws IOException{
			return Integer.parseInt(next());
		}
		
		public long nextLong() throws IOException{
			return Long.parseLong(next());
		}
		
		public String nextLine() throws IOException{
			return br.readLine();
		}
		
		public double nextDouble() throws IOException{
			return Double.parseDouble(next());
		}
		
		public boolean ready() throws IOException{
			return br.ready();
		}
		
		public boolean nextEmpty() throws IOException
		{
			String s = br.readLine();
			st = new StringTokenizer(s);
			return s.isEmpty();
		}
	}
}
