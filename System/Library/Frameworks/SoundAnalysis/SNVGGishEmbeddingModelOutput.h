//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface SNVGGishEmbeddingModelOutput : NSObject
{
    MLMultiArray *_output1;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000008c696
@property(retain, nonatomic) MLMultiArray *output1; // @synthesize output1=_output1;
- (id)featureValueForName:(id)arg1;	// IMP=0x000000000008c5f1
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithOutput1:(id)arg1;	// IMP=0x000000000008c566

@end

