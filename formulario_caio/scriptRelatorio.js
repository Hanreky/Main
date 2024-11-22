function mostrarRelatorio() {
    var usu, sen, opi, lin, listaLinguagem = "", dif, apr, rel;

    usu = document.getElementById("usuario").value;
    sen = document.getElementById("senha").value;
    opi = document.getElementById("opiniao").value;

    lin = document.getElementsByName("linguagem");

    if (lin[0].checked) listaLinguagem += " Python";
    if (lin[1].checked) listaLinguagem += " C/C++";
    if (lin[2].checked) listaLinguagem += " Java";
    if (lin[3].checked) listaLinguagem += " Javascript";
    if (lin[4].checked) listaLinguagem += " PHP";

    if (document.getElementById("dificill").checked) dif = "Assembly";
    if (document.getElementById("dificil2").checked) dif = "PHP";
    if (document.getElementById("dificil3").checked) dif = "Java";
    if (document.getElementById("dificil4").checked) dif = "Rust";
    if (document.getElementById("dificil5").checked) dif = "Outra";

    apr = document.getElementById("aprender").value;

    document.getElementById("tituloRelatorio").innerHTML="Relatório"

    rel = document.getElementById("caixaRelatorio");
    rel.innerHTML = 
        "Usuário: " + usu +
        "<br>Senha: " + sen +
        "<br>Opinião: " + opi +
        "<br>Linguagens selecionadas: " + listaLinguagem +
        "<br>Linguagem mais difícil: " + dif +
        "<br>Linguagem para aprender: " + apr;
}
    

function limparCaixaRelatorio() {
    document.getElementById("caixaRelatorio").innerHTML = "";
    document.getElementById("tituloRelatorio").innerHTML = "";
}
