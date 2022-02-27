package helloJNI;

public class HelloJNI
{
    native void sorts(String arr[],int length, int order);
    static
    {
        System.loadLibrary("hellojni");
    }


    public static void main(String[] args)
    {
        HelloJNI helloJNI = new HelloJNI();
        String arr[] = {"book","life","vine","python","java","covid19","endemic"};
        helloJNI.sorts(arr, 7, 1);
        System.out.println(arr);
    }
}
