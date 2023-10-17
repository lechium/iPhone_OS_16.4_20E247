//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PSYServiceSyncSession;

@interface ABSProgressReporter : NSObject
{
    _Bool _calledDidComplete;	// 8 = 0x8
    double _start;	// 16 = 0x10
    PSYServiceSyncSession *_session;	// 24 = 0x18
    double _elapsed;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000003d397
@property(nonatomic) double elapsed; // @synthesize elapsed=_elapsed;
@property(retain, nonatomic) PSYServiceSyncSession *session; // @synthesize session=_session;
- (void)resume;	// IMP=0x001000000003d360
- (void)pause;	// IMP=0x001000000003d35a
- (void)doneForRealNotifyingPairedSync:(_Bool)arg1;	// IMP=0x001000000003d1d5
- (id)initWithSession:(id)arg1;	// IMP=0x001000000003d160

@end
