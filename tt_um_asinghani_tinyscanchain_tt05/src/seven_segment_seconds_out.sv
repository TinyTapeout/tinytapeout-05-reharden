/* Generated by Yosys 0.25+83 (git sha1 755b753e1, aarch64-apple-darwin20.2-clang 10.0.0-4ubuntu1 -fPIC -Os) */

(* dynports =  1  *)
(* top =  1  *)
(* src = "seven_segment_seconds.sv:3.1-44.10" *)
module seven_segment_seconds(clk, rst, ena, led_out, scan_in, scan_en, scan_out);
  wire _000_;
  wire _001_;
  wire _002_;
  wire _003_;
  wire _004_;
  wire _005_;
  wire _006_;
  (* src = "seven_segment_seconds.sv:28.26-28.38" *)
  wire _007_;
  (* src = "seven_segment_seconds.sv:28.26-28.38" *)
  wire _008_;
  (* src = "seven_segment_seconds.sv:28.26-28.38" *)
  wire _009_;
  (* src = "seven_segment_seconds.sv:28.26-28.38" *)
  wire _010_;
  (* src = "seven_segment_seconds.sv:36.35-36.56" *)
  wire _011_;
  (* src = "seven_segment_seconds.sv:36.35-36.56" *)
  wire _012_;
  (* src = "seven_segment_seconds.sv:36.35-36.56" *)
  wire _013_;
  (* src = "seven_segment_seconds.sv:36.35-36.56" *)
  wire _014_;
  (* src = "seven_segment_seconds.sv:36.35-36.56" *)
  wire _015_;
  (* src = "seven_segment_seconds.sv:36.35-36.56" *)
  wire _016_;
  (* src = "seven_segment_seconds.sv:36.35-36.56" *)
  wire _017_;
  (* src = "seven_segment_seconds.sv:36.35-36.56" *)
  wire _018_;
  (* src = "seven_segment_seconds.sv:36.35-36.56" *)
  wire _019_;
  (* src = "seven_segment_seconds.sv:36.35-36.56" *)
  wire _020_;
  (* src = "seven_segment_seconds.sv:36.35-36.56" *)
  wire _021_;
  wire _022_;
  wire _023_;
  wire _024_;
  wire _025_;
  wire _026_;
  wire _027_;
  wire _028_;
  wire _029_;
  wire _030_;
  wire _031_;
  wire _032_;
  wire _033_;
  wire _034_;
  wire _035_;
  wire _036_;
  wire _037_;
  wire _038_;
  wire _039_;
  wire _040_;
  wire _041_;
  wire _042_;
  wire _043_;
  wire _044_;
  wire _045_;
  wire _046_;
  wire _047_;
  wire _048_;
  wire _049_;
  wire _050_;
  wire _051_;
  wire _052_;
  (* src = "seven_segment_seconds.sv:23.17-23.44" *)
  wire _053_;
  (* src = "seven_segment_seconds.sv:31.21-31.31" *)
  wire _054_;
  wire _055_;
  wire _056_;
  wire _057_;
  wire _058_;
  wire _059_;
  wire _060_;
  wire _061_;
  wire _062_;
  wire _063_;
  wire _064_;
  wire _065_;
  wire _066_;
  wire _067_;
  wire _068_;
  wire _069_;
  wire _070_;
  wire _071_;
  wire _072_;
  wire _073_;
  wire _074_;
  wire _075_;
  wire _076_;
  wire _077_;
  wire _078_;
  wire _079_;
  wire _080_;
  wire _081_;
  wire _082_;
  (* src = "seven_segment_seconds.sv:6.17-6.20" *)
  input clk;
  wire clk;
  (* src = "seven_segment_seconds.sv:14.15-14.20" *)
  wire \digit[0] ;
  (* src = "seven_segment_seconds.sv:14.15-14.20" *)
  wire \digit[1] ;
  (* src = "seven_segment_seconds.sv:14.15-14.20" *)
  wire \digit[2] ;
  (* src = "seven_segment_seconds.sv:14.15-14.20" *)
  wire \digit[3] ;
  (* src = "seven_segment_seconds.sv:8.17-8.20" *)
  input ena;
  wire ena;
  (* src = "seven_segment_seconds.sv:9.24-9.31" *)
  output [6:0] led_out;
  reg [6:0] led_out;
  (* src = "seven_segment_seconds.sv:7.17-7.20" *)
  input rst;
  wire rst;
  input scan_en;
  wire scan_en;
  input scan_in;
  wire scan_in;
  output scan_out;
  reg scan_out;
  (* src = "seven_segment_seconds.sv:13.31-13.45" *)
  reg \second_counter[0] ;
  (* src = "seven_segment_seconds.sv:13.31-13.45" *)
  reg \second_counter[10] ;
  (* src = "seven_segment_seconds.sv:13.31-13.45" *)
  reg \second_counter[1] ;
  (* src = "seven_segment_seconds.sv:13.31-13.45" *)
  reg \second_counter[2] ;
  (* src = "seven_segment_seconds.sv:13.31-13.45" *)
  reg \second_counter[3] ;
  (* src = "seven_segment_seconds.sv:13.31-13.45" *)
  reg \second_counter[4] ;
  (* src = "seven_segment_seconds.sv:13.31-13.45" *)
  reg \second_counter[5] ;
  (* src = "seven_segment_seconds.sv:13.31-13.45" *)
  reg \second_counter[6] ;
  (* src = "seven_segment_seconds.sv:13.31-13.45" *)
  reg \second_counter[7] ;
  (* src = "seven_segment_seconds.sv:13.31-13.45" *)
  reg \second_counter[8] ;
  (* src = "seven_segment_seconds.sv:13.31-13.45" *)
  wire \second_counter[9] ;
  (* hdlname = "seg7 counter" *)
  (* src = "seven_segment_seconds.sv:42.10-42.51|seven_segment_seconds.sv:47.22-47.29" *)
  reg \seg7.counter[0] ;
  (* hdlname = "seg7 counter" *)
  (* src = "seven_segment_seconds.sv:42.10-42.51|seven_segment_seconds.sv:47.22-47.29" *)
  reg \seg7.counter[1] ;
  (* hdlname = "seg7 counter" *)
  (* src = "seven_segment_seconds.sv:42.10-42.51|seven_segment_seconds.sv:47.22-47.29" *)
  reg \seg7.counter[2] ;
  (* hdlname = "seg7 counter" *)
  (* src = "seven_segment_seconds.sv:42.10-42.51|seven_segment_seconds.sv:47.22-47.29" *)
  reg \seg7.counter[3] ;
  (* hdlname = "seg7 segments" *)
  (* src = "seven_segment_seconds.sv:42.10-42.51|seven_segment_seconds.sv:48.22-48.30" *)
  wire \seg7.segments[0] ;
  (* hdlname = "seg7 segments" *)
  (* src = "seven_segment_seconds.sv:42.10-42.51|seven_segment_seconds.sv:48.22-48.30" *)
  wire \seg7.segments[1] ;
  (* hdlname = "seg7 segments" *)
  (* src = "seven_segment_seconds.sv:42.10-42.51|seven_segment_seconds.sv:48.22-48.30" *)
  wire \seg7.segments[2] ;
  (* hdlname = "seg7 segments" *)
  (* src = "seven_segment_seconds.sv:42.10-42.51|seven_segment_seconds.sv:48.22-48.30" *)
  wire \seg7.segments[3] ;
  (* hdlname = "seg7 segments" *)
  (* src = "seven_segment_seconds.sv:42.10-42.51|seven_segment_seconds.sv:48.22-48.30" *)
  wire \seg7.segments[4] ;
  (* hdlname = "seg7 segments" *)
  (* src = "seven_segment_seconds.sv:42.10-42.51|seven_segment_seconds.sv:48.22-48.30" *)
  wire \seg7.segments[5] ;
  (* hdlname = "seg7 segments" *)
  (* src = "seven_segment_seconds.sv:42.10-42.51|seven_segment_seconds.sv:48.22-48.30" *)
  wire \seg7.segments[6] ;
  always @(posedge clk)
    led_out[0] <= _036_;
  always @(posedge clk)
    led_out[1] <= _035_;
  always @(posedge clk)
    led_out[2] <= _034_;
  always @(posedge clk)
    led_out[3] <= _032_;
  always @(posedge clk)
    led_out[4] <= _031_;
  always @(posedge clk)
    led_out[5] <= _030_;
  always @(posedge clk)
    led_out[6] <= _029_;
  assign { _010_, _009_, _008_, _007_ } = { \seg7.counter[3] , \seg7.counter[2] , \seg7.counter[1] , \seg7.counter[0]  } + (* src = "seven_segment_seconds.sv:28.26-28.38" *) 1'h1;
  assign { _012_, _021_, _020_, _019_, _018_, _017_, _016_, _015_, _014_, _013_, _011_ } = { \second_counter[10] , scan_out, \second_counter[8] , \second_counter[7] , \second_counter[6] , \second_counter[5] , \second_counter[4] , \second_counter[3] , \second_counter[2] , \second_counter[1] , \second_counter[0]  } + (* src = "seven_segment_seconds.sv:36.35-36.56" *) 1'h1;
  (* src = "seven_segment_seconds.sv:16.5-39.8" *)
  always @(posedge clk)
    if (rst) \seg7.counter[0]  <= 1'h0;
    else \seg7.counter[0]  <= _028_;
  (* src = "seven_segment_seconds.sv:16.5-39.8" *)
  always @(posedge clk)
    if (rst) \seg7.counter[1]  <= 1'h0;
    else \seg7.counter[1]  <= _027_;
  (* src = "seven_segment_seconds.sv:16.5-39.8" *)
  always @(posedge clk)
    if (rst) \seg7.counter[2]  <= 1'h0;
    else \seg7.counter[2]  <= _026_;
  (* src = "seven_segment_seconds.sv:16.5-39.8" *)
  always @(posedge clk)
    if (rst) \seg7.counter[3]  <= 1'h0;
    else \seg7.counter[3]  <= _025_;
  (* src = "seven_segment_seconds.sv:16.5-39.8" *)
  always @(posedge clk)
    if (_044_) \second_counter[0]  <= 1'h0;
    else \second_counter[0]  <= _024_;
  (* src = "seven_segment_seconds.sv:16.5-39.8" *)
  always @(posedge clk)
    if (_044_) \second_counter[10]  <= 1'h0;
    else \second_counter[10]  <= _023_;
  (* src = "seven_segment_seconds.sv:16.5-39.8" *)
  always @(posedge clk)
    if (_044_) \second_counter[1]  <= 1'h0;
    else \second_counter[1]  <= _043_;
  (* src = "seven_segment_seconds.sv:16.5-39.8" *)
  always @(posedge clk)
    if (_044_) \second_counter[2]  <= 1'h0;
    else \second_counter[2]  <= _042_;
  (* src = "seven_segment_seconds.sv:16.5-39.8" *)
  always @(posedge clk)
    if (_044_) \second_counter[3]  <= 1'h0;
    else \second_counter[3]  <= _041_;
  (* src = "seven_segment_seconds.sv:16.5-39.8" *)
  always @(posedge clk)
    if (_044_) \second_counter[4]  <= 1'h0;
    else \second_counter[4]  <= _040_;
  (* src = "seven_segment_seconds.sv:16.5-39.8" *)
  always @(posedge clk)
    if (_044_) \second_counter[5]  <= 1'h0;
    else \second_counter[5]  <= _039_;
  (* src = "seven_segment_seconds.sv:16.5-39.8" *)
  always @(posedge clk)
    if (_044_) \second_counter[6]  <= 1'h0;
    else \second_counter[6]  <= _038_;
  (* src = "seven_segment_seconds.sv:16.5-39.8" *)
  always @(posedge clk)
    if (_044_) \second_counter[7]  <= 1'h0;
    else \second_counter[7]  <= _037_;
  (* src = "seven_segment_seconds.sv:16.5-39.8" *)
  always @(posedge clk)
    if (_044_) \second_counter[8]  <= 1'h0;
    else \second_counter[8]  <= _033_;
  (* src = "seven_segment_seconds.sv:16.5-39.8" *)
  always @(posedge clk)
    if (_044_) scan_out <= 1'h0;
    else scan_out <= _022_;
  assign _045_ = _053_ ? _079_ : \seg7.counter[0] ;
  assign _046_ = _053_ ? _080_ : \seg7.counter[1] ;
  assign _047_ = _053_ ? _081_ : \seg7.counter[2] ;
  assign _048_ = _053_ ? _082_ : \seg7.counter[3] ;
  assign _049_ = rst ? 1'h0 : _045_;
  assign _050_ = rst ? 1'h0 : _046_;
  assign _051_ = rst ? 1'h0 : _047_;
  assign _052_ = rst ? 1'h0 : _048_;
  assign _044_ = | { _053_, rst };
  assign _053_ = { \second_counter[10] , scan_out, \second_counter[8] , \second_counter[7] , \second_counter[6] , \second_counter[5] , \second_counter[4] , \second_counter[3] , \second_counter[2] , \second_counter[1] , \second_counter[0]  } == (* src = "seven_segment_seconds.sv:23.17-23.44" *) 10'h3e8;
  assign _054_ = { \seg7.counter[3] , \seg7.counter[2] , \seg7.counter[1] , \seg7.counter[0]  } == (* src = "seven_segment_seconds.sv:31.21-31.31" *) 4'h9;
  assign _000_ = _052_ ? _062_ : _055_;
  assign _001_ = _052_ ? _063_ : _056_;
  assign _002_ = _052_ ? _064_ : _057_;
  assign _003_ = _052_ ? _065_ : _058_;
  assign _004_ = _052_ ? _066_ : _059_;
  assign _005_ = _052_ ? _067_ : _060_;
  assign _006_ = _052_ ? _068_ : _061_;
  assign _055_ = _051_ ? _073_ : _069_;
  assign _056_ = _051_ ? _074_ : 1'h1;
  assign _057_ = _070_ | _051_;
  assign _058_ = _051_ ? _075_ : _069_;
  assign _059_ = _051_ ? _076_ : _071_;
  assign _060_ = _051_ ? _077_ : _072_;
  assign _061_ = _051_ ? _077_ : _050_;
  assign _062_ = _051_ ? _069_ : _077_;
  assign _063_ = _051_ ? _078_ : _077_;
  assign _064_ = _051_ ? _078_ : 1'h1;
  assign _065_ = _051_ ? _077_ : _070_;
  assign _066_ = _069_ | _051_;
  assign _067_ = _051_ ? _069_ : 1'h1;
  assign _068_ = _051_ ? _073_ : 1'h1;
  assign _069_ = _071_ | _050_;
  assign _070_ = _050_ ? _049_ : 1'h1;
  assign _072_ = _050_ ? 1'h0 : _071_;
  assign _073_ = _049_ | _050_;
  assign _074_ = _050_ ? _049_ : _071_;
  assign _075_ = _050_ ? _071_ : _049_;
  assign _076_ = _050_ & _071_;
  assign _078_ = _050_ ? 1'h0 : _049_;
  assign _077_ = _050_ ? _071_ : 1'h1;
  assign _071_ = ~ _049_;
  assign _079_ = _054_ ? (* src = "seven_segment_seconds.sv:31.21-31.31|seven_segment_seconds.sv:31.17-32.32" *) 1'h0 : _007_;
  assign _080_ = _054_ ? (* src = "seven_segment_seconds.sv:31.21-31.31|seven_segment_seconds.sv:31.17-32.32" *) 1'h0 : _008_;
  assign _081_ = _054_ ? (* src = "seven_segment_seconds.sv:31.21-31.31|seven_segment_seconds.sv:31.17-32.32" *) 1'h0 : _009_;
  assign _082_ = _054_ ? (* src = "seven_segment_seconds.sv:31.21-31.31|seven_segment_seconds.sv:31.17-32.32" *) 1'h0 : _010_;
  assign _030_ = scan_en ? led_out[4] : _005_;
  assign _029_ = scan_en ? led_out[5] : _006_;
  assign _028_ = scan_en ? led_out[6] : _045_;
  assign _027_ = scan_en ? \seg7.counter[0]  : _046_;
  assign _026_ = scan_en ? \seg7.counter[1]  : _047_;
  assign _025_ = scan_en ? \seg7.counter[2]  : _048_;
  assign _024_ = scan_en ? \seg7.counter[3]  : _011_;
  assign _023_ = scan_en ? \second_counter[0]  : _012_;
  assign _043_ = scan_en ? \second_counter[10]  : _013_;
  assign _042_ = scan_en ? \second_counter[1]  : _014_;
  assign _041_ = scan_en ? \second_counter[2]  : _015_;
  assign _040_ = scan_en ? \second_counter[3]  : _016_;
  assign _039_ = scan_en ? \second_counter[4]  : _017_;
  assign _038_ = scan_en ? \second_counter[5]  : _018_;
  assign _037_ = scan_en ? \second_counter[6]  : _019_;
  assign _033_ = scan_en ? \second_counter[7]  : _020_;
  assign _022_ = scan_en ? \second_counter[8]  : _021_;
  assign _036_ = scan_en ? scan_in : _000_;
  assign _035_ = scan_en ? led_out[0] : _001_;
  assign _034_ = scan_en ? led_out[1] : _002_;
  assign _032_ = scan_en ? led_out[2] : _003_;
  assign _031_ = scan_en ? led_out[3] : _004_;
  assign \digit[0]  = \seg7.counter[0] ;
  assign \digit[1]  = \seg7.counter[1] ;
  assign \digit[2]  = \seg7.counter[2] ;
  assign \digit[3]  = \seg7.counter[3] ;
  assign \second_counter[9]  = scan_out;
  assign \seg7.segments[0]  = led_out[0];
  assign \seg7.segments[1]  = led_out[1];
  assign \seg7.segments[2]  = led_out[2];
  assign \seg7.segments[3]  = led_out[3];
  assign \seg7.segments[4]  = led_out[4];
  assign \seg7.segments[5]  = led_out[5];
  assign \seg7.segments[6]  = led_out[6];
endmodule
