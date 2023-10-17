//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, CNUICoreRecentsManager, GKServiceProxy;
@protocol CNCancelable, CNScheduler, CNSchedulerProvider;

__attribute__((visibility("hidden")))
@interface CNCardGameCenterManager : NSObject
{
    _Bool _hasCheckedAuthenticatedLocalPlayer;	// 8 = 0x8
    CNContact *_contact;	// 16 = 0x10
    CNUICoreRecentsManager *_recentsManager;	// 24 = 0x18
    id <CNSchedulerProvider> _schedulerProvider;	// 32 = 0x20
    id <CNScheduler> _workQueue;	// 40 = 0x28
    id <CNCancelable> _relationshipResultsCancelable;	// 48 = 0x30
    GKServiceProxy *_gameCenterProxy;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001a9a8f
@property(nonatomic) _Bool hasCheckedAuthenticatedLocalPlayer; // @synthesize hasCheckedAuthenticatedLocalPlayer=_hasCheckedAuthenticatedLocalPlayer;
@property(retain, nonatomic) GKServiceProxy *gameCenterProxy; // @synthesize gameCenterProxy=_gameCenterProxy;
@property(retain, nonatomic) id <CNCancelable> relationshipResultsCancelable; // @synthesize relationshipResultsCancelable=_relationshipResultsCancelable;
@property(readonly, nonatomic) id <CNScheduler> workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(retain, nonatomic) CNUICoreRecentsManager *recentsManager; // @synthesize recentsManager=_recentsManager;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (id)handlesForContact:(id)arg1;	// IMP=0x00000000001a991f
- (id)defaultFriendResultFromFriendResults:(id)arg1 forContact:(id)arg2;	// IMP=0x00000000001a970b
- (void)handleResults:(id)arg1 forContact:(id)arg2 error:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001a9402
- (void)refreshGameCenterRelationshipsForContact:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a92a7
- (void)getGameCenterRelationshipsForContact:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a914c
- (_Bool)shouldActionDisplayDropdownMenu;	// IMP=0x00000000001a9074
- (id)handles;	// IMP=0x00000000001a9015
- (id)init;	// IMP=0x00000000001a8f05

@end
