// JEMURAN OTOMATIS ver 1.1
// Untuk ver 2.0 adalah yang terhubung ke HP(Blynk) melalui Internet (IoT)
// Untuk ver 3.0 adalah penambahan sensor atau fungsi seperti sensor kelembapan/suhu. atau juga penambahan button pada rangkaian dan notifikasi data yag tersalurkan melalui Internet
// Untuk ver 4.0 mungkin bisa terhubung dengan smart home sehingga memudahkan User
// Untuk ver 5.0 masih belum ada ide sehingga, jika ada yang mau usul sangat dipersilahkan

// Jangan lupa diinisiasikan pin berapa yang dipakai
// Pastiakn juga  pin tersebyt anallog atau digital
// Kalau unutk data lebih keanalog, tapi kalau untuk ke fungsionalitas lebih ke digital
int sensorLDR = 7; 
int sensorRAIN = 8;
int enable = 0;
int motor1 = 1;
int motor2 = 2;
int kondisi = 0; // Ini bukan PIN tetapi nilai = 0

// Jangan lupa pastikan juga VCC&Ground pada motor
void setup(){
    pinMode(sensorLDR,INPUT);
    pinMode(sensorRAIN,INPUT);
    pinMode(enable,OUTPUT);
    pinMode(motor1,OUTPUT);
    pinMode(motor2,OUTPUT);
    Serial.begin(9600);
}

// mungkinpada bagian ini bisa dibuat fungsi lagi agar coding terlihat lebih rapi
void loop(){
    int cahaya = digitalRead(sensorLDR); // Dicoba pakai digitalWrite?
    Serial.println("Nilai sensorLDR = "+ cahaya);

    int hujan = digitalRead(sensorRAIN);
    Serial.println("Nilai sensorRAIN = "+ hujan);

    if (cahaya > 700 || hujan < 800){
        if (kondisi==0){
            digitalWrite(enable, HIGH); // jika pakai digitalWrite ?
            digitalWrite(motor1, HIGH);
            digitalWrite(motor2, LOW);
            delay(5000); // Delay disesuaikan kekuatan motor dalam menggerakkan tali
            kondisi=1;
        }
        else {
            delay(100); // Boleh dikurangi auatupun ditambahi
        }
    }
    else {
        if (kondisi==1){
            digitalWrite(enable, LOW);
            digitalWrite(motor1, LOW);
            digitalWrite(motor2, HIGH);
            delay(5000);
            kondisi=0;
        }
        else{
            delay(100);
        }
    }
}
