//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PDRevisionRequestedNotificationTrigger
{
}

- (_Bool)shouldTriggerNotificationFromCurrentState:(id)arg1 toNextState:(id)arg2;	// IMP=0x0040000000051a07
- (void)collaborationStateWillChange:(id)arg1;	// IMP=0x00100000000512a1
- (id)notificationDataWithDatabase:(id)arg1 recipient:(id)arg2 attachmentID:(id)arg3;	// IMP=0x0010000000050cf4
- (void)dealloc;	// IMP=0x0010000000050c7f
- (id)initWithDatabase:(id)arg1;	// IMP=0x0010000000050bee

@end

