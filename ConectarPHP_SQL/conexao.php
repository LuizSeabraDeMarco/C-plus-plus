<?php
    $hostname = "localhost";
    $banco_de_dados = "site1";
    $usuario = "root";
    $senha = "";

    $mysqli = new mysqli(
        'localhost',
        'root',
        '',
        'site1'
    );

    if ($mysqli->connect_error) {
        echo 'Falha ao conectar: (' . $mysqli->connect_error . ') ' . $mysqli->connect_error;
    }else{
        echo "Conectado com sucesso!";
    }

?>