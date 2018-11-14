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

void showNum(){

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


}

void loop() {
  
showNum(9);

}

