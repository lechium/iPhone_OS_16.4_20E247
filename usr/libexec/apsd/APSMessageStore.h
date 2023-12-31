//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface APSMessageStore : NSObject
{
    _Bool _databaseOpen;	// 8 = 0x8
    _Bool _pendingDatabaseClose;	// 9 = 0x9
}

+ (id)sharedInstance;	// IMP=0x004000000008a5da
- (id)_onQueueSubscribedChannelsForRecords:(struct __CFArray *)arg1;	// IMP=0x002000000008dc34
- (id)_onQueueSubscribedChannelsForRecord:(struct _APSChannelRecordStruct *)arg1;	// IMP=0x001000000008db97
- (id)allRegisteredChannels;	// IMP=0x001000000008d9ea
- (id)allRegisteredChannelsForEnvironment:(id)arg1 tokenName:(id)arg2;	// IMP=0x001000000008d7ac
- (id)allRegisteredChannelsForTopic:(id)arg1 environment:(id)arg2 tokenName:(id)arg3;	// IMP=0x001000000008d40f
- (id)lookupChannelWithChannelID:(id)arg1 andPushTopic:(id)arg2 environment:(id)arg3 tokenName:(id)arg4;	// IMP=0x001000000008d003
- (void)updateChannel:(id)arg1;	// IMP=0x001000000008cf01
- (void)deleteChannelID:(id)arg1 forTopic:(id)arg2 environment:(id)arg3 tokenName:(id)arg4;	// IMP=0x001000000008cd0b
- (void)storeChannel:(id)arg1;	// IMP=0x001000000008caa2
- (void)markAllOutgoingMessagesAsUnsent;	// IMP=0x001000000008ca7f
- (void)markMessageWithGUID:(id)arg1 asSent:(_Bool)arg2;	// IMP=0x001000000008c8d5
- (void)deleteOutgoingMessageWithGUID:(id)arg1;	// IMP=0x001000000008c7af
- (id)storeOutgoingMessage:(id)arg1 environment:(id)arg2;	// IMP=0x001000000008c3bb
- (id)incomingHighPriorityMessagesForEnvironment:(id)arg1 pushTokens:(id)arg2;	// IMP=0x001000000008c39c
- (id)incomingMessagesForTopic:(id)arg1 priority:(long long)arg2 environment:(id)arg3 pushTokens:(id)arg4;	// IMP=0x001000000008bf46
- (id)_onQueueIncomingMessagesFromRecords:(struct __CFArray *)arg1;	// IMP=0x001000000008ba1e
- (id)pendingLowPriorityIncomingMessageTopicsForEnvironment:(id)arg1 pushTokens:(id)arg2;	// IMP=0x001000000008b701
- (void)deleteStaleIncomingLowPriorityMessagesForEnvironment:(id)arg1;	// IMP=0x001000000008b5f9
- (void)deleteLowPriorityIncomingMessagesForTopic:(id)arg1 environment:(id)arg2 pushTokens:(id)arg3;	// IMP=0x001000000008b4ed
- (void)_onQueueDeleteLowPriorityIncomingMessagesForTopic:(id)arg1 environment:(id)arg2 pushTokens:(id)arg3;	// IMP=0x001000000008b2b1
- (void)deleteIncomingMessageWithGUID:(id)arg1;	// IMP=0x001000000008b217
- (void)storeIncomingMessage:(id)arg1 environment:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000008ad73
- (void)performBlock:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2;	// IMP=0x001000000008ac59
- (void)performBlock:(CDUnknownBlockType)arg1 afterDelay:(double)arg2;	// IMP=0x001000000008ab40
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000008aa2f
- (void)openDatabase;	// IMP=0x001000000008a999
- (void)closeDatabase;	// IMP=0x001000000008a914
- (void)_setDatabaseCloseTimer;	// IMP=0x001000000008a8ca
- (void)_clearDatabaseCloseTimer;	// IMP=0x001000000008a88f
- (void)__closeDatabase;	// IMP=0x001000000008a77c
- (id)init;	// IMP=0x001000000008a62f

@end

