class Aquecedor {
private:
    float temperatura;
    float temperaturaMinima;
    float temperaturaMaxima;
    float fatorDeIncrementoDaTemperatura;

public:
    Aquecedor();
    Aquecedor(float temperatura);
    Aquecedor(float temperatura, float fatorDeIncrementoDaTemperatura);

    void setFatorDeIncrementoDaTemperatura(float fatorDeIncrementoDaTemperatura);

    float getTemperatura();

    void aquecer();

    void resfriar();
    
};