//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsFoundation/CNTask.h>

@class CNChangeHistoryEventFactory, CNSaveRequest;
@protocol CNChangeHistoryEventVisitorPrivate;

__attribute__((visibility("hidden")))
@interface CNSaveRequestVisitationTask : CNTask
{
    CNSaveRequest *_saveRequest;	// 24 = 0x18
    id <CNChangeHistoryEventVisitorPrivate> _visitor;	// 32 = 0x20
    CNChangeHistoryEventFactory *_factory;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000cd7e3
@property(readonly) CNChangeHistoryEventFactory *factory; // @synthesize factory=_factory;
@property(readonly) id <CNChangeHistoryEventVisitorPrivate> visitor; // @synthesize visitor=_visitor;
@property(readonly) CNSaveRequest *saveRequest; // @synthesize saveRequest=_saveRequest;
- (void)sendDifferentMeCardEvent;	// IMP=0x00000000000cd6b5
- (void)sendPreferredContactForImageEvents;	// IMP=0x00000000000cd5d1
- (void)sendPreferredContactForNameEvents;	// IMP=0x00000000000cd4f1
- (void)sendUnlinkContactEvents;	// IMP=0x00000000000cd410
- (void)sendLinkContactsEvents;	// IMP=0x00000000000cd329
- (void)sendRemoveSubgroupFromGroupEvents;	// IMP=0x00000000000cd245
- (void)sendAddSubgroupToGroupEvents;	// IMP=0x00000000000cd161
- (void)sendRemoveMemberFromGroupEvents;	// IMP=0x00000000000cd07d
- (void)sendAddMemberToGroupEvents;	// IMP=0x00000000000ccf99
- (void)sendDeletedGroupEvents;	// IMP=0x00000000000cceb8
- (void)sendUpdatedGroupEvents;	// IMP=0x00000000000ccdd7
- (void)sendAddedGroupEvents;	// IMP=0x00000000000cccf3
- (void)sendDeletedContactEvents;	// IMP=0x00000000000ccc12
- (void)sendUpdatedContactEvents;	// IMP=0x00000000000ccb31
- (void)sendAddedContactEvents;	// IMP=0x00000000000cca4d
- (id)run:(id *)arg1;	// IMP=0x00000000000cc965
- (id)initWithSaveRequest:(id)arg1 visitor:(id)arg2 factory:(id)arg3;	// IMP=0x00000000000cc88d

@end

