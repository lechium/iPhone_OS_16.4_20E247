//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface PADVNPrintReplayS2ModelOutput : NSObject
{
    MLMultiArray *_score0_1;	// 8 = 0x8
    MLMultiArray *_embedding0_1;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001c1c8
@property(retain, nonatomic) MLMultiArray *embedding0_1; // @synthesize embedding0_1=_embedding0_1;
@property(retain, nonatomic) MLMultiArray *score0_1; // @synthesize score0_1=_score0_1;
- (id)featureValueForName:(id)arg1;	// IMP=0x000000000001c0c2
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithScore0_1:(id)arg1 embedding0_1:(id)arg2;	// IMP=0x000000000001c009

@end
