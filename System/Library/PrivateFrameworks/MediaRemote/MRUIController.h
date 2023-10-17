//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;
@protocol MRUIServerXPCProtocol;

__attribute__((visibility("hidden")))
@interface MRUIController : NSObject
{
    _Bool _hasLockScreenControlsAssertion;	// 8 = 0x8
    _Bool _hasQuickControlsAssertion;	// 9 = 0x9
    _Bool _hasScreenMirroringQuickControlsAssertion;	// 10 = 0xa
    _Bool _shouldRestoreState;	// 11 = 0xb
    struct os_unfair_lock_s _lock;	// 12 = 0xc
    NSXPCConnection *_xpcConnection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000231959
@property(nonatomic) _Bool shouldRestoreState; // @synthesize shouldRestoreState=_shouldRestoreState;
@property(nonatomic) _Bool hasScreenMirroringQuickControlsAssertion; // @synthesize hasScreenMirroringQuickControlsAssertion=_hasScreenMirroringQuickControlsAssertion;
@property(nonatomic) _Bool hasQuickControlsAssertion; // @synthesize hasQuickControlsAssertion=_hasQuickControlsAssertion;
@property(nonatomic) _Bool hasLockScreenControlsAssertion; // @synthesize hasLockScreenControlsAssertion=_hasLockScreenControlsAssertion;
@property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
- (id)contextForActivityIdentifier:(id)arg1;	// IMP=0x00000000002317d7
- (void)releaseScreenMirroringQuickControlsAssertion;	// IMP=0x000000000023177b
- (void)acquireScreenMirroringQuickControlsAssertion;	// IMP=0x000000000023171c
- (void)releaseQuickControlsAssertion;	// IMP=0x00000000002316c0
- (id)acquireQuickControlsAssertion;	// IMP=0x0000000000231571
- (void)releaseLockScreenControlsAssertion;	// IMP=0x0000000000231515
- (void)acquireLockScreenControlsAssertion;	// IMP=0x00000000002314b6
@property(readonly, nonatomic) id <MRUIServerXPCProtocol> server;
@property(readonly, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (_Bool)hasUIAssertions;	// IMP=0x0000000000230e41
- (void)dealloc;	// IMP=0x0000000000230bf6
- (void)_restoreState;	// IMP=0x0000000000230927
- (id)init;	// IMP=0x0000000000230863

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
