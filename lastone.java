import java.util.Scanner;
class Addnum
{
public static void main(String[] args)
 {
    int x,y,z;
    System.out.println("Enter 2 numbers\n");
    Scanner in = new Scanner(System.in);
    x=in.nextInt();
    y=in.nextInt();
    z=x+y;
    System.out.println("Answer = "+z);
  }
}
