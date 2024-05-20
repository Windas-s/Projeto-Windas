var database = require("../database/config");

function buscarUltimasMedidas(idQuarto, limite_linhas) {
  var instrucaoSql = `SELECT 
        l.dht11_temperatura AS temperatura, 
        l.dht11_umidade AS umidade,
        l.proximidade AS janela,
        l.dataHora AS momento,
        DATE_FORMAT(l.dataHora, '%H:%i:%s') AS momento_grafico
            FROM leitura l
            JOIN sistema_sensor ss ON l.fk_sistema_sensor = ss.idSistema_sensor
            JOIN quarto q ON ss.fk_quarto = q.idQuarto
            WHERE q.idQuarto = ${idQuarto}
            ORDER BY l.idLeitura DESC LIMIT ${limite_linhas}`;

  console.log("Executando a instrução SQL: \n" + instrucaoSql);
  return database.executar(instrucaoSql);
}

function buscarMedidasEmTempoReal(idQuarto) {
    var instrucaoSql = `SELECT 
        l.dht11_temperatura AS temperatura, 
        l.dht11_umidade AS umidade,
        l.proximidade AS janela,
        l.dataHora,
            DATE_FORMAT(l.dataHora, '%H:%i:%s') AS momento_grafico,
            l.fk_sistema_sensor 
            FROM leitura l
            JOIN sistema_sensor ss ON l.fk_sistema_sensor = ss.idSistema_sensor
            JOIN quarto q ON ss.fk_quarto = q.idQuarto
            WHERE q.idQuarto = ${idQuarto}
            ORDER BY l.idLeitura DESC LIMIT 1`;

  console.log("Executando a instrução SQL: \n" + instrucaoSql);
  return database.executar(instrucaoSql);
}

module.exports = {
  buscarUltimasMedidas,
  buscarMedidasEmTempoReal,
};
