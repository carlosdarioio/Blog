<html> 
  <head> 
  <title>Año bisiesto</title> 
  </head> 
  <body>
  Ingrese la siguiente información de la Potencia
<form method="post" action="potencia.php"> 
  Ingrese  base: 
  <input type="text" name="base"> 
  <br>    
  Ingrese exponente: 
  <input type="text" name="exponente"> 
  <br>    
  <input type="submit" value="calcular"> 
  </form>
</body> 
</html>
<?php 
  $i = $_REQUEST['exponente'];
  $potencia=1;
  $base =$_REQUEST['base'] ;
  while($i>0)
  {
  $potencia=$potencia*$base;
  
  
  $i=$i-1;
  }
      echo "La potencia es: ".$potencia;
  ?>