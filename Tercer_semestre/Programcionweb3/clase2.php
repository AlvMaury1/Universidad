<?php
	// Funcion que suma
	function sumaFunction($valorA, $valorB)
	{
		//suma de dos variables
		$resultado = $valorA + $valorB;	
		// retorna la variable resultado
		return $resultado;
	}	
	// Funcion resta
			
	function restaFunction($valorA, $valorB)
	{
		return $valorA - $valorB;
	}	
	function multiFunction($valorA, $valorB)
	{
		return $valorA * $valorB;
	}
	function divFunction($valorA, $valorB)
	{	
	// los errores se encontraran en los logs de xampp, los usuarios no deben saber cual es el fallo,
		if ($valorB != 0)
		{
			return $valorA / $valorB;
		}
		else
		{
			return "No se puede dividir por cero";
		}
	}
	$a = 5;
	$b = 0;

	$suma = sumaFunction($a, $b);
	$resta = restaFunction($a,$b);
	$div = divFunction($a,$b);
	$multi = multiFunction($a, $b);
	echo "Valor A: ". $a."<br>";
	echo "Valor B: ". $b."<br>";
	echo "SUMA: ". $suma."<br>";
	echo "Resta: ". $resta."<br>";
	echo "Multiplicacion: ". $multi."<br>";
	echo "Division: ". $div."<br>";
	
	// HTPP GET-POST-PUT-DELETE
	if (isset($_POST['submit']))
	{
		$resultado = 0;
		echo "submit";
		$va = $_POST["valorA"];
		$vb = $_POST["valorB"];
		$vope = $_POST["ope"];
		if ($vope == "sumar"){$resultado = sumaFunction($va, $vb);}	
		if ($vope == "restar"){$resultado = restaFunction($va, $vb);}
		if ($vope == "multiplicar"){$resultado = multiFunction($va, $vb);}
		if ($vope == "dividir"){$resultado = divFunction($va, $vb);}
	}
	
?>
<html>
	<head></head>
	<body>
	<form method = "post" >
		<br>
		<input type = "number" name = "valorA" required>	
		<input type = "number" name = "valorB" required>	
		<select name = "ope" required>
			<option value = "sumar"> Sumar </option>
			<option value = "restar"> Restar </option>
			<option value = "multiplicar"> Multiplicar </option>
			<option value = "dividir"> Dividir </option>
		</select>
		<input type = "submit" name = "submit" value = "Calcular">
		<?php echo "Resultado: ".$resultado;?>
	</form>
	</body>
</html>
