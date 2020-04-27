class led{

  private:
    int Puerto;
    int Modo;
    int Tiempo;
      
  public:
    led();
   void Definirled( int puerto, int tiempo);
   void Prende();
   void Apagar();
};  
