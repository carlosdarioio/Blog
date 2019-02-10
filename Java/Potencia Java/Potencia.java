import java.util.Scanner;
 public class base_exponente{
   public static void main(String[] args){
            //Sacando la potencia con while
   Scanner sc = new Scanner(System.in);
   int base,exponente,potencia;
   potencia=1;
   System.out.println("Ingrese la siguiente información de la Potencia");
   System.out.println("Ingrese base");
   base = sc.nextInt();
   System.out.println("Ingrese exponente");
   exponente = sc.nextInt();
   //mientras el valor de 0 sea menor que el exponente
    while(0<exponente){
         potencia = potencia*base;
         exponente--;
// esta acción ase que al valor del exponente se le reste 1
                                 }
                  System.out.println("La Potencia es: "+potencia);

}
}