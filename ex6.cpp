#include <iostream>
using namespace std;
int main() {
    int hora_inicio, hora_fim, minuto_inicio, minuto_fim, duracao_minutos,horas, minutos;
    //começo:
    cout<< "Horario (hora): ";
    cin>> hora_inicio;
      cout<< "Horario (minuto): ";
    cin>> minuto_inicio;
    cout<< "Horario de inicio: "
    <<hora_inicio<< ":"<<minuto_inicio<< "\n";
    //fim:
    cout<< "Horario do fim do jogo(hora): ";
    cin>> hora_fim;
      cout<< "Horario do fim do jogo(minuto): ";
    cin>> minuto_fim;
    cout<< "Horario do final: "
    <<hora_fim<< ":"<<minuto_fim<< "\n";
    
    if(hora_fim<hora_inicio){
        hora_fim+=24;
    }
    //calcula todo o tempo em minutos (n esquecer)
  duracao_minutos=(hora_fim*60+minuto_fim)-(hora_inicio*60+minuto_inicio);
//para transformar em horas:
  horas=duracao_minutos/60;
//corrige os minutos:
minutos=duracao_minutos%60;
 cout<< hora_inicio<< ":"<<minuto_inicio<< "-"<<hora_fim<< ":"<<minuto_fim<< "\n";
 cout<< "O jogo terminou às " <<horas<< ":" <<minutos<< "\n";
    return 0;
}
