//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface fwEnddet_rfOutput : NSObject
{
    long long _classLabel;	// 8 = 0x8
    NSDictionary *_classProbability;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000569d9
@property(retain, nonatomic) NSDictionary *classProbability; // @synthesize classProbability=_classProbability;
@property(nonatomic) long long classLabel; // @synthesize classLabel=_classLabel;
- (id)featureValueForName:(id)arg1;	// IMP=0x00000000000568ba
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithClassLabel:(long long)arg1 classProbability:(id)arg2;	// IMP=0x0000000000056824

@end

