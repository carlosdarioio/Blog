<html>      <head>
          <title>Suma</title>
       </head>
  <body>
    <form method="post" action="pagina1.php">
     Ingrese el valor del primer numero:
     <input type="text" name="numero1">
      <br>
     Ingrese el valor del segundo numero:
     <input type="text" name="numero2">
      <br>
    <input type="submit" value="confirmar">
   </form>
  </body>
</html>
<?php
  $total;
  $total = $_REQUEST['numero1']+$_REQUEST['numero2'];
 
 echo "El total de la suma es: ".$total;
    
  ?>