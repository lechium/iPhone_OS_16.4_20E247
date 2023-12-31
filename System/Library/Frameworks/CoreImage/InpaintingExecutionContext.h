//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface InpaintingExecutionContext : NSObject
{
    NSMutableArray *processingResolutions;	// 8 = 0x8
    NSMutableArray *executionTimes;	// 16 = 0x10
    int _lastNumberOfTilesUsed;	// 24 = 0x18
    NSString *_lastModelResourceUsed;	// 32 = 0x20
    int _lastInpaintingModeUsed;	// 40 = 0x28
}

@property int lastInpaintingModeUsed; // @synthesize lastInpaintingModeUsed=_lastInpaintingModeUsed;
@property(retain) NSString *lastModelResourceUsed; // @synthesize lastModelResourceUsed=_lastModelResourceUsed;
@property int lastNumberOfTilesUsed; // @synthesize lastNumberOfTilesUsed=_lastNumberOfTilesUsed;
- (void)dealloc;	// IMP=0x00000000000574c5
- (id)executionTimesLog;	// IMP=0x00000000000574a5
- (id)processingResolutionsLog;	// IMP=0x0000000000057485
- (void)appendProcessingResolution:(int)arg1 andTime:(double)arg2;	// IMP=0x000000000005740b
- (double)lastExecutionTime;	// IMP=0x00000000000573be
- (int)lastProcessingResolution;	// IMP=0x0000000000057372
- (int)filterProcessingCount;	// IMP=0x000000000005735c
- (id)CIImageProcessorDigestObject;	// IMP=0x0000000000057343
- (id)init;	// IMP=0x00000000000572b8

@end

