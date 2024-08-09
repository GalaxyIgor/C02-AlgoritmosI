#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <vector>

using namespace std;

// Armazenar informaÃ§Ãµes bÃ¡sicas do usuÃ¡rio
struct user_data
{
    string name;        // nome
    int registration;   // matricula
    int period;         // periodo
    string course;      // curso
};

// Armazenar informaÃ§Ãµes de uma atividade
struct activity_data
{
    string name;                   // nome da atividade
    map<string, int> metrics;      // mÃ©tricas da atividade

    // Construtor para inicializar o mapa de mÃ©tricas
    activity_data(const string& activity_name) : name(activity_name), metrics() {}
};



// FunÃ§Ã£o para exibir o menu de cursos e obter a escolha do usuÃ¡rio
string getCourseChoice()
{
    cout << "Escolha o curso:\n";
    cout << "1 - ET  ";
    cout << "2 - ES  ";
    cout << "3 - EC  ";
    cout << "4 - ECA  ";
    cout << "5 - EL  ";
    cout << "6 - EP  ";
    cout << "7 - EB  ";

    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:
        return "ET";
    case 2:
        return "ES";
    case 3:
        return "EC";
    case 4:
        return "ECA";
    case 5:
        return "EL";
    case 6:
        return "EP";
    case 7:
        return "EB";
    default:
        return "Desconhecido";
    }
}

// FunÃ§Ã£o para levantar informaÃ§Ãµes do usuÃ¡rio
user_data getUserInfo()
{
    user_data user;

    cout << "Informe seu nome: ";
    getline(cin, user.name);

    cout << "Informe sua matricula: ";
    cin >> user.registration;

    cout << "Informe seu periodo: ";
    cin >> user.period;

    // Chamar a funÃ§Ã£o getCourseChoice para obter a escolha do curso
    user.course = getCourseChoice();

    return user;
}

// FunÃ§Ã£o para mostrar mÃ©tricas do usuÃ¡rio
void showUserMetrics(const user_data &user)
{
    cout << "Metricas do Usuario:\n";
    cout << "Nome: " << user.name << endl;
    cout << "Curso: " << user.course << endl;
    cout << "Numero de Matricula: " << user.registration << endl;
    cout << "Periodo: " << user.period << endl;
    cout << endl;
}

// FunÃ§Ã£o para mostrar mÃ©tricas da atividade e armazenar no arquivo
void showMetricsAndStoreToFile(const user_data &user, const activity_data &activity)
{
    string filename = "metrics_" + user.name + "_" + activity.name + ".txt";
    ofstream outputFile(filename);

    if (outputFile.is_open())
    {
        cout << endl;
        outputFile << "Metricas para a atividade: " << activity.name << endl;
        outputFile << "Nome: " << user.name << endl;
        outputFile << "Curso: " << user.course << endl;
        outputFile << "Numero de Matricula: " << user.registration << endl;
        outputFile << "Periodo: " << user.period << endl;

        outputFile << "Habilidades:\n";
        for (const auto &metric : activity.metrics)
        {
            outputFile << metric.first << ": " << metric.second << endl;
        }

        cout << "Metricas da atividade foram salvas em '" << filename << "'." << endl;

        outputFile.close();
    }
    else
    {
        cout << "Erro ao abrir o arquivo para escrita." << endl;
    }
}

// FunÃ§Ã£o para mostrar todas as atividades registradas
void showAllActivities(const user_data &user, const vector<activity_data> &activities)
{
    cout << "Atividades Registradas:\n";
    cout << "Nome: " << user.name << endl;
    cout << "Curso: " << user.course << endl;
    cout << "Numero de Matricula: " << user.registration << endl;
    cout << "Periodo: " << user.period << endl;
    cout << endl;

    cout << "Metricas de Todas as Atividades:\n";
for (const auto &activity : activities)
{
    cout << "Atividade: " << activity.name << endl;

    // Iterar sobre as mÃ©tricas e exibir cada uma
    for (const auto &metric : activity.metrics)
    {
        cout << metric.first << ": " << metric.second << endl;
    }

    cout << "----------------------\n";
}

}

