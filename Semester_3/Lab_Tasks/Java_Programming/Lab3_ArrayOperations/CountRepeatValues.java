public class CountRepeatValues{
    public static void main(String[] args){
        int arr[]={2,4,5,2,3,4,7,2,5};
        int n=arr.length;
        System.out.print("Array values: ");
        for(int i=0;i<n;i++) System.out.print(arr[i]+" ");

        boolean visited[]=new boolean[n];

        System.out.println("\n\nElement Frequencies:");
        for(int i=0;i<n;i++){
            if(visited[i]) continue;
            int c=1;
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    visited[j]=true;
                    c++;
                }
            }
            System.out.println(arr[i]+" occurs "+c+" times");
        }
    }
}
