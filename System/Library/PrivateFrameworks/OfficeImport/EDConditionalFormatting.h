//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDReferenceCollection, NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDConditionalFormatting : NSObject
{
    NSMutableArray *mRules;	// 8 = 0x8
    EDReferenceCollection *mRanges;	// 16 = 0x10
    _Bool mApplyToDate;	// 24 = 0x18
}

+ (id)conditionalFormatting;	// IMP=0x006000000039fb9c
- (void).cxx_destruct;	// IMP=0x000000000039fccd
- (id)description;	// IMP=0x000000000039fc8f
- (_Bool)isApplyToDate;	// IMP=0x000000000039fc86
- (void)addRange:(id)arg1;	// IMP=0x000000000014c11e
- (id)rangeAtIndex:(unsigned long long)arg1;	// IMP=0x000000000039fc3b
- (unsigned long long)rangeCount;	// IMP=0x000000000039fc25
- (id)rules;	// IMP=0x000000000039fc17
- (void)addRule:(id)arg1;	// IMP=0x000000000014cf00
- (id)ruleAtIndex:(unsigned long long)arg1;	// IMP=0x000000000039fbcc
- (unsigned long long)ruleCount;	// IMP=0x000000000039fbb6
- (id)init;	// IMP=0x000000000014bb3d

@end
