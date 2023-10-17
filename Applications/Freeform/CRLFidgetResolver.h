//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CRLFidgetResolver : NSObject
{
    double _fidgetThreshold;	// 8 = 0x8
    id _values[10];	// 16 = 0x10
    double _times[10];	// 96 = 0x60
    unsigned long long _head;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x00200000000663fe
@property(nonatomic) double fidgetThreshold; // @synthesize fidgetThreshold=_fidgetThreshold;
- (unsigned long long)p_previousValidIndexFromIndex:(unsigned long long)arg1;	// IMP=0x00100000000663d5
- (void)p_advanceHead;	// IMP=0x00100000000663b4
- (void)pushValue:(id)arg1 withTime:(double)arg2;	// IMP=0x0010000000066353
- (void)pushValue:(id)arg1;	// IMP=0x0010000000066318
@property(readonly, nonatomic) id nonFidgetValue;
- (id)init;	// IMP=0x0010000000066207

@end
