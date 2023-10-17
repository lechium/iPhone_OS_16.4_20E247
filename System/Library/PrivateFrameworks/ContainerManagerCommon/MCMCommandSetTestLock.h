//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol MCMXPCMessage;

__attribute__((visibility("hidden")))
@interface MCMCommandSetTestLock
{
    _Bool _enable;	// 8 = 0x8
    unsigned long long _requestedLocks;	// 16 = 0x10
    id <MCMXPCMessage> _message;	// 24 = 0x18
}

+ (Class)incomingMessageClass;	// IMP=0x0010000000073a2c
+ (unsigned long long)command;	// IMP=0x00100000000739f6
- (void).cxx_destruct;	// IMP=0x00000000000739b8
@property(readonly, nonatomic) id <MCMXPCMessage> message; // @synthesize message=_message;
@property(readonly, nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(readonly, nonatomic) unsigned long long requestedLocks; // @synthesize requestedLocks=_requestedLocks;
- (void)execute;	// IMP=0x000000000007344f
- (_Bool)preflightClientAllowed;	// IMP=0x00000000000733b6
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;	// IMP=0x00000000000732c4

@end
