const int sensorPin = A0; //����������⴫����������
const int ledPin = 10;    //����LED�Ƶ�����
int sensorValue = 0;      //�������������ݱ���

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin,LOW);  
  pinMode(sensorPin, INPUT);  
}

void loop()
{
  sensorValue = analogRead(sensorPin);   //��ȡ����������
  if(sensorValue > 300){                 //�ж��Ƿ����˽ӽ�
      digitalWrite(ledPin,HIGH);         //����LED��
      delay(30000);                      //��ʱ30��
      digitalWrite(ledPin,LOW);          //�ر�LED��
  }
}