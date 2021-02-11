import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the bfs function below.
    static int[] bfs(int n, int m, int[][] edges, int s) {
        int[] ans=new int[n-1];
        boolean[] visited =new boolean[n];
        int[] distance=new int[n];
        
        ///adj list creation
        ArrayList<ArrayList<Integer>> adj = new ArrayList<ArrayList<Integer>>(n+1);
        for(int j=0;j<=n;j++){
            adj.add(new ArrayList<Integer>());
        }
        
        for(int j=0;j<m;j++){
            System.out.println(edges[j][0]);
            adj.get(edges[j][0]).add(edges[j][1]);
            adj.get(edges[j][1]).add(edges[j][0]);
            
        }
        
        //actual bfs
        Queue<Integer> q=new LinkedList<>();
        q.add(s);
        int dist=1;
        while(!q.isEmpty()){
            visited[s-1]=true;
            int x=q.peek();
            
            q.remove();
            for(int i=0;i<adj.get(x).size();i++){
                if(!visited[adj.get(x).get(i)-1]){
                    distance[x-1]=dist;
                    q.add(adj.get(x).get(i));
                }
            }
            dist++;
        }
        for(int i=0;i<s-1;i++){
            ans[i]=distance[i];
        }
        for(int i=s;i<n;i++){
            ans[i-1]=distance[i];
        }
        return ans;

    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int q = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int qItr = 0; qItr < q; qItr++) {
            String[] nm = scanner.nextLine().split(" ");

            int n = Integer.parseInt(nm[0]);

            int m = Integer.parseInt(nm[1]);

            int[][] edges = new int[m][2];

            for (int i = 0; i < m; i++) {
                String[] edgesRowItems = scanner.nextLine().split(" ");
                scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

                for (int j = 0; j < 2; j++) {
                    int edgesItem = Integer.parseInt(edgesRowItems[j]);
                    edges[i][j] = edgesItem;
                }
            }

            int s = scanner.nextInt();
            scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

            int[] result = bfs(n, m, edges, s);

            for (int i = 0; i < result.length; i++) {
                bufferedWriter.write(String.valueOf(result[i]));

                if (i != result.length - 1) {
                    bufferedWriter.write(" ");
                }
            }

            bufferedWriter.newLine();
        }

        bufferedWriter.close();

        scanner.close();
    }
}
