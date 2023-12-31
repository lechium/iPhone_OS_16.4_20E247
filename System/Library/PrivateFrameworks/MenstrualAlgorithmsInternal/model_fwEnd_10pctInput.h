//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface model_fwEnd_10pctInput : NSObject
{
    MLMultiArray *_in_;	// 8 = 0x8
    MLMultiArray *_lstm_1_h_in;	// 16 = 0x10
    MLMultiArray *_lstm_1_c_in;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000005862c
@property(retain, nonatomic) MLMultiArray *lstm_1_c_in; // @synthesize lstm_1_c_in=_lstm_1_c_in;
@property(retain, nonatomic) MLMultiArray *lstm_1_h_in; // @synthesize lstm_1_h_in=_lstm_1_h_in;
@property(retain, nonatomic) MLMultiArray *in_; // @synthesize in_=_in_;
- (id)featureValueForName:(id)arg1;	// IMP=0x0000000000058485
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithIn:(id)arg1 lstm_1_h_in:(id)arg2 lstm_1_c_in:(id)arg3;	// IMP=0x00000000000583ae
- (id)initWithIn:(id)arg1;	// IMP=0x0000000000058397

@end

