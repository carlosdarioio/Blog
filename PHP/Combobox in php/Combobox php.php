<!doctype html>
<body> 
<SELECT NAME="productoss">
<option>Seleccione una Opción...</option>
<?php 
$conexion=new mysqli('localhost', 'root', 'contra', 'nombre_de_la_base_de_datos');    or
die("Problemas en la conexion");
mysql_query ("SET NAMES 'utf8'");
$clavebuscadah=$conexion->query("select id,nombre from producto",$conexion) or
die("Problemas en el select:".mysql_error());
while($row = mysql_fetch_array($clavebuscadah))
{
echo'<OPTION VALUE="'.$row['id'].'">'.$row['nombre'].'</OPTION>';
} 
?>
</SELECT>
</body>
</html>