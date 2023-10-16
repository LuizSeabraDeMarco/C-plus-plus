<?php
if (!isset($_SESSION)) {
    session_start();
}

if (!isset($_SESSION['id'])) {
    // Usuário não está logado, redirecione para a página de login
    header("Location: index.php");
    exit();
}
?>
