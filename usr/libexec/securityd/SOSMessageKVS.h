//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SOSMessageKVS
{
    struct __CFDictionary *pending_changes;	// 32 = 0x20
}

@property struct __CFDictionary *pending_changes; // @synthesize pending_changes;
- (_Bool)SOSTransportMessageSendMessages:(id)arg1 pm:(struct __CFDictionary *)arg2 err:(struct __CFError **)arg3;	// IMP=0x001000000023b734
- (_Bool)SOSTransportMessageSyncWithPeers:(id)arg1 p:(struct __CFSet *)arg2 err:(struct __CFError **)arg3;	// IMP=0x001000000023b649
- (struct __CFDictionary *)SOSTransportMessageHandlePeerMessageReturnsHandledCopy:(id)arg1 peerMessages:(struct __CFDictionary *)arg2 err:(struct __CFError **)arg3;	// IMP=0x001000000023b505
- (_Bool)SOSTransportMessageCleanupAfterPeerMessages:(id)arg1 peers:(struct __CFDictionary *)arg2 err:(struct __CFError **)arg3;	// IMP=0x001000000023b3f4
- (long long)SOSTransportMessageGetTransportType:(id)arg1 err:(struct __CFError **)arg2;	// IMP=0x001000000023b3e9
- (_Bool)SOSTransportMessageKVSAppendKeyInterest:(id)arg1 ak:(struct __CFArray *)arg2 firstUnlock:(struct __CFArray *)arg3 unlocked:(struct __CFArray *)arg4 err:(struct __CFError **)arg5;	// IMP=0x001000000023b1d1
- (id)SOSTransportMessageGetAccount;	// IMP=0x001000000023b1c3
- (void *)SOSTransportMessageGetEngine;	// IMP=0x001000000023b1b9
- (struct __CFString *)SOSTransportMessageGetCircleName;	// IMP=0x001000000023b1af
- (long long)SOSTransportMessageGetTransportType;	// IMP=0x001000000023b1a4
- (void)dealloc;	// IMP=0x001000000023b151
- (id)initWithAccount:(id)arg1 andName:(id)arg2;	// IMP=0x001000000023b00b

@end
