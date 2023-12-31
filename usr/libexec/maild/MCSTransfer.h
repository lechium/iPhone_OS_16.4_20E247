//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCSFlagChange, MFMailboxUid, NSDictionary;

@interface MCSTransfer
{
    MFMailboxUid *_destination;	// 16 = 0x10
    int _specialType;	// 24 = 0x18
    MCSFlagChange *_equivalentFlagChange;	// 32 = 0x20
    unsigned int _markAsRead:1;	// 40 = 0x28
    unsigned int _deleteIfSame:1;	// 40 = 0x28
    unsigned int _isDeletion:1;	// 40 = 0x28
    NSDictionary *_originalLocations;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000049575
@property(copy, nonatomic) NSDictionary *originalLocations; // @synthesize originalLocations=_originalLocations;
- (id)_storeToMessagesMappingWithMessages:(id)arg1;	// IMP=0x00100000000492c0
- (void)_notifyStoresOfTransferedMessages:(id)arg1 failedMessages:(id)arg2;	// IMP=0x0010000000048da0
- (void)setIsDeletion:(_Bool)arg1;	// IMP=0x0010000000048d85
- (id)localizedShortOperationDescription;	// IMP=0x0010000000048d05
- (id)localizedErrorTitleForMessageCount:(unsigned long long)arg1;	// IMP=0x0010000000048c53
- (id)localizedErrorDescriptionForMessageCount:(unsigned long long)arg1;	// IMP=0x0010000000048ab3
- (id)description;	// IMP=0x0010000000048a62
- (_Bool)willFlag;	// IMP=0x0010000000048a5a
- (_Bool)willUnflag;	// IMP=0x0010000000048a52
- (_Bool)willMarkUnread;	// IMP=0x0010000000048a4a
- (_Bool)willMarkRead;	// IMP=0x0010000000048a42
- (_Bool)commitToMessages:(id)arg1 failures:(id)arg2 newMessages:(id)arg3;	// IMP=0x0010000000047df4
- (id)applyPendingChangeToObjects:(id)arg1;	// IMP=0x0010000000047d58
- (id)destination;	// IMP=0x0010000000047d43
- (id)initWithSpecialDestination:(int)arg1 markAsRead:(_Bool)arg2 deleteIfSame:(_Bool)arg3;	// IMP=0x0010000000047cfe
- (id)initWithDestination:(id)arg1 markAsRead:(_Bool)arg2;	// IMP=0x0010000000047b8f
- (id)init;	// IMP=0x0010000000047b40

@end

