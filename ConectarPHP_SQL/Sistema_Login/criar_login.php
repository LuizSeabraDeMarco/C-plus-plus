<?php

// Inicializa a sessão
if (!isset($_SESSION)) {
  session_start();
}

// Declara as variáveis como array
$dados = array();
$dados['faculdade'] = $_POST['universidade'];

// Recebe os dados do formulário
$dados['email'] = $_POST['email'];
$dados['nome'] = $_POST['nome'];
$dados['senha'] = $_POST['senha'];
$dados['curso'] = $_POST['curso'];



// Verifica se os campos estão preenchidos
if (empty($dados['email']) || empty($dados['senha']) || empty($dados['nome']) || empty($dados['faculdade']) || empty($dados['curso'])) {
  echo "Por favor, preencha todos os campos.";
} else {
  // Verifica se a senha atende aos requisitos
  if (strlen($dados['senha']) < 8 || !preg_match("/[A-Z]/", $dados['senha']) || !preg_match("/[0-9]/", $dados['senha'])) {
    echo "A senha deve ter pelo menos 8 caracteres, conter pelo menos uma letra maiúscula e pelo menos um número.";
  }else {
    // Verifica se o email ou o nome já existem no banco de dados
    include('conexao.php');
    $sql = "SELECT * FROM usuario WHERE email = '$dados[email]' OR nome = '$dados[nome]'";
    $resultado = $mysqli->query($sql);

    if ($resultado->num_rows > 0) {
      echo "O email ou o nome já estão sendo usados por outra conta.";
    } else {
      // Insere o usuário no banco de dados
      $sql = "INSERT INTO usuario (nome, email, senha, faculdade, curso) VALUES ('$dados[nome]', '$dados[email]', '$dados[senha]', '$dados[faculdade]', '$dados[curso]')";
      $mysqli->query($sql);

      // Inicializa a sessão com o id e o nome do usuário
      $_SESSION['id'] = $mysqli->insert_id;
      $_SESSION['nome'] = $dados['nome'];

      // Redireciona o usuário para a página de painel
      header("Location: painel.php");
    }
  }
}

// Verifica se os arquivos CSV existem
if (!file_exists('universidades.csv')) {
  die('O arquivo CSV de universidades não existe.');
}

if (!file_exists('cursos.csv')) {
  die('O arquivo CSV de cursos não existe.');
}

// Carrega os arquivos CSV
$fp_universidades = fopen('universidades.csv', 'r');
$fp_cursos = fopen('cursos.csv', 'r');

// Verifica se os arquivos CSV foram abertos com sucesso
if (!$fp_universidades) {
  die('Falha ao abrir o arquivo CSV de universidades.');
}

if (!$fp_cursos) {
  die('Falha ao abrir o arquivo CSV de cursos.');
}

// Cria arrays de dados CSV
$data_universidades = [];
while (($row = fgetcsv($fp_universidades)) !== false) {
  $data_universidades[] = $row;
}

$data_cursos = [];
while (($row = fgetcsv($fp_cursos)) !== false) {
  $data_cursos[] = $row;
}

// Fecha os arquivos CSV
fclose($fp_universidades);
fclose($fp_cursos);

// Cria inputs
$input_universidade = '<input type="text" name="universidade" list="universidades">';
$input_curso = '<input type="text" name="curso" list="cursos">';

// Cria listas de opções
$ul_universidades = '<datalist id="universidades">';
foreach ($data_universidades as $row) {
  $optgroup = '<select><optgroup label="' . implode(', ', $row) . '">';
  $optgroup .= '<option value="' . array_slice($row, 1)[0] . '">' . array_slice($row, 1)[0] . '</option>';
  $ul_universidades .= $optgroup . '</optgroup></select>';
}
$ul_universidades .= '</datalist>';

$ul_cursos = '<datalist id="cursos">';
foreach ($data_cursos as $row) {
  $option = '<option value="' . $row[0] . '">' . $row[0] . '</option>';
  $ul_cursos .= $option;
}
$ul_cursos .= '</datalist>';

?>

<!DOCTYPE html>
<html lang="pt-BR">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Cadastro</title>
</head>
<body>
  <h1>Cadastrar novo usuário</h1>

  <form action="" method="post">
    <label for="nome">Nome: </label>
    <input type="text" id="nome" name="nome">
    <br>
    <label for="email">Email:</label>
    <input type="text" name="email" id="email">
    <br>
    <label for="senha">Senha: </label>
    <input type="password" name="senha" id="senha">
    <br>
    <label for="universidades">Instituição: </label>
    <?php echo $input_universidade . $ul_universidades; ?>
    <br>
    <label for="cursos">Curso: </label>
    <?php echo $input_curso . $ul_cursos; ?>
    <br>
    <button type="submit">Cadastrar</button>
    <a href="index.php">Entrar</a>
  </form>
  <script>
    // Carrega os dados CSV
    const data = CSV.parseFile('./universidades.csv');

    // Cria um optgroup
    const optgroup = document.createElement('optgroup');
    optgroup.label = 'Todas as universidades';

    // Percorre os dados CSV
    data.forEach(item => {
        // Cria uma opção
        const option = document.createElement('option');
        option.value = item.nome;
        option.textContent = item.nome;

        // Adiciona a opção ao optgroup
        optgroup.appendChild(option);
    });

    // Adiciona o optgroup ao select
    const select = document.querySelector('select');
    select.appendChild(optgroup);
  </script>
</body>
</html>
