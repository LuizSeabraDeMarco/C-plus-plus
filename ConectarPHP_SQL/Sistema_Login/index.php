<?php
include('conexao.php');

$email = $_POST['email'] ?? '';
$senha = $_POST['senha'] ?? '';

if(isset($email) && isset($senha)){
    if (strlen($email) == 0){
        echo "Preencha o e-mail";
    }else if(strlen($senha) == 0){
        echo "Preencha a senha";
    }else{
        $email = $mysqli->real_escape_string($email);
        $senha = $mysqli->real_escape_string($_POST['senha']);

        $sql_code = "SELECT * FROM usuario WHERE email = '$email' AND senha = '$senha'";
        $sql_query = $mysqli->query($sql_code) or die("Falha na execução do codigo SQL: " . $mysqli->error);

        $quantidade = $sql_query->num_rows;
        if($quantidade == 1){

            $usuario = $sql_query->fetch_assoc();

            if(!isset($_SESSION)){
                session_start();
            }

            $_SESSION['id'] = $usuario['id'];
            $_SESSION['nome'] = $usuario['nome'];

            header("Location: painel.php");
        }else{
            echo "Usuário ou senha incorreto";
        }
    }
}
?>

<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Login</title>
</head>
<body>
    <h1>Acessar sua conta</h1>
    <form action="" method="post">
        <p>
            <label>E-mail</label>
            <input type="Email" name="email">
        </p>
        <p>
            <label>Senha</label>
            <input type="password" name="senha">
        </p>
        <p>
            <button type="submit">Entrar</button>
            <a href="criar_login.php">Criar Conta</a>
        </p>
    </form>
</body>
</html>
