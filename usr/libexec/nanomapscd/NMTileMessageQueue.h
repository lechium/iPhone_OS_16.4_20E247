//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLock, NSMutableDictionary;

@interface NMTileMessageQueue
{
    NSMutableDictionary *_requestIdentifierToMessages;	// 8 = 0x8
    NSMutableDictionary *_requestIdentifierToReply;	// 16 = 0x10
    NSLock *_requestIdentifierMapLock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000012e07
- (_Bool)removeAllForRequestIdentifier:(id)arg1;	// IMP=0x0010000000012b5b
- (_Bool)removeReplyForRequestIdentifier:(id)arg1;	// IMP=0x0010000000012a17
- (_Bool)removeMessageForRequestIdentifier:(id)arg1;	// IMP=0x00100000000127cf
- (void)dequeueMessageIfPossible:(CDUnknownBlockType)arg1 orReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001243d
- (void)enqueueReply:(id)arg1 forMessage:(id)arg2 options:(id)arg3;	// IMP=0x0010000000012342
- (void)enqueueMessage:(id)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000012149
- (id)init;	// IMP=0x0010000000012096

@end
