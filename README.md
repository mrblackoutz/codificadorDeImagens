```markdown
# Codificador de Imagens

Este projeto é um codificador de imagens binárias no formato PBM. Ele converte uma imagem binária em um código próprio. O código usa o estilo 'X' para representar a divisão da imagem em 4 quadrantes, 'B' para representar a cor branca e 'P' para representar a cor preta.

Por exemplo, para uma matriz 3x3 de cores:

```
|0|0|1|
|0|1|1|
|0|0|1|
```

O código gerado será: `XXBBBPPBP`.

## Executando no Visual Studio Code

Para executar este projeto no Visual Studio Code, siga as etapas abaixo:

1. Instale as extensões necessárias:
   - C/C++
   - C/C++ Compile Run
   - C/C++ Extension Pack
   - C/C++ Runner
   - C/C++ Themes

2. Instale o MinGW. Você pode baixá-lo [aqui](https://ufpr.dl.sourceforge.net/project/mingw/Installer/mingw-get-setup.exe).

3. Certifique-se de que o arquivo `gcc.exe` esteja na pasta `C:/MinGW/bin/`.

4. Atualize a variável de ambiente PATH nas variáveis de ambiente do sistema para incluir o caminho da pasta `bin` onde está o `gcc`. Isso permitirá que o compilador `gcc` seja acessado de qualquer lugar no seu sistema.

Agora você deve ser capaz de compilar e executar o projeto no Visual Studio Code. Se você encontrar algum problema, sinta-se à vontade para abrir uma issue.
```