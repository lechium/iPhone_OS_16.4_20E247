//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC7remindd18RDDaemonController : NSObject
{
    MISSING_TYPE *xpcDaemon;	// 8 = 0x8
    MISSING_TYPE *clientIdentity;	// 24 = 0x18
    MISSING_TYPE *storeContainerToken;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x004000000052e3c0
- (id)init;	// IMP=0x001000000052e360
- (void)invalidate;	// IMP=0x001000000052e350
- (void)asyncIndexingPerformerWithReason:(id)arg1 loadHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000052e290
- (id)syncIndexingPerformerWithReason:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000052e200
- (void)asyncSyncInterfacePerformerWithReason:(id)arg1 loadHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000052e1e0
- (id)syncSyncInterfacePerformerWithReason:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000052e1c0
- (void)asyncStorePerformerWithReason:(id)arg1 loadHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000052e1a0
- (id)syncStorePerformerWithReason:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000052e180
- (id)syncDebugPerformerWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000052e110
- (id)syncDebugPerformerWithReason:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000052e0f0
- (id)syncChangeTrackingPerformerWithReason:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000052e0d0

@end
