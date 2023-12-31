//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, VCPVideoMetaFocusSegment;

__attribute__((visibility("hidden")))
@interface VCPVideoMetaFocusAnalyzer : NSObject
{
    VCPVideoMetaFocusSegment *_activeSegment;	// 8 = 0x8
    NSMutableArray *_mutableResults;	// 16 = 0x10
    CDStruct_e83c9415 _frameTimeRange;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002489e2
@property(readonly, retain, nonatomic) NSArray *results;
- (int)finalizeAnalysis;	// IMP=0x000000000024893d
- (void)addSegmentToResults;	// IMP=0x0000000000248710
- (int)processFrameMetadata:(id)arg1;	// IMP=0x0000000000248506
- (id)init;	// IMP=0x0000000000248420

@end

