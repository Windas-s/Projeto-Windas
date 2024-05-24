const { json } = require("express");

async function chamarApi() {
    const apiKey = '910c4efbe73c746cce373fd23d6fdf43';
    const cidade = 'São Paulo'
    const apiUrl = `https://api.openweathermap.org/data/2.5/weather?q=${encodeURI(cidade)}&appid=${apiKey}&units=metric&lang=pt_br`;
    const results = await fetch(apiUrl);
    const json = await results.json();

    if (json.cod === 200) {
        mostrarInfo({
            cidade: json.name,
            pais: json.sys.country,
            temp: json.main.temp,
            umidade: json.main.humidity,
            descricao: json.weather[0].description,
            tempIcon: json.weather[0].icon
        });
    } else {
        alert("Ocoreu um erro de leitura do tempo externo...");
    }
}

function mostrarInfo(json) {
    document.querySelector('#cidade').innerHTML = `${json.cidade}, ${json.pais}`;

    document.querySelector('#temp_value').innerHTML = `${json.temp.toFixed(1).toString().replace('.',',')} <sup>Cº</sup>`;

    document.querySelector('#umid_value').innerHTML = `${json.umidade}`;

}