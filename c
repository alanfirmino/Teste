[33mcommit 01883d25e02ecd2e9a020b42bb888b322ad0650b[m[33m ([m[1;36mHEAD -> [m[1;32mmaster[m[33m)[m
Author: alanfirmino <alan.l2@hotmail.com>
Date:   Wed Mar 2 21:24:39 2022 -0300

    commit inicial

[1mdiff --git "a/Revis\303\243o.docx" "b/Revis\303\243o.docx"[m
[1mnew file mode 100644[m
[1mindex 0000000..c1e3924[m
[1m--- /dev/null[m
[1m+++ "b/Revis\303\243o.docx"[m
[36m@@ -0,0 +1,49 @@[m
[32m+[m[32m                                     HTML5[m
[32m+[m[32mO Doctype HTML é uma declaração para informar ao navegador qual é a versão do HTML utilizada no arquivo. Essa declaração vem antes das tags HTML, portanto, geralmente é apresentada na primeira linha de um código.[m
[32m+[m[32m Essa parte do código define que o que estiver dentro do <html> e </html> será um código na linguagem HTML.[m
[32m+[m
[32m+[m[32mDefine a linguagem de todo código em HTML.[m[41m [m
[32m+[m
[32m+[m[32mSe eu quisesse apenas um parágrafo em determinada linguagem, então escreveríamos o código abaixo.[m[41m [m
[32m+[m[41m            [m
[32m+[m[32m                  O elemento <head> providencia informações gerais sobre o documento, incluindo seu título e links para scripts e folhas de estilos. Ou seja, atributos globais, como por exemplo, <title>, <base>, <link>, <style>, <meta>, <script>, <noscript>.[m
[32m+[m[41m   [m
[32m+[m[32mO elemento <title> (Elemento HTML Título) define o título do documento, mostrado na barra de título de um navegador ou na aba da página. Pode conter somente texto e quaisquer marcações contidas no texto não são interpretadas.[m
[32m+[m
[32m+[m[32mO elemento HTML <meta> define qualquer informação de metadados que não podem ser definidos por outros elementos HTML. O elemento <meta> pode ter vários argumentos como o charset, por exemplo.[m
[32m+[m
[32m+[m[32mO Elemento HTML <link> especifica as relações entre o documento atual e um recurso externo. Possíveis usos para este elemento incluem a definição de uma estrutura relacional para navegação. Este elemento é mais usado para vincular as folhas de estilo, como no exemplo mostrado na figura. Esse elemento possui diversos atributos como o href que especifica a URL do documento externo vinculado ao HTML principal.[m
[32m+[m[41m	[m
[32m+[m[32mO elemento <body> do representa o conteúdo de um documento HTML. É permitido apenas um <body> por documento, e este elemento possui diversos atributos.[m
[32m+[m
[32m+[m[32mO elemento <header> representa um grupo de suporte introdutório ou navegacional. Pode conter alguns elementos de cabeçalho, mas também outros elementos como um logo, seções de cabeçalho, formulário de pesquisa, e outros.[m
[32m+[m
[32m+[m[32mOs elementos HTML <h1> - <h6> representam seis níveis de título de seção. <h1> é o nível de seção mais alto e <h6> é o mais baixo.[m
[32m+[m
[32m+[m[32mO elemento HTML <img> representa a inserção de imagem no documento, sendo implementado também pelo HTML5 para uma melhor experiência com o elemento <figure> e <figcaption>.  Este elemento pode possui vários atributos, como por exemplo o scr que mostra a URL (diretório) da imagem a ser exibida.[m
[32m+[m
[32m+[m[32mO elemento de divisão <div> é um container genérico para conteúdo de fluxo, que de certa forma não representa nada. Ele pode ser utilizado para agrupar elementos para fins de estilos (usando class ou id), ou porque eles compartilham valores de atributos, como lang. Em outras palavras, é para dividir o conteúdo em blocos.[m
[32m+[m
[32m+[m[32mO elemento HTML <p> representa um parágrafo. Em HTML, parágrafos são usados para agrupar conteúdos relacionados de qualquer tipo, como imagens e campos de um formulário. Parágrafos são elementos block-level, e fecharão automaticamente caso outro Elemento block-level inicie antes da tag de fechamento </p>.[m
[32m+[m[32mO elemento <strong> é utilizado em conteúdos que são de "grande importância", incluindo coisas de urgentes (como alertas), deixando assim o texto em NEGRITO.[m
[32m+[m
[32m+[m[32mEsse elemento deixa todo o conteúdo que está dentro dele em itálico.[m
[32m+[m
[32m+[m
[32m+[m[32mO elemento <ul> (ou elemento HTML de Lista desordenada) representa uma lista de itens sem ordem rígida, isto é, uma coleção de itens que não trazem uma ordenação numérica e as suas posições, nessa lista, são irrelevantes.[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32mO Elemento <ol> representa uma lista de itens ordenados. De forma característica esses itens ordenados em uma lista são mostrados com uma contagem que os precede, que pode ser de qualquer tipo, como numerais, letras, algarismos romanos, ou simples símbolos. Esse modelo numerado não é definido na descrição html da página, mas na folha de estilos CSS[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32mO atributo global class é uma lista das classes de um elemento, separada por espaços. Classes permitem a CSS e Javascript selecionar e acessar elementos específicos através dos seletores de classe ou funções.[m
[32m+[m
[32m+[m[32mO atributo global id define um identificador exclusivo (ID) que deve ser único por todo o documento. Seu objetivo é identificar o elemento ao navegar por âncoras (usando um identificador de fragmento), quando utilizar scripts ou estilizando (com CSS).[m
[32m+[m
[32m+[m
[1mdiff --git a/Texto base.txt b/Texto base.txt[m
[1mnew file mode 100644[m
[1mindex 0000000..90e5279[m
[1m--- /dev/null[m
[1m+++ b/Texto base.txt[m	
[36m@@ -0,0 +1,7 @@[m
[32m+[m[32mSobre a Barbearia Alura[m
[32m+[m
[32m+[m[32mLocalizada no coração da cidade a Barbearia Alura traz para o mercado o que há de melhor para o seu cabelo e barba. Fundada em 2019, a Barbearia Alura já é destaque na cidade e conquista novos clientes a cada dia.[m
[32m+[m
[32m+[m[32mNossa missão é: "Proporcionar auto-estima e qualidade de vida aos clientes".[m
[32m+[m
[32m+[m[32mOferecemos profissionais experientes e antenados às mudanças no mundo da moda. O atendimento possui padrão de excelência e agilidade, garantindo qualidade e satisfação dos nossos clientes.[m
[1mdiff --git a/banner.jpg b/banner.jpg[m
[1mnew file mode 100644[m
[1mindex 0000000..a5198bc[m
Binary files /dev/null and b/banner.jpg differ
[1mdiff --git a/beneficios.jpg b/beneficios.jpg[m
[1mnew file mode 100644[m
[1mindex 0000000..5b15eec[m
Binary files /dev/null and b/beneficios.jpg differ
[1mdiff --git a/index.html b/index.html[m
[1mnew file mode 100644[m
[1mindex 0000000..07114da[m
[1m--- /dev/null[m
[1m+++ b/index.html[m
[36m@@ -0,0 +1,41 @@[m
[32m+[m[32m<!DOCTYPE html>[m
[32m+[m
[32m+[m[32m<html lang="pt-br">[m
[32m+[m	[32m<head>[m
[32m+[m		[32m<meta charset="UFT-8">[m
[32m+[m		[32m<title>Barbearia Alura</title>[m
[32m+[m		[32m<link rel="stylesheet" href="style1.0.css">[m
[32m+[m
[32m+[m[41m		[m
[32m+[m	[32m</head>[m
[32m+[m[41m	[m
[32m+[m	[32m<body>[m
[32m+[m		[32m<header>[m
[32m+[m			[32m<h1 class="titulo-principal">Barbearia Alura</h1>[m
[32m+[m		[32m</header>[m
[32m+[m		[32m<img id="banner" src="banner.JPG">[m
[32m+[m		[32m<div class="principal">[m
[32m+[m			[32m<h2 class="centralizado">Sobre a Barbearia Alura</h2>[m
[32m+[m
[32m+[m			[32m<p>Localizada no coração da cidade a <strong>Barbearia Alura</strong> traz para o mercado o que há de melhor para o seu cabelo e barba. Fundada em 2019, a Barbearia Alura já é destaque na cidade e conquista novos clientes a cada dia.</p>[m
[32m+[m
[32m+[m			[32m<p id="missao"><em>Nossa missão é: <strong>"Proporcionar auto-estima e qualidade de vida aos clientes"</strong>.</em></p>[m
[32m+[m
[32m+[m			[32m<p>Oferecemos profissionais experientes e antenados às mudanças no mundo da moda. O atendimento possui padrão de excelência e agilidade, garantindo qualidade e satisfação dos nossos clientes.</p>[m
[32m+[m		[32m</div>[m
[32m+[m
[32m+[m		[32m<div class="beneficios">[m
[32m+[m			[32m<h3 class="centralizado">Benefícios</h3>[m
[32m+[m			[32m<ul>[m
[32m+[m				[32m<li class="itens">Atendimento aos clientes</li>[m
[32m+[m				[32m<li class="itens">Espaço diferenciado</li>[m
[32m+[m				[32m<li class="itens">Localização</li>[m
[32m+[m				[32m<li class="itens">Profissionais qualificados</li>[m
[32m+[m			[32m</ul>[m
[32m+[m
[32m+[m			[32m<img class="imagem" src="beneficios.JPG">[m
[32m+[m		[32m</div>[m
[32m+[m	[32m</body>[m
[32m+[m[41m	[m
[32m+[m[41m	[m
[32m+[m[32m</html>[m
\ No newline at end of file[m
[1mdiff --git a/index2.html b/index2.html[m
[1mnew file mode 100644[m
[1mindex 0000000..8112a2f[m
[1m--- /dev/null[m
[1m+++ b/index2.html[m
[36m@@ -0,0 +1,45 @@[m
[32m+[m[32m<!DOCTYPE html>[m
[32m+[m
[32m+[m[32m<html lang="pt-br">[m
[32m+[m
[32m+[m	[32m<head>[m
[32m+[m		[32m<meta charset="UFT-8">[m
[32m+[m		[32m<title>Barbearia Alura</title>[m
[32m+[m		[32m<link rel="stylesheet" href="style.css">[m
[32m+[m	[32m</head>[m
[32m+[m[41m	[m
[32m+[m	[32m<body>[m
[32m+[m
[32m+[m		[32m<em>[m
[32m+[m			[32mtexto em itálico[m
[32m+[m		[32m</em>[m
[32m+[m
[32m+[m		[32m<header>[m
[32m+[m			[32m<h1 class="titulo-principal">Barbearia Alura</h1>[m
[32m+[m		[32m</header>[m
[32m+[m		[32m<img id="banner" src="banner.JPG">[m
[32m+[m		[32m<div class="principal">[m
[32m+[m
[32m+[m			[32m<h2 class="centralizado">Sobre a Barbearia Alura</h2>[m
[32m+[m
[32m+[m			[32m<p>Localizada no coração da cidade a <strong>Barbearia Alura</strong> traz para o mercado o que há de melhor para o seu cabelo e barba. Fundada em 2019, a Barbearia Alura já é destaque na cidade e conquista novos clientes a cada dia.</p>[m
[32m+[m
[32m+[m			[32m<p id="missao"><em>Nossa missão é: <strong>"Proporcionar auto-estima e qualidade de vida aos clientes"</strong>.</em></p>[m
[32m+[m
[32m+[m			[32m<p>Oferecemos profissionais experientes e antenados às mudanças no mundo da moda. O atendimento possui padrão de excelência e agilidade, garantindo qualidade e satisfação dos nossos clientes.</p>[m
[32m+[m		[32m</div>[m
[32m+[m
[32m+[m		[32m<div class="beneficios">[m
[32m+[m			[32m<h3 class="centralizado">Benefícios</h3>[m
[32m+[m			[32m<ul>[m
[32m+[m				[32m<li class="itens">Atendimento aos clientes</li>[m
[32m+[m				[32m<li class="itens">Espaço diferenciado</li>[m
[32m+[m				[32m<li class="itens">Localização</li>[m
[32m+[m				[32m<li class="itens">Profissionais qualificados</li>[m
[32m+[m			[32m</ul>[m
[32m+[m
[32m+[m			[32m<img class="imagem" src="beneficios.JPG">[m
[32m+[m		[32m</div>[m
[32m+[m	[32m</body>[m
[32m+[m[41m		[m
[32m+[m[32m</html>[m
\ No newline at end of file[m
[1mdiff --git a/produtos.css b/produtos.css[m
[1mnew file mode 100644[m
[1mindex 0000000..e69de29[m
[1mdiff --git a/produtos.html b/produtos.html[m
[1mnew file mode 100644[m
[1mindex 0000000..8b13789[m
[1m--- /dev/null[m
[1m+++ b/produtos.html[m
[36m@@ -0,0 +1 @@[m
[32m+[m
[1mdiff --git a/style1.0.css b/style1.0.css[m
[1mnew file mode 100644[m
[1mindex 0000000..3c57341[m
[1m--- /dev/null[m
[1m+++ b/style1.0.css[m
[36m@@ -0,0 +1,58 @@[m
[32m+[m[32mbody{[m
[32m+[m[41m	[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#banner{[m
[32m+[m	[32mwidth: 100%;[m
[32m+[m	[32mheight: 250px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.principal{[m
[32m+[m	[32mpadding: 30px;[m
[32m+[m	[32mbackground: #CCCCCC;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.titulo-principal{[m
[32m+[m	[32mpadding-left: 40px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.centralizado{[m
[32m+[m	[32mtext-align: center;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mp{[m
[32m+[m	[32mtext-align: center;[m
[32m+[m[41m	[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#missao{[m
[32m+[m	[32mfont-size: 20px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mem strong{[m
[32m+[m	[32mcolor: red;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.itens{[m
[32m+[m	[32mfont-style: italic;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32mul{[m
[32m+[m	[32mdisplay: inline-block;[m
[32m+[m	[32mvertical-align: top;[m
[32m+[m	[32mwidth: 20%;[m
[32m+[m	[32mmargin-right: 15%;[m
[32m+[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.beneficios{[m
[32m+[m	[32mbackground: #FFFFFF;[m
[32m+[m	[32mpadding: 20px;[m
[32m+[m[41m	[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.imagem{[m
[32m+[m	[32mwidth: 50%;[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/style2.css b/style2.css[m
[1mnew file mode 100644[m
[1mindex 0000000..559c2d2[m
[1m--- /dev/null[m
[1m+++ b/style2.css[m
[36m@@ -0,0 +1,54 @@[m
[32m+[m[32mbody{[m
[32m+[m[41m	[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#banner{[m
[32m+[m	[32mwidth: 100%;[m
[32m+[m	[32mheight: 250px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.principal{[m
[32m+[m	[32mpadding: 30px;[m
[32m+[m	[32mbackground: #CCCCCC;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.titulo-principal{[m
[32m+[m	[32mpadding-left: 40px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.centralizado{[m
[32m+[m	[32mtext-align: center;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mp{[m
[32m+[m	[32mtext-align: center;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#missao{[m
[32m+[m	[32mfont-size: 20px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mem strong{[m
[32m+[m	[32mcolor: red;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.itens{[m
[32m+[m	[32mfont-style: italic;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m
[32m+[m[32mul{[m
[32m+[m	[32mdisplay: inline-block;[m
[32m+[m	[32mvertical-align: top;[m
[32m+[m	[32mwidth: 20%;[m
[32m+[m	[32mmargin-right: 15%;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.beneficios{[m
[32m+[m	[32mbackground: #FFFFFF;[m
[32m+[m	[32mpadding: 20px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.imagem{[m
[32m+[m	[32mwidth: 50%;[m
[32m+[m[32m}[m
\ No newline at end of file[m
