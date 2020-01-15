-- phpMyAdmin SQL Dump
-- version 4.9.0.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Tempo de geração: 15-Jan-2020 às 20:24
-- Versão do servidor: 10.4.6-MariaDB
-- versão do PHP: 7.3.8

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Banco de dados: `locadoradb`
--

-- --------------------------------------------------------

--
-- Estrutura da tabela `cliente`
--

CREATE TABLE `cliente` (
  `CLI_ID` int(11) NOT NULL,
  `NOME` varchar(50) NOT NULL,
  `CPF` varchar(14) NOT NULL,
  `EMAIL` varchar(50) NOT NULL,
  `CEP` varchar(9) NOT NULL,
  `CIDADE` varchar(50) NOT NULL,
  `TELEFONE` varchar(15) NOT NULL,
  `ENDERECO` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Extraindo dados da tabela `cliente`
--

INSERT INTO `cliente` (`CLI_ID`, `NOME`, `CPF`, `EMAIL`, `CEP`, `CIDADE`, `TELEFONE`, `ENDERECO`) VALUES
(1, 'DAVI ISAAC BERNARDO CARDOSO', '254.697.186-70', 'daviisaaco@mesquita.not.br', '33836-316', 'RIBEIRÃO DAS NEVES', '(31) 98871-8865', 'RUA TEJUCO, 102'),
(2, 'EDUARDO EDSON GALVÃO', '362.170.946-06', 'eduardoedsongalvao@comunikapublicidade.com.br', '35900-173', 'ITABIRA', '(31) 98606-8302', 'RUA MORRO DO PILAR, 663'),
(3, 'ISIS JENNIFER CLÁUDIA ASSIS', '814.883.186-62', 'iisisjenniferclaudiaassis@recnev.com.br', '31680-310', 'BELO HORIZONTE', '(19) 99918-3732', 'RUA COVA IRIA, 373'),
(4, 'RICARDO ROBERTO MORAES', '784.296.896-99', 'ricardorobertomoraes_@mourafiorito.com', '31846-524', 'BELO HORIZONTE', '(31) 98350-3624', 'RUA E, 32'),
(5, 'MIGUEL PEDRO HENRIQUE BARRO', '702.206.826-74', 'pedrohenriquebarros@marchoa.com', '31210-130', 'BELO HORIZONTE', '(31) 99529-3766', 'RUA ALBERTO GUALBERTO, 93'),
(6, 'LUNA APARECIDA DA MATA', '066.359.116-34', 'lunaapare_@sgstelecom.com.br', '33145-520', 'SANTA LUZIA', '(31) 99425-0974', 'RUA JOÃO CAMARGO COSTA SOBRINHO, 432'),
(7, 'MANUEL HENRIQUE NOVAES', '585.736.706-90', 'manuelhenriquenovaes@barratravel.com.br', '37036-560', 'VARGINHA', '(35) 98991-4207', 'RUA ANTÔNIO BERNARDES PEREIRA'),
(8, 'JOSEFA RAQUEL FLÁVIA RODRIGUES', '748.763.076-52', 'flaviarodrigues@quimicaindaiatuba.com.br', '30494-315', 'BELO HORIZONTE', '(31) 98541-0910', 'RUA TRINTA E UM, 323');

-- --------------------------------------------------------

--
-- Estrutura da tabela `devolucao`
--

CREATE TABLE `devolucao` (
  `DEV_ID` int(11) NOT NULL,
  `LOC_ID` int(10) NOT NULL,
  `CLI_ID` int(10) NOT NULL,
  `FIL_ID` int(10) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Extraindo dados da tabela `devolucao`
--

INSERT INTO `devolucao` (`DEV_ID`, `LOC_ID`, `CLI_ID`, `FIL_ID`) VALUES
(29, 24, 1, 1),
(31, 30, 5, 6),
(33, 28, 5, 3),
(34, 32, 7, 6),
(35, 25, 3, 2);

-- --------------------------------------------------------

--
-- Estrutura da tabela `filme`
--

CREATE TABLE `filme` (
  `FIL_ID` int(20) NOT NULL,
  `TITULO` varchar(40) NOT NULL,
  `GENERO` varchar(20) NOT NULL,
  `DIRETOR` varchar(40) NOT NULL,
  `ANO` varchar(5) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Extraindo dados da tabela `filme`
--

INSERT INTO `filme` (`FIL_ID`, `TITULO`, `GENERO`, `DIRETOR`, `ANO`) VALUES
(1, 'FAÇA A COISA CERTA', 'DRAMA', 'SPIKE LEE', '1987'),
(2, 'VIAGEM DE CHIHIRO', 'COMÉDIA', 'HAYAO MIYAZAKI', '2001'),
(3, 'HERÓI', 'TERROR', 'ZHANG YIMOU', '2002'),
(4, 'CINEMA PARADISO', 'TERROR', 'GIUSEPPE TORNATORE', '1988'),
(5, 'RIO VERMELHO', 'TERROR', 'HOWARD HAWKS', '1948'),
(6, 'OS IMPERDOÁVEIS', 'AVENTURA', 'CLINT EASTWOOD', '1992'),
(7, 'TUBARÃO', 'TERROR', 'STEVEN SPIELBERG', '1975'),
(8, 'E.T.: O EXTRATERRESTRE', 'DESENHO', 'STEVEN SPIELBERG', '1982');

-- --------------------------------------------------------

--
-- Estrutura da tabela `locacao`
--

CREATE TABLE `locacao` (
  `LOC_ID` int(10) NOT NULL,
  `CLI_ID` int(10) NOT NULL,
  `FIL_ID` int(10) NOT NULL,
  `DATA_INICIO` date NOT NULL,
  `DATA_FINAL` date NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Extraindo dados da tabela `locacao`
--

INSERT INTO `locacao` (`LOC_ID`, `CLI_ID`, `FIL_ID`, `DATA_INICIO`, `DATA_FINAL`) VALUES
(24, 1, 1, '2020-01-15', '2020-01-15'),
(25, 3, 2, '2020-01-17', '2020-01-25'),
(27, 5, 6, '2020-01-15', '2020-01-31'),
(28, 5, 8, '2020-01-28', '2020-01-31'),
(29, 5, 3, '2020-01-15', '2020-01-27'),
(30, 5, 6, '2020-01-15', '2020-01-15'),
(32, 7, 6, '2020-01-15', '2020-01-24'),
(33, 2, 1, '2020-01-15', '2020-01-31');

-- --------------------------------------------------------

--
-- Estrutura da tabela `status`
--

CREATE TABLE `status` (
  `STATUS_ID` int(11) NOT NULL,
  `FIL_ID` int(10) NOT NULL,
  `DISPONIVEL` varchar(15) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Extraindo dados da tabela `status`
--

INSERT INTO `status` (`STATUS_ID`, `FIL_ID`, `DISPONIVEL`) VALUES
(22, 1, 'NAO'),
(23, 2, 'SIM'),
(24, 3, 'SIM'),
(25, 4, 'SIM'),
(26, 5, 'SIM'),
(27, 6, 'SIM'),
(28, 7, 'SIM'),
(29, 8, 'NAO');

--
-- Índices para tabelas despejadas
--

--
-- Índices para tabela `cliente`
--
ALTER TABLE `cliente`
  ADD PRIMARY KEY (`CLI_ID`),
  ADD UNIQUE KEY `CPF` (`CPF`);

--
-- Índices para tabela `devolucao`
--
ALTER TABLE `devolucao`
  ADD PRIMARY KEY (`DEV_ID`);

--
-- Índices para tabela `filme`
--
ALTER TABLE `filme`
  ADD PRIMARY KEY (`FIL_ID`);

--
-- Índices para tabela `locacao`
--
ALTER TABLE `locacao`
  ADD PRIMARY KEY (`LOC_ID`);

--
-- Índices para tabela `status`
--
ALTER TABLE `status`
  ADD PRIMARY KEY (`STATUS_ID`);

--
-- AUTO_INCREMENT de tabelas despejadas
--

--
-- AUTO_INCREMENT de tabela `cliente`
--
ALTER TABLE `cliente`
  MODIFY `CLI_ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=9;

--
-- AUTO_INCREMENT de tabela `devolucao`
--
ALTER TABLE `devolucao`
  MODIFY `DEV_ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=36;

--
-- AUTO_INCREMENT de tabela `filme`
--
ALTER TABLE `filme`
  MODIFY `FIL_ID` int(20) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=9;

--
-- AUTO_INCREMENT de tabela `locacao`
--
ALTER TABLE `locacao`
  MODIFY `LOC_ID` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=34;

--
-- AUTO_INCREMENT de tabela `status`
--
ALTER TABLE `status`
  MODIFY `STATUS_ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=30;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
