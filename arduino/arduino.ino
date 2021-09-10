
void setup(){

   //configurado en html
  Serial.begin(9600);  

  pinMode(13,OUTPUT);

  
}

void loop(){

  if(Serial.available()){

      Serial.setTimeout(5);

      String  data =  Serial.readString();

      Serial.println(data);

      if(data.indexOf("prender") > -1){


          digitalWrite(13,1);
          
          
      }else if(data.indexOf("apagar") > -1){
        

          digitalWrite(13,0);
        
      }
      
      
  }
  
  
}
