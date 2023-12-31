//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SNNullDetector : NSObject
{
    shared_ptr_f6ac7592 _graph;	// 8 = 0x8
    _Bool _graphIsDeadEnded;	// 24 = 0x18
    _Bool _shouldThrowException;	// 25 = 0x19
    unsigned int _blockSize;	// 28 = 0x1c
    double _sampleRate;	// 32 = 0x20
    double _computationalDutyCycle;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x000000000007044a
- (void).cxx_destruct;	// IMP=0x000000000007043c
@property(readonly, nonatomic) void *resultsBox;
- (_Bool)adaptToSystemConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000700f7
- (id)sharedProcessorConfiguration;	// IMP=0x00000000000700ef
- (id)resultsFromBox:(void *)arg1 renderedWithFrameCount:(int)arg2;	// IMP=0x000000000006fddb
@property(readonly, nonatomic) shared_ptr_f6ac7592 graph;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

