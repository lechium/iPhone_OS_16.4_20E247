//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface OTSOSMissingAdapter : NSObject
{
    _Bool sosEnabled;	// 8 = 0x8
    _Bool _essential;	// 9 = 0x9
    NSString *_providerID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000941da
@property _Bool essential; // @synthesize essential=_essential;
@property(readonly) NSString *providerID; // @synthesize providerID=_providerID;
@property _Bool sosEnabled; // @synthesize sosEnabled;
- (_Bool)resetToOffering:(id *)arg1;	// IMP=0x0010000000094148
- (_Bool)joinAfterRestore:(id *)arg1;	// IMP=0x00100000000940f2
- (_Bool)preloadOctagonKeySetOnAccount:(id)arg1 error:(id *)arg2;	// IMP=0x001000000009409c
- (_Bool)safariViewSyncingEnabled:(id *)arg1;	// IMP=0x0010000000094094
- (id)currentState;	// IMP=0x0010000000093fc8
- (void)sendTrustedPeerSetChangedUpdate;	// IMP=0x0010000000093fc2
- (void)sendSelfPeerChangedUpdate;	// IMP=0x0010000000093fbc
- (void)registerForPeerChangeUpdates:(id)arg1;	// IMP=0x0010000000093fb6
- (id)fetchSelfPeers:(id *)arg1;	// IMP=0x0010000000093f60
- (_Bool)updateCKKS4AllStatus:(_Bool)arg1 error:(id *)arg2;	// IMP=0x0010000000093f0a
- (_Bool)updateOctagonKeySetWithAccount:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000093eb4
- (id)fetchTrustedPeers:(id *)arg1;	// IMP=0x0010000000093e5e
- (id)currentSOSSelf:(id *)arg1;	// IMP=0x0010000000093e08
- (int)circleStatus:(id *)arg1;	// IMP=0x0010000000093dfd
- (id)init;	// IMP=0x0010000000093d96

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

