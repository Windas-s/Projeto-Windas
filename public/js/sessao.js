// sessão
function validarSessao() {
    var email = sessionStorage.EMAIL_USUARIO;
    var nome = sessionStorage.NOME_USUARIO;

    var b_usuario = document.getElementById("b_usuario");

    if (email != null && nome != null) {
        b_usuario.innerHTML = nome;
    } else {
        window.location = "../login.html";
    }
}

function obterdados(idQuarto) {
    fetch(`/medidas/tempo-real/${idQuarto}`)
        .then(resposta => {
            if (resposta.status == 200) {
                resposta.json().then(resposta => {

                    console.log(`Dados recebidos: ${JSON.stringify(resposta)}`);

                    alertar(resposta, idQuarto);
                });
            } else {
                console.error(`Nenhum dado encontrado para o id ${idQuarto} ou erro na API`);
            }
        })
        .catch(function (error) {
            console.error(`Erro na obtenção dos dados do aquario p/ gráfico: ${error.message}`);
        });

}


function alertar(resposta, idQuarto) {
    var temp = resposta[0].temperatura;

    var grauDeAviso = '';
    

    var limites = {
        quente: 25,
        ideal: 20,
        frio: 19,
    };

    var classe_temperatura = 'cor-alerta';

    if (temp < limites.ideal) {
        classe_temperatura = 'temperatura-baixa container card';
        document.getElementById(`descricao_quarto_${idQuarto}`).innerHTML = 'Temperatura baixa';
    }
    else if (temp >= limites.ideal && temp <= limites.quente) {
        classe_temperatura = 'temperatura-ideal container card';
        document.getElementById(`descricao_quarto_${idQuarto}`).innerHTML = 'Temperatura ideal';
    }
    else if (temp > limites.quente) {
        classe_temperatura = 'temperatura-quente container card';
        document.getElementById(`descricao_quarto_${idQuarto}`).innerHTML = 'Temperatura acima';
    }

    var card;

    if (document.getElementById(`temp_quarto_${idQuarto}`) != null) {
        document.getElementById(`temp_quarto_${idQuarto}`).innerHTML = temp + "°C";
    }

    if (document.getElementById(`card_${idQuarto}`)) {
        card = document.getElementById(`card_${idQuarto}`)
        card.className = classe_temperatura;
    }
}


function atualizacaoPeriodica() {
    JSON.parse(sessionStorage.quartos).forEach(item => {
        obterdados(item.idQuarto)
    });
    setTimeout(atualizacaoPeriodica, 5000);
}