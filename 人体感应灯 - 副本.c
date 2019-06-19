const int sensorPin = A0; //定义人体红外传感器的引脚
const int ledPin = 10;    //定义LED灯的引脚
int sensorValue = 0;      //声明传感器数据变量

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin,LOW);  
  pinMode(sensorPin, INPUT);  
}

void loop()
{
  sensorValue = analogRead(sensorPin);   //读取传感器数据
  if(sensorValue > 300){                 //判断是否有人接近
      digitalWrite(ledPin,HIGH);         //点亮LED灯
      delay(30000);                      //延时30秒
      digitalWrite(ledPin,LOW);          //关闭LED灯
  }
}