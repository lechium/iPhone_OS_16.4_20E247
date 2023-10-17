//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSNumber;

__attribute__((visibility("hidden")))
@interface WFLSMResult : NSObject
{
    NSMutableArray *categoryJudgements;	// 8 = 0x8
    NSNumber *threshold;	// 16 = 0x10
}

+ (id)LSMResultWithLSMResultRef:(struct __LSMResult *)arg1 threshold:(id)arg2;	// IMP=0x0060000000004515
+ (id)extractScoresFromLSMResults:(struct __LSMResult *)arg1;	// IMP=0x006000000000446d
@property(copy) NSNumber *threshold; // @synthesize threshold;
- (void)dealloc;	// IMP=0x0000000000004a11
- (id)description;	// IMP=0x0000000000004980
- (_Bool)isRestricted;	// IMP=0x00000000000048fa
- (id)debugDescription;	// IMP=0x00000000000047fc
- (void)setScore:(float)arg1 forCategory:(long long)arg2;	// IMP=0x00000000000047c0
- (float)scoreForCategory:(long long)arg1;	// IMP=0x000000000000478e
- (long long)bestMatchingCategory;	// IMP=0x0000000000004613
- (long long)numberOfCategories;	// IMP=0x00000000000045fd
- (id)initWithLSMResultRef:(struct __LSMResult *)arg1 threshold:(id)arg2;	// IMP=0x0000000000004551

@end
