public class FrequencyofEach {
    public static void main(String[] args) {
        int c=0;
        int len=0;
        String s1="poppins are in my bag";
        s1=s1.toUpperCase();
        len=s1.length();
        for(char j='A';j<='Z';j++)
        {
            c=0;
            for(int i=0;i<len;i++)
            {
                char k=s1.charAt(i);
                if(k==j)
                c++;
            }
            if(c>0)
            System.out.println("The frequency of "+j+" is "+c);
        }

    }    
}