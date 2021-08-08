 
import java.util.*;
 
public class Prime {
 
public static void main(String[] args) {
	
		Scanner sc= new Scanner(System.in);
		int n=sc.nextInt();
		
		Node[] vertices = new Node[n+1]; //0 to n; 0 left out; 1 to n;
		
		for(int i=1; i<=n ; i++)
			vertices[i]= new Node();
		
		for(int i=1; i<=n-1; i++) {
			int parentindex=sc.nextInt();
			vertices[i+1].Parent=vertices[parentindex];
			vertices[parentindex].children.add(vertices[i+1]);
		}
		
		boolean isspruce=true;
		
		for(int i=1; i<=n && isspruce; i++) {
			ArrayList<Node> children_holder = vertices[i].children;
			if(children_holder.size()>0) {
				if(children_holder.size()>=3) {
					int leafcount=0;
					for(int j=0; j<children_holder.size() && leafcount < 3 ; j++) {
						Node currentchild=children_holder.get(j);
						if(currentchild.children.size()==0)
							leafcount++;
					}
					if(leafcount<3)
						isspruce = false;
				}
				else 
					isspruce = false;
			}
		}
		
		System.out.println(isspruce?"Yes":"No");
		sc.close();
	}
 
	static class Node{
		Node Parent;
		ArrayList<Node> children;
		Node(){
			children = new ArrayList<Node>();
		}
	}
}
