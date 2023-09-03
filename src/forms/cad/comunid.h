#ifndef COMUNID_H
#define COMUNID_H

#include <QWidget>
#include <string>

using namespace std;

namespace Ui {
class Comunid;
}

class Comunid : public QWidget
{
    Q_OBJECT

public:
    explicit Comunid(QWidget *parent = nullptr);
    ~Comunid();

    //Define geters
    string getNome() {return this->nome;}
    string getDtInaug() {return this->dt_inaug;}
    string getBispoDioc() {return this->bispo_dioc;}
    string getBisposAux() {return this->bispos_aux;}
    string getNomeResp() {return this->nome_resp;}
    string getEmailResp() {return this->email_resp;}
    string getEmailIgreja() {return this->email_igreja;}
    string getFone() {return this->fone;}
    string getObs() {return this->obs;}
    string getCep() {return this->cep;}
    string getEnder() {return this->ender;}
    string getNum() {return this->num;}
    string getBairro() {return this->bairro;}
    string getCidade() {return this->cidade;}
    string getEstado() {return this->estado;}

    //Define seters
    string setNome(string n) {return this->nome = n;}
    string setDtInaug(string n) {return this->dt_inaug = n;}
    string setBispoDioc(string n) {return this->bispo_dioc = n;}
    string setBisposAux(string n) {return this->bispos_aux = n;}
    string setNomeResp(string n) {return this->nome_resp = n;}
    string setEmailResp(string n) {return this->email_resp = n;}
    string setEmailIgreja(string n) {return this->email_igreja = n;}
    string setFone(string n) {return this->fone = n;}
    string setObs(string n) {return this->obs = n;}
    string setCep(string n) {return this->cep = n;}
    string setEnder(string n) {return this->ender = n;}
    string setNum(string n) {return this->num = n;}
    string setBairro(string n) {return this->bairro = n;}
    string setCidade(string n) {return this->cidade = n;}
    string setEstado(string n) {return this->estado = n;}

private slots:
    void on_txtBisposAux_destroyed();

    void on_btnAlterar_clicked();

private:
    Ui::Comunid *ui;
    string nome;
    string dt_inaug;
    string bispo_dioc;
    string bispos_aux;
    string nome_resp;
    string email_resp;
    string email_igreja;
    string fone;
    string obs;
    string cep;
    string ender;
    string num;
    string bairro;
    string cidade;
    string estado;
};

#endif // COMUNID_H
