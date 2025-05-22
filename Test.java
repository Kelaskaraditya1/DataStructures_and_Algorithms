
import java.util.*;

import org.xml.sax.HandlerBase;
class Test{
    static int minimumSteps(int a,int b,int c){
        List<Integer> list = List.of(a,b,c);
        List<Integer> result = new ArrayList<>(list);
        Collections.sort(result);
        if(a==b && b==c && a==c)
            return 0;
        int steps =0;
        while(result.get(0)!=result.get(1) && result.get(1)!=result.get(2) && result.get(0)!=result.get(2)){
            result.set(0,list.get(0)+1);
            result.set(1, list.get(1)+1);
            result.set(2, list.get(2)-1);
            System.out.println(result.get(0)+" "+result.get(1)+" "+result.get(2));
            Collections.sort(result);
            steps=steps+1;

            if((result.get(0)==result.get(1)&&result.get(1)+1==result.get(2))||(result.get(1)==result.get(2)&&result.get(0)+1==result.get(1)))
            return -1;
        }
        return steps;
    }

    static void sort(int[] array){
        for(int i=0;i<3;i++){
            for(int j=i+1;j<3;j++){
                if(array[i]>array[j]){
                    int tmp = array[i];
                    array[i]=array[j];
                    array[j]=tmp;
                }
            }
        }
    }

    static int minimumStepsRequired(int a, int b , int c){
        if(a==b && b==c && a==c)
        return 0;

        int steps = 0; 
        int array[] ={a,b,c};
        sort(array);
        while(true){
            array[0]++;
            array[1]++;
            array[2]--;
            sort(array);
            steps++;

            if(array[0]==array[1] && array[1]==array[2] && array[0]==array[2])
            return steps;

            if((array[0]==array[1] && array[1]+1==array[2])||(array[1]==array[2] && array[0]+1==array[1]))
            return -1;
        }
    }

    static boolean palindrome(int no){
        int org = no;
        int rev=0;
        while(no!=0){
            rev=(rev*10)+no%10;
            no=no/10;
        }
        return org==rev;
    }

