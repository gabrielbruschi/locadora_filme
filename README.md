# Locadora de filmes
> Sistema de Informação para Vídeo Locadoras utilizando a IDE Visual Studio com a linguagem c++.

O sistema de informações para video locadora apresenta recursos importantes para a manipulação de aluguéis e devoluções dos filmes.
O software realiza o cadastro, atualização e exclusão de clientes e filmes. Todos esses recursos tem sua utilização simplificada para que o cliente não encontre dificuldades.
Na tela inicial os filmes do catálogo são exibidos. Há possibilidade de selecionar o que será visto na grade.

![](header.png)

## Instalação
Para abrir o projeto no Visual Studio é necessário clonar o repositório.

```git clone https://github.com/gabrielbruschi/locadora_filme```

Entre na pasta clonada

```cd ProjetoLocadora/```

A referência para o MySql.Data está contida no projeto. Mas caso seja necessário adicionar, faça:

``References -> Assemblies -> e procure por 'MySql.Data'``

O arquivo ``locadoradb.sql`` deve ser adicionado ao banco de dados com nome "locadoradb".
Em testes utilizei o ``XAMPP`` como sendo o servidor independente, com os parâmetros:

```datasource=localhost; port=3306; username=root```



## Solução de erros comuns

Caso venha a encontrar com os seguintes erros:

```LINK : fatal error LNK1561: entry point must be defined ERROR IN VC++```

Defina o valor do 'entry point' para "Main". Como nesta [imagem].

```LINK : fatal error LNK1221: a subsystem can't be inferred and must be defined```

Defina o valor do 'SubSystem' para "SUBSYSTEM:WINDOWS". Como nesta [imagem.]

## Meta

Gabriel Gonçalves Bruschi – gabrielbruschi1@gmail.com

Distributed under the GPL-3.0 license. See ``LICENSE`` for more information.

[https://github.com/gabrielbruschi/locadora_filme](https://github.com/gabrielbruschi/)

## Contribuição

1. Fork it (<https://github.com/gabrielbruschi/locadora_filme>)

<!-- Markdown link & img dfn's -->
[npm-image]: https://img.shields.io/npm/v/datadog-metrics.svg?style=flat-square
[npm-url]: https://npmjs.org/package/datadog-metrics
[npm-downloads]: https://img.shields.io/npm/dm/datadog-metrics.svg?style=flat-square
[travis-image]: https://img.shields.io/travis/dbader/node-datadog-metrics/master.svg?style=flat-square
[travis-url]: https://travis-ci.org/dbader/node-datadog-metrics
[wiki]: https://github.com/yourname/yourproject/wiki
[LICENSE]: https://github.com/gabrielbruschi/ChatBotGrace/blob/master/LICENSE

[imagem]: https://i.stack.imgur.com/LojLc.png
[imagem.]: https://i.stack.imgur.com/G7lJg.png