// FunÃ§Ã£o principal
int main()
{
    // Levantar informaÃ§Ãµes do usuÃ¡rio
    user_data user = getUserInfo();

    // Inicializar vetor para armazenar atividades
    vector<activity_data> activities;

    char continuar;
    do
    {
        cout << "VocÃª esta fazendo ou ja fez alguma atividade que desenvolve suas soft skills: (S para Sim / N para Nao): ";
        cin >> continuar;

        if (continuar == 'S' || continuar == 's')
        {
            activity_data activity("Monitoria");

            cout << "Escolha uma atividade:\n";
            cout << "1 - Monitoria\n";
            cout << "2 - Iniciacao Cientifica\n";
            cout << "3 - Voluntariado\n";
            cout << "4 - Fetin\n";
            cout << "5 - Estagio\n";

            int activityChoice;
            cin >> activityChoice;

            switch (activityChoice)
            {
            case 1:
                activity.name = "Monitoria";
                activity.metrics["communication"] = 5;
                activity.metrics["adaptabilidade"] = 4;
                activity.metrics["pensamento critico"] = 5;
                activity.metrics["criativdade"] = 4;
                activity.metrics["autonomia"] = 5;
                activity.metrics["lideranca"] = 4;
                activity.metrics["etica"] = 5;
                activity.metrics["empatia"] = 4;
                activity.metrics["responsabilidade"] = 5;
                activity.metrics["inteligencia"] = 4;
                activity.metrics["autogerenciamento"] = 5;

                break;
            case 2:
                activity.name = "IniciacaoCientifica";
                activity.metrics["communication"] = 5;
                activity.metrics["adapitabilidade"] = 4;
                activity.metrics["pensamento critico"] = 5;
                activity.metrics["criativdade"] = 4;
                activity.metrics["autonomia"] = 5;
                activity.metrics["lideranca"] = 4;
                activity.metrics["etica"] = 5;
                activity.metrics["empatia"] = 4;
                activity.metrics["responsabilidade"] = 5;
                activity.metrics["inteligencia"] = 4;
                activity.metrics["autogerenciamento"] = 5;
                break;
            case 3:
                activity.name = "Voluntariado";
                activity.metrics["communication"] = 4;
                activity.metrics["adapitabilidade"] = 4;
                activity.metrics["pensamento critico"] = 5;
                activity.metrics["criativdade"] = 5;
                activity.metrics["autonomia"] = 5;
                activity.metrics["lideranca"] = 4;
                activity.metrics["etica"] = 4;
                activity.metrics["empatia"] = 5;
                activity.metrics["responsabilidade"] = 5;
                activity.metrics["inteligencia"] = 4;
                activity.metrics["autogerenciamento"] = 5;
                break;
            case 4:
                activity.name = "Fetin";
                activity.metrics["communication"] = 5;
                activity.metrics["adapitabilidade"] = 4;
                activity.metrics["pensamento critico"] = 5;
                activity.metrics["criativdade"] = 4;
                activity.metrics["autonomia"] = 5;
                activity.metrics["lideranca"] = 4;
                activity.metrics["etica"] = 5;
                activity.metrics["empatia"] = 4;
                activity.metrics["responsabilidade"] = 5;
                activity.metrics["inteligencia"] = 5;
                activity.metrics["autogerenciamento"] = 5;
                break;
            case 5:
                activity.name = "Estagio";
                activity.metrics["communication"] = 5;
                activity.metrics["adapitabilidade"] = 5;
                activity.metrics["pensamento critico"] = 4;
                activity.metrics["criativdade"] = 3;
                activity.metrics["autonomia"] = 4;
                activity.metrics["lideranca"] = 3;
                activity.metrics["etica"] = 4;
                activity.metrics["empatia"] = 4;
                activity.metrics["responsabilidade"] = 5;
                activity.metrics["inteligencia"] = 5;
                activity.metrics["autogerenciamento"] = 4;
                break;
            default:
                cout << "Escolha invÃ¡lida." << endl;
                break;
            }
            activity.metrics["comunicacao"] = 5;
            activity.metrics["adaptabilidade"] = 4;
            activity.metrics["pensamentoCritico"] = 5;
            activity.metrics["criatividade"] = 4;
            activity.metrics["autonomia"] = 5;
            activity.metrics["lideranca"] = 4;
            activity.metrics["etica"] = 5;
            activity.metrics["empatia"] = 4;
            activity.metrics["responsabilidade"] = 5;
            activity.metrics["inteligencia"] = 4;
            activity.metrics["autogerenciamento"] = 5;

// Adicionar a atividade ao vetor de atividades

            activities.push_back(activity);

            showMetricsAndStoreToFile(user, activity);
        }

    } while (continuar == 'S' || continuar == 's');

    // Mostrar todos os resultados ao final
    showAllActivities(user, activities);

    return 0;
}
