//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCSMessageOperation, NSSet;

@interface MailMessageChangeSet
{
    NSSet *_messagesSet;	// 24 = 0x18
    NSSet *_messagesMarkedRead;	// 32 = 0x20
    NSSet *_messagesMarkedUnread;	// 40 = 0x28
    NSSet *_messagesUnflagged;	// 48 = 0x30
    NSSet *_messagesFlagged;	// 56 = 0x38
    MCSMessageOperation *_operation;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000003fc47
@property(readonly) MCSMessageOperation *operation; // @synthesize operation=_operation;
- (id)_unreadCountAdjustmentByMailboxForCriterion:(id)arg1;	// IMP=0x001000000003f636
- (unsigned long long)adjustUnreadCount:(unsigned long long)arg1 withCriterion:(id)arg2;	// IMP=0x001000000003f43d
- (id)URLStrings;	// IMP=0x001000000003f1ba
- (id)accounts;	// IMP=0x001000000003ef88
- (id)stores;	// IMP=0x001000000003ed80
- (id)copyChangeSetForFullPath:(id)arg1;	// IMP=0x001000000003e812
- (id)description;	// IMP=0x001000000003e7b1
- (_Bool)commit;	// IMP=0x001000000003e620
- (id)applyPendingChangeToObjects:(id)arg1;	// IMP=0x001000000003e3a7
- (id)messagesSet;	// IMP=0x001000000003e392
- (void)_populateMessageSets;	// IMP=0x001000000003dd18
- (long long)localizedChangeDescriptionPriority;	// IMP=0x001000000003dcdc
- (id)localizedChangeDescription;	// IMP=0x001000000003dcbf
- (id)localizedErrorTitle;	// IMP=0x001000000003dc7b
- (id)localizedErrorDescription;	// IMP=0x001000000003dc37
- (void)_setMessages:(id)arg1;	// IMP=0x001000000003d994
- (id)initWithMessages:(id)arg1 unreadMessages:(id)arg2 readMessages:(id)arg3 flaggedMessages:(id)arg4 unflaggedMessages:(id)arg5 operation:(id)arg6;	// IMP=0x001000000003d766
- (id)initWithMessages:(id)arg1 operation:(id)arg2;	// IMP=0x001000000003d640

@end
