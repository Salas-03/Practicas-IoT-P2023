#Protocolos
En esta práctica aprendemos sobre protocolos en IoT
# 4.1 Entender LORA y sus frecuencias
# 4.2 Entender y practicar de forma manual uno de los protocolos mas usados en IoT: MQTT, usaremos el “bróker” de ubidots
# 4.3 Entender y practicar el protocolo MQTT a través de Ubidots para enviar y leer datos de sensores reales (DHT 11)
# 4.4 Entender y practica el protocolo HTTP con sensores reales DHT11

## 4.1 LORA Entregable

1. Durante la demostración, ¿qué distancia pudimos alcanzar con la comunicación LoRa entre el ESP32
y el ReYax RYLR998? ¿Por qué es relevante este largo alcance en aplicaciones de IoT?
- El alcance fue del salon hasta el estacionamiento, revisando en Google Maps son aproximandamente 350 metros
2. En términos de consumo de energía, ¿cómo se compara LoRa con otras tecnologías de comunicación
inalámbrica como Wi-Fi o Bluetooth?
- Lora consume muy poca energia, a comparacion de Wifi o Bluetooth
3. ¿Cuándo sería apropiado utilizar LoRa en un proyecto de IoT en lugar de otras tecnologías de
comunicación?
- Se debe elegir LoRa en proyectos de IoT cuando se requiere un bajo consumo de energía y una amplia cobertura de comunicación
4. ¿Porque se usó este número: 915000000 como Banda de frecuencia (Hz) en esta práctica?
- Se utiliza por que en America es la predeterminada, en Europa se usa una diferente.
5. Desde tu punto de vista individual crees que esta práctica, aunque no se pidió que la hicieran uds los
estudiantes y solo la hizo la profesora ayudó a entender mas los conceptos teóricos? Si o no y porque
- Si, por que verlo como funciona con los productos hechos despues de a ver visto la teoria en clase, despues de esto Lora queda mas claro

# 4.2 Entender y practicar de forma manual uno de los protocolos mas usados en IoT: MQTT, usaremos el “bróker” de ubidots

![imagen](https://github.com/Salas-03/Practicas-IoT-P2023/assets/143568206/6a8cfcb7-fb49-4475-9ea0-20d3f750c2b0)

![imagen](https://github.com/Salas-03/Practicas-IoT-P2023/assets/143568206/54773ae2-9d4a-4d18-9905-66cbb2da3265)

![imagen](https://github.com/Salas-03/Practicas-IoT-P2023/assets/143568206/5bbf2bc6-f97e-47f6-816d-331f964d0b39)

![imagen](https://github.com/Salas-03/Practicas-IoT-P2023/assets/143568206/5e4e667a-b99d-49df-9ae8-dc01c7a76b99)

La aplicacion en el celular no estaba funcionando correctamente, pero en la computadora si.

![imagen](https://github.com/Salas-03/Practicas-IoT-P2023/assets/143568206/e3e0e713-b2c5-457a-a5c2-94ba7bc0a07f)

Temperatura

![imagen](https://github.com/Salas-03/Practicas-IoT-P2023/assets/143568206/6b3468f8-bbf5-4cec-be75-e4a66b6231c3)

Humedad

![imagen](https://github.com/Salas-03/Practicas-IoT-P2023/assets/143568206/e70203e5-0ff6-4e71-8ea1-3b4ec994d522)

Presion

![imagen](https://github.com/Salas-03/Practicas-IoT-P2023/assets/143568206/98f28d67-9206-4466-9dd7-2b7d3bb129f7)

![imagen](https://github.com/Salas-03/Practicas-IoT-P2023/assets/143568206/675e9213-0c3f-4c46-95a0-7824b3a98a35)

![imagen](https://github.com/Salas-03/Practicas-IoT-P2023/assets/143568206/8909720e-c195-437d-b006-789583e8c359)


## Panta Baja
![imagen](https://github.com/Salas-03/Practicas-IoT-P2023/assets/143568206/28affd3e-7ac2-4c43-8545-ac53c9712519)

![imagen](https://github.com/Salas-03/Practicas-IoT-P2023/assets/143568206/5a33a28b-dc08-4d67-9e98-2368aba5f4c1)

![imagen](https://github.com/Salas-03/Practicas-IoT-P2023/assets/143568206/369d6b79-53c0-4d30-bdb8-abbbe1b1eb17)

Calidad del aire
![imagen](https://github.com/Salas-03/Practicas-IoT-P2023/assets/143568206/69756bf6-554d-4dc2-9ad6-31fa69b639be)

Humedad
![imagen](https://github.com/Salas-03/Practicas-IoT-P2023/assets/143568206/5ff1a4eb-3e09-4171-8c14-105e79cdbe3f)

Temperatura
![imagen](https://github.com/Salas-03/Practicas-IoT-P2023/assets/143568206/5550cda5-6911-46af-8e51-1085571958c3)

## Planta Alta

![imagen](https://github.com/Salas-03/Practicas-IoT-P2023/assets/143568206/9cee62b7-ab60-498b-b719-3c28c1bfd4c4)

![imagen](https://github.com/Salas-03/Practicas-IoT-P2023/assets/143568206/0785ac17-3d7b-495b-bd84-4b287dbbccff)

![imagen](https://github.com/Salas-03/Practicas-IoT-P2023/assets/143568206/f1cdc8b3-489e-4945-8a7d-093c52e10d6b)

Temperatura
![imagen](https://github.com/Salas-03/Practicas-IoT-P2023/assets/143568206/382611fe-6926-4ab2-873b-ed865a90985e)

Humedad
![imagen](https://github.com/Salas-03/Practicas-IoT-P2023/assets/143568206/0ced3517-0715-4ae8-afa9-f90874e25d3b)

Luminosidad
![imagen](https://github.com/Salas-03/Practicas-IoT-P2023/assets/143568206/bdfaa3e8-f26e-4021-a30d-fb9bac745fa2)

# 4.3 Entender y practicar el protocolo MQTT a través de Ubidots para enviar y leer datos de sensores reales (DHT 11)

[Codigo de nuevo dispositivo](CodigoUbidots.ime)

![imagen](https://github.com/Salas-03/Practicas-IoT-P2023/assets/143568206/42f55ff0-b108-405f-b22c-d255f576facc)

![imagen](https://github.com/Salas-03/Practicas-IoT-P2023/assets/143568206/82c8a2b0-7efa-416a-91a6-92d4736a1dde)

![imagen](https://github.com/Salas-03/Practicas-IoT-P2023/assets/143568206/7b368b4d-2c75-426d-b877-b7927638c250)

![imagen](https://github.com/Salas-03/Practicas-IoT-P2023/assets/143568206/55c14642-7d7b-4d98-93dc-70e2d3928caa)

![imagen](https://github.com/Salas-03/Practicas-IoT-P2023/assets/143568206/8c873471-e63a-41ce-9d9a-23d8c4f4b1b1)

https://github.com/Salas-03/Practicas-IoT-P2023/assets/143568206/bad04738-9caa-44c4-bfa4-96a191c1c790






