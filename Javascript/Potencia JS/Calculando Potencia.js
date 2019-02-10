//2016
var numero,numero2;

numero = prompt("Ingrese la base: "," ");
numero = parseInt(numero);

numero2 = prompt("Ingrese el exponente: "," ");
numero2 = parseInt(numero2);

var valor = Math.pow(numero,numero2);

document.write("El resultado de la potencia entre la base "+numero+" 
y el exponente "+numero2+" es: "+valor);