    static void countOccurances(List<Integer> list){
        Map<Integer,Integer> map = new HashMap<>();
        for (Integer integer : list) {
            map.put(integer,map.getOrDefault(integer,0)+1);            
        }

        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            System.out.println(entry.getKey()+" "+entry.getValue());
        }

    }

    // static String countOccurance(String str){

    //     boolean allRepeating = false;

    //     if(str.isEmpty()||str==null)
    //     return "Invalid Empty";

    //     Map<Character,Integer> count = new HashMap<>();
    //     Map<Character,Integer> index = new HashMap<>();
    //     Map<Character,Integer> same = new HashMap<>();
    //     for(int i=0;i<str.length();i++){
    //         count.put(str.charAt(i),count.getOrDefault(str.charAt(i),0)+1);
    //         if(!index.containsKey(str.charAt(i)))
    //         index.put(str.charAt(i), i);
    //     }

    //     int max_appearance = Integer.MIN_VALUE;
    //     char max_appearance_char='\0';

    //     for(Map.Entry<Character,Integer> pair:count.entrySet()){
    //         if(pair.getValue()>max_appearance){
    //             max_appearance_char=pair.getKey();
    //             max_appearance=pair.getValue();
    //         }else if(pair.getValue()==max_appearance)
    //             same.put(pair.getKey(),index.get(pair.getKey()));
    //     }

    //     for(Map.Entry<Character,Integer> pair:count.entrySet()){

    //     }

    // }

    static void printDetails(Map<String,Integer> map,int income){

        int totalExpenditure = 0;
        for(Map.Entry<String,Integer> pair:map.entrySet())
        totalExpenditure+=pair.getValue();

        System.out.println("Total Income:"+income);
        System.out.println("Total Expenditure:"+(totalExpenditure));
        System.out.println("Total Scvings:"+(income-totalExpenditure));

        System.out.println("Expenditure:");

        for(Map.Entry<String,Integer> pair:map.entrySet())
        System.out.println(pair.getKey()+" : "+pair.getValue());


    }

    static int getCount(int[] array,int no,int x,int y){
        int count = 0;
        for(int i=0;i<no;i++){
            for(int j=0;j<no;j++){
                if(array[i]*10+array[j]>=x&&array[i]*10+array[j]<=y)
                count++;
            }
        }
        return count;
    }

    static boolean isPrime(int no){
        if(no==2||no==3)
        return true;
        for(int i=2;i<=Math.sqrt(no);i++){
            if(no%i==0)
            return false;
        }
        return true;
    }

    static int sumOfPrimes(int upper){
        int sum = 0;
        for(int i=2;i<=upper;i++){
            if(isPrime(i))
            sum+=i;
        }
        return sum;
    }



    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

    // int testCases = s.nextInt();

    // while(testCases!=0){
    //     System.out.println("Enter a");
    //     int a = s.nextInt();
    //     System.out.println("Enter b");
    //     int b = s.nextInt();
    //     System.out.println("Enter c");
    //     int c = s.nextInt();
    //     System.out.println(minimumSteps(a,b,c));
    //     testCases--;
    // }

    // int i = s.nextInt();
    // int j = s.nextInt();
    // int sum = 0;
    // if((i!=0 && j!=0)&&(i<10000)&&(j<10000)){
        
    // for(int k=i;k<=j;k++)
    //     sum+=k;
    // }

    // System.out.println("Sum of all numbers between "+i+" and "+j+" is: "+sum);

    // int no = s.nextInt();
    // if(palindrome(no))
    //     System.out.println("Palindrome");
    // else
    //     System.out.println("Not a Palindrome");

    // }
    // List<Integer> list = new ArrayList<>();
    // for(int i=0;i<no;i++){
    //     list.add(s.nextInt());
    // }

    // countOccurances(list);

    // int a = 99,b=20;
    // a=a+b;
    // b=a-b;
    // a=a-b;

    // System.out.println("a: "+a+" b: "+b);

    // while(no!=0){
    //     int a = s.nextInt();
    //     int b = s.nextInt();
    //     int c = s.nextInt();
    //     System.out.println("The minimum steps required:"+minimumStepsRequired(a, b, c));
    //     no--;
    // }

    // String str = "helloworld";
    // Map<Character,Integer> map = new HashMap<>();
    // Map<Character,Integer> index = new HashMap<>();
    // for(int i=0;i<str.length();i++){
    //     map.put(str.charAt(i), map.getOrDefault(str.charAt(i),0)+1);
    //     if(!index.containsKey(str.charAt(i)))
    //         index.put(str.charAt(i), i);
    // }
    
    // for(Map.Entry<Character,Integer> pair:map.entrySet()){
    //     System.out.println("Charecter:"+pair.getKey()+" "+"Occurance:"+pair.getValue());
    // }

    // for(Map.Entry<Character,Integer> pair:index.entrySet()){
    //     System.out.println("Charecter:"+pair.getKey()+" "+"Index:"+pair.getValue());
    // }


    // Map<String,Integer> map = new HashMap<>();
    // System.out.println("Enter Income:");
    // int income = s.nextInt();

    // System.out.println("Enter Expenditure");
    // String expenditure = s.next();
    // while(!expenditure.equals("Done")||!expenditure.equals("DONE")||!expenditure.equals("done")){
    //     System.out.println("Enter Expenditure amount");
    //     int amount = s.nextInt();
    //     map.put(expenditure, amount);
    //     System.out.println("Enter Expenditure");
    //     expenditure = s.next();
    //     if(expenditure.equals("Done")||expenditure.equals("DONE")||expenditure.equals("done"))
    //     break;
    // }

    // printDetails(map, income);

    // int [] array = new int[200];

    // System.out.println("Enter the number of elements:");
    // int no = s.nextInt();
    // System.out.println("Enter the elements:");
    // for(int i=0;i<no;i++)
    // array[i]=s.nextInt();
    // System.out.println("Enter x:");
    // int x = s.nextInt();
    // System.out.println("Enter y:");
    // int y = s.nextInt();

    // System.out.println("The count of numbers between "+x+" and "+y+" is: "+getCount(array, no, x, y));

        
    System.out.println("Enter the upper limit:");
    int upper = s.nextInt(); 

    System.out.println("The sum of prime numbers between 1 and "+upper+" is: "+sumOfPrimes(upper));
    }
    
}