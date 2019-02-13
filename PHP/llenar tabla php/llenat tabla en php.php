<?php

//Creando conexion
$conexion=mysql_connect("localhost","root","") or die("Problemas en la conexion");
//seleccionando base
mysql_select_db("ejemplos",$conexion) or die("Problemas en la selección de la base de datos");
mysql_query ("SET NAMES 'utf8'");
//seleccionando datos de la base de datos 
$datos=mysql_query("select * from datos",$conexion) or
die("Problema seleccionando datos:".mysql_error());

?>
<!DOCTYPE HTML>
<html lang="en-US">
<head>
 <meta charset="UTF-8">
 <title></title>

</head>
<body>
        <h1>appletenhtml</h1>
  <h2>lista de datos</h2>
 
   <hr>
   <?php if ($datos) {   ?>
<table border="1px">
 <tr>
  <th>id</th>
  <th>Nombre</th>
  <th>telefono</th>
  <th>mail</th>
  <th>estudio</th>
 </tr>
 <?php  while ($registro=mysql_fetch_assoc($datos)) {?>
 <tr>
  <td><?php echo $registro['id'];?></td>
  <td><?php echo $registro['nombre']; ?></td>
  <td><?php echo $registro['telefono']; ?></td>
  <td><?php echo $registro['email']; ?></td>
  <td><?php echo $registro['estudio']; ?></td>
 </tr>
 <?php }?>
</table>
<?php   } else{?>
   <p>No hay contactos en la agenda</p>
   <?php } ?>
   <hr>
   
   <footer> 
  <p>Mas ejemplos: appletenhtml</p>
      </footer>
</body>
</html>
