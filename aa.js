 const nomes = [], indices = [];
        var i =0, k = 0;
        while(i < 10){
            nomes[i] = prompt("Digite o nome da " + (i + 1) + " pessoa:");
            idades[i] = parseInt(prompt("Digite o indice de Triglicérides da " + (i + 1) + " pessoa:"));

            i++
        }
        while(k < 10){
            if(indices[k] > 499){
                alert(nomes[k] + " está com os triglicérides muito altos! ");
            }
            else if(indices[k] >= 150 && indices[k] < 200){
                alert(nomes[k] + " está com os triglicérides no limite! ");
            }
            k++
        }
