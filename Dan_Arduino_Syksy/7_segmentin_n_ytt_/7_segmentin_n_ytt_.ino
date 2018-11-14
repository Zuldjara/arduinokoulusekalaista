#define Segment1 11
#define Segment2 10
//#define Segment3
#define Segment4 9
//#define Segment5 8
#define Segment6 4
#define Segment7 5
//#define Segment8
#define Segment9 6
#define Segment10 7

#define SegmentON LOW
#define SegmentOFF HIGH


void Number0(){
  
digitalWrite (Segment1, SegmentON);
digitalWrite (Segment2, SegmentON);
//digitalWrite (Segment3, SegmentON);
digitalWrite (Segment4, SegmentON);
//digitalWrite (Segment5, SegmentOFF);
digitalWrite (Segment6, SegmentON);
digitalWrite (Segment7, SegmentON);
//digitalWrite (Segment8, SegmentON);
digitalWrite (Segment9, SegmentON);
digitalWrite (Segment10, SegmentOFF);
}

void Number1(){
  
digitalWrite (Segment1, SegmentOFF);
digitalWrite (Segment2, SegmentOFF);
//digitalWrite (Segment3, SegmentON);
digitalWrite (Segment4, SegmentON);
//digitalWrite (Segment5, SegmentOFF);
digitalWrite (Segment6, SegmentON);
digitalWrite (Segment7, SegmentOFF);
//digitalWrite (Segment8, SegmentON);
digitalWrite (Segment9, SegmentOFF);
digitalWrite (Segment10, SegmentOFF);

}

void Number2(){
  

digitalWrite (Segment1, SegmentON);
digitalWrite (Segment2, SegmentON);
//digitalWrite (Segment3, SegmentON);
digitalWrite (Segment4, SegmentOFF);
//digitalWrite (Segment5, SegmentOFF);
digitalWrite (Segment6, SegmentON);
digitalWrite (Segment7, SegmentON);
//digitalWrite (Segment8, SegmentON);
digitalWrite (Segment9, SegmentOFF);
digitalWrite (Segment10, SegmentON);

}

void Number3(){
  

digitalWrite (Segment1, SegmentOFF);
digitalWrite (Segment2, SegmentON);
//digitalWrite (Segment3, SegmentON);
digitalWrite (Segment4, SegmentON);
//digitalWrite (Segment5, SegmentOFF);
digitalWrite (Segment6, SegmentON);
digitalWrite (Segment7, SegmentON);
//digitalWrite (Segment8, SegmentON);
digitalWrite (Segment9, SegmentOFF);
digitalWrite (Segment10, SegmentON);

}

void Number4(){

digitalWrite (Segment1, SegmentOFF);
digitalWrite (Segment2, SegmentOFF);
//digitalWrite (Segment3, SegmentON);
digitalWrite (Segment4, SegmentON);
//digitalWrite (Segment5, SegmentOFF);
digitalWrite (Segment6, SegmentON);
digitalWrite (Segment7, SegmentOFF);
//digitalWrite (Segment8, SegmentON);
digitalWrite (Segment9, SegmentON);
digitalWrite (Segment10, SegmentON);
}

void Number5(){
  
digitalWrite (Segment1, SegmentOFF);
digitalWrite (Segment2, SegmentON);
//digitalWrite (Segment3, SegmentON);
digitalWrite (Segment4, SegmentON);
//digitalWrite (Segment5, SegmentOFF);
digitalWrite (Segment6, SegmentOFF);
digitalWrite (Segment7, SegmentON);
//digitalWrite (Segment8, SegmentON);
digitalWrite (Segment9, SegmentON);
digitalWrite (Segment10, SegmentON);

}

void Number6(){
  
digitalWrite (Segment1, SegmentON);
digitalWrite (Segment2, SegmentON);
//digitalWrite (Segment3, SegmentON);
digitalWrite (Segment4, SegmentON);
//digitalWrite (Segment5, SegmentOFF);
digitalWrite (Segment6, SegmentOFF);
digitalWrite (Segment7, SegmentON);
//digitalWrite (Segment8, SegmentON);
digitalWrite (Segment9, SegmentON);
digitalWrite (Segment10, SegmentON);
}

void Number7(){

digitalWrite (Segment1, SegmentOFF);
digitalWrite (Segment2, SegmentOFF);
//digitalWrite (Segment3, SegmentON);
digitalWrite (Segment4, SegmentON);
//digitalWrite (Segment5, SegmentOFF);
digitalWrite (Segment6, SegmentON);
digitalWrite (Segment7, SegmentON);
//digitalWrite (Segment8, SegmentON);
digitalWrite (Segment9, SegmentOFF);
digitalWrite (Segment10, SegmentOFF);
}

void Number8(){

digitalWrite (Segment1, SegmentON);
digitalWrite (Segment2, SegmentON);
//digitalWrite (Segment3, SegmentON);
digitalWrite (Segment4, SegmentON);
//digitalWrite (Segment5, SegmentOFF);
digitalWrite (Segment6, SegmentON);
digitalWrite (Segment7, SegmentON);
//digitalWrite (Segment8, SegmentON);
digitalWrite (Segment9, SegmentON);
digitalWrite (Segment10, SegmentON);

}

void Number9(){

digitalWrite (Segment1, SegmentOFF);
digitalWrite (Segment2, SegmentON);
//digitalWrite (Segment3, SegmentON);
digitalWrite (Segment4, SegmentON);
//digitalWrite (Segment5, SegmentOFF);
digitalWrite (Segment6, SegmentON);
digitalWrite (Segment7, SegmentON);
//digitalWrite (Segment8, SegmentON);
digitalWrite (Segment9, SegmentON);
digitalWrite (Segment10, SegmentON);

}





void setup() {

pinMode (Segment1, OUTPUT);
pinMode (Segment2, OUTPUT);
//pinMode (Segment3, OUTPUT);
pinMode (Segment4, OUTPUT);
//pinMode (Segment5, OUTPUT);
pinMode (Segment6, OUTPUT);
pinMode (Segment7, OUTPUT);
//pinMode (Segment8, OUTPUT);
pinMode (Segment9, OUTPUT);
pinMode (Segment10, OUTPUT);



}

void loop() {
  
Number0();
delay(1000);

Number1();
delay(1000);

Number2();
delay(1000);

Number3();
delay(1000);

Number4();
delay(1000);

Number5();
delay(1000);

Number6();
delay(1000);

Number7();
delay(1000);

Number8();
delay(1000);

Number9();
delay(1000);

}

