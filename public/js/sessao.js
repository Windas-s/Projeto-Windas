// sessão
function validarSessao() {
    let email = sessionStorage.EMAIL_USUARIO;
    let nome = sessionStorage.NOME_USUARIO;

    let b_usuario = document.getElementById("b_usuario");

    if (email != null && nome != null) {
        b_usuario.innerHTML = nome;
    } else {
        window.location = "../login.html";
    }
}

function limparSessao() {
    sessionStorage.clear();
    window.location = "../login.html";
}

function alertar(resposta, idQuarto) {
    let temp = resposta[0].temperatura;

    let grauDeAviso = '';
    

    let limites = {
        quente: 26,
        ideal: 24,
        frio: 19,
    };



    let classe_temperatura = 'cor-alerta';

    if (temp <= 20.5) {
    classe_temperatura = "temperatura-baixa container card";
    document.getElementById(`descricao_quarto_${idQuarto}`).innerHTML =
      "Temperatura baixa🌡️";
  } else if (
    temp <= 25 &&
    temp > 20.5
  ) {
    classe_temperatura = "temperatura-ideal container card";
    document.getElementById(`descricao_quarto_${idQuarto}`).innerHTML =
      "Temperatura ideal🌡️";

  } else if (temp > 25) {
    classe_temperatura = "temperatura-quente container card";
    document.getElementById(`descricao_quarto_${idQuarto}`).innerHTML =
      "Temperatura acima🌡️";
  }


    let card;

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
            console.error(`Erro na obtenção dos dados do quarto p/ gráfico: ${error.message}`);
        });

}



