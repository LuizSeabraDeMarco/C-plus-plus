<?php
include('protect.php');
?>




<!DOCTYPE html>
<html lang="en">
<head>
  </head>
<body>
  Bem vindo ao Painel, <?php echo $_SESSION['nome']; ?>.
  <p>
    <a href="logout.php">Sair</a>
  </p>
</body>
</html>
