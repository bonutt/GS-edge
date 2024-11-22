# Sistema Inteligente de Monitoramento de Temperatura e Gerenciamento de Energia com Arduino

Este projeto apresenta um sistema automatizado que monitora a temperatura ambiente e a luminosidade, alternando entre fontes de energia solar e convencional de forma inteligente. O sistema também controla o acionamento de um ar-condicionado com base na temperatura detectada, proporcionando eficiência energética e sustentabilidade.

## 🛠️ Componentes Necessários
- 1 Arduino 
- 1 Sensor de temperatura 
- 1 Fotoresistor (sensor de luminosidade)
- 4 LEDs:
  - 1 LED vermelho (indicador de alta temperatura)
  - 1 LED azul (indicador de baixa temperatura/ar-condicionado desligado)
  - 1 LED verde indicador de uso de energia solar
  - 1 LED amarelo Indicador de uso de energia convencional
- 4 Resistores 220Ω
- Fios de conexão
- Protoboard

## 📜 Funcionamento
Quando o led vermelho acende indica que a temperatura esta acima do esperado e liga o ar condicionado, quando esta abaixo de 30 graus ele desliga, o led verde liga quando esta ensolarado, passando a usar a energia dos paines solares, e o led amerelo quando nao esta ensolarado indica que esta usando energia convencional e desligando os paines solares.
O sistema opera com base em dois parâmetros principais: temperatura e luminosidade. Os LEDs são utilizados para indicar o status do sistema, enquanto a alternância entre as fontes de energia é feita automaticamente.

### Controle de Temperatura
- **LED Vermelho:** Acende quando a temperatura está **acima de 30°C**, indicando o acionamento do ar-condicionado.
- **LED Azul:** Acende quando a temperatura está **abaixo de 30°C**, indicando que o ar-condicionado está desligado.

### Gerenciamento de Energia
- **LED Verde:** Acende em condições de alta luminosidade, indicando que o sistema está **utilizando energia solar**.
- **LED amarelo:** Acende em condiçoes de baixa luminosidade, indicando que o sistema está **utilizando energia convencional
