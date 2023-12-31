//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EFCancelationToken, EFPair, EFQuery, EMMailboxScope, EMMessageRepository, NSString;
@protocol EMMessageRepositoryCountQueryObserver;

__attribute__((visibility("hidden")))
@interface _EMMessageRepositoryCountingQueryObserver : NSObject
{
    EMMessageRepository *_repository;	// 8 = 0x8
    EFQuery *_query;	// 16 = 0x10
    EMMailboxScope *_serverCountMailboxScope;	// 24 = 0x18
    id <EMMessageRepositoryCountQueryObserver> _observer;	// 32 = 0x20
    EFCancelationToken *_token;	// 40 = 0x28
    EFPair *_queryIdentifier;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000073711
@property(readonly) EFPair *queryIdentifier; // @synthesize queryIdentifier=_queryIdentifier;
- (void)countDidChange:(long long)arg1 acknowledgementToken:(id)arg2;	// IMP=0x000000000007346b
- (void)_performQueryWithRemoteConnection:(id)arg1 forRecovery:(_Bool)arg2;	// IMP=0x0000000000073324
- (void)recoverQueryWithRemoteConnection:(id)arg1;	// IMP=0x000000000007330c
- (void)performQueryWithRemoteConnection:(id)arg1;	// IMP=0x00000000000732f7
- (void)cancel;	// IMP=0x00000000000732e1
- (void)dealloc;	// IMP=0x000000000007326d
- (id)initWithRepository:(id)arg1 queryIdentifier:(id)arg2 includingServerCountsForMailboxScope:(id)arg3 observer:(id)arg4;	// IMP=0x0000000000073141

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

