//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSPersistentMap;

@interface IDSInvitationStore : NSObject
{
    IDSPersistentMap *_persistentMap;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000014f020
@property(retain, nonatomic) IDSPersistentMap *persistentMap; // @synthesize persistentMap=_persistentMap;
- (void)removeReceivedInvitation:(id)arg1 forService:(id)arg2;	// IMP=0x001000000014ee30
- (void)persistReceivedInvitation:(id)arg1 forService:(id)arg2 withUniqueID:(id)arg3;	// IMP=0x001000000014ec50
- (id)persistedReceivedInvitationsForService:(id)arg1;	// IMP=0x001000000014eb80
- (void)removePendingInvitation:(id)arg1 forService:(id)arg2;	// IMP=0x001000000014e9e0
- (void)persistPendingInvitation:(id)arg1 forService:(id)arg2 withUniqueID:(id)arg3;	// IMP=0x001000000014e800
- (id);	// IMP=0x001000000014e730
- (_Bool)isEmpty;	// IMP=0x001000000014e6a0
- (id)init;	// IMP=0x001000000014e550

@end

