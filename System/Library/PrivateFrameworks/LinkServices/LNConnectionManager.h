//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LNTranscriptPrivilegedProvider, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface LNConnectionManager : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_connectionsByBundleIdentifier;	// 16 = 0x10
    LNTranscriptPrivilegedProvider *_transcriptProvider;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x001000000008ee71
- (void).cxx_destruct;	// IMP=0x000000000008ed64
@property(readonly, nonatomic) LNTranscriptPrivilegedProvider *transcriptProvider; // @synthesize transcriptProvider=_transcriptProvider;
@property(readonly, nonatomic) NSMutableDictionary *connectionsByBundleIdentifier; // @synthesize connectionsByBundleIdentifier=_connectionsByBundleIdentifier;
- (void)removeConnection:(id)arg1;	// IMP=0x000000000008ecb1
- (void)addConnection:(id)arg1;	// IMP=0x000000000008ebfe
- (void)connection:(id)arg1 didCloseWithError:(id)arg2;	// IMP=0x000000000008eb38
- (void)donateActionRecord:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000008e8aa
- (id)connectionForBundleIdentifier:(id)arg1 appBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000008e740
- (void)invalidateAllConnections;	// IMP=0x000000000008e55b
- (void)appWillResignActive:(id)arg1;	// IMP=0x000000000008e4df
- (id)init;	// IMP=0x000000000008e3fb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
