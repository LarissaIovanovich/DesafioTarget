/*
4 - Dois veículos (um carro e um caminhão) saem respectivamente de cidades opostas pela mesma rodovia. O carro de Ribeirão Preto em direção a Franca, a uma velocidade constante de 110 km/h e o caminhão de Franca em direção a Ribeirão Preto a uma velocidade constante de 80 km/h. Quando eles se cruzarem na rodovia, qual estará mais próximo a cidade de Ribeirão Preto?



IMPORTANTE:

a) Considerar a distância de 100km entre a cidade de Ribeirão Preto <-> Franca.

b) Considerar 2 pedágios como obstáculo e que o caminhão leva 5 minutos a mais para passar em cada um deles e o carro possui tag de pedágio (Sem Parar)

c) Explique como chegou no resultado.




R: Utilizando movimento retilíneo uniforme temos que:


Para determinar o local em que o carro e o caminhão se cruzam podemos colocar o ponto de referência em Ribeirão Preto,
então, a equação horária do carro é:

x1 = v1.t

Como o caminhão sai de um local 100 km distante do ponto de referência e se aproxima dele, sua equação horária é:

x2 = 100km - v2.t

Como o caminhão tem 2 pedágios como obstáculo e perde 5 minutos em cada um deles, 
podemos calcular o tempo de viagem sem os obstáculos:

100km/80km = 1,25h

como perde 10 minutos (ou 0,17 horas) nos pedágios, o tempo de viagem para o caminhão será de 1,25h+0,17h=1,42h. 
Sua velocidade média é:

v2 = 100km/1,42h = 70,6 km/h


t = x1/v1
t = x2 - 100km/-v2
x1 = x2 => x/v1 = x-100km/-v2
-v2.x = v1.x - v1.100km
x = v1.100km/v1+v2 = 110km/h . 100km/ 110km/h + 70,6km/h
x = 60,9km

portanto, quando eles se cruzam estão à mesma distância.
*/