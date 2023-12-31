//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface BitrateLimits : NSObject
{
    unsigned long long defaultValue;	// 8 = 0x8
    unsigned long long defaultValueCellular;	// 16 = 0x10
    unsigned long long defaultValue2G;	// 24 = 0x18
    NSArray *limits;	// 32 = 0x20
}

+ (unsigned long long)insertionIndex:(id)arg1 forValue:(id)arg2;	// IMP=0x00600000002e7c1d
@property(readonly, nonatomic) NSArray *limits; // @synthesize limits;
- (unsigned long long)defaultValueForNetwork:(_Bool)arg1;	// IMP=0x00000000002e7c10
- (void)capDefaultValues:(unsigned long long)arg1;	// IMP=0x00000000002e7b60
- (void)dealloc;	// IMP=0x00000000002e7b02
- (id)initWithOperatingMode:(int)arg1 withBitrateCap:(unsigned long long)arg2 useCaseWatchContinuity:(_Bool)arg3;	// IMP=0x00000000002e79c4

@end

