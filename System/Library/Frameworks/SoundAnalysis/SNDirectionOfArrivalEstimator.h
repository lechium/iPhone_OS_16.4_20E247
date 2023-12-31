//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SNDirectionOfArrivalEstimator : NSObject
{
    shared_ptr_f6ac7592 _graph;	// 8 = 0x8
    NSString *_tuningPrefix;	// 24 = 0x18
    float _azimuth;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x00000000000040b6
- (void).cxx_destruct;	// IMP=0x0000000000004090
@property(readonly, nonatomic) void *resultsBox;
- (_Bool)adaptToSystemConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000003ce7
- (id)sharedProcessorConfiguration;	// IMP=0x0000000000003cdf
- (id)resultsFromBox:(void *)arg1 renderedWithFrameCount:(int)arg2;	// IMP=0x0000000000003955
@property(readonly, nonatomic) shared_ptr_f6ac7592 graph;
- (id)initWithTuningPrefix:(id)arg1;	// IMP=0x00000000000038b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

