//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMContainerIdentity;

__attribute__((visibility("hidden")))
@interface MCMCommandDeletePluginDataContainerContent
{
    MCMContainerIdentity *_containerIdentity;	// 8 = 0x8
}

+ (Class)incomingMessageClass;	// IMP=0x0010000000032a46
+ (unsigned long long)command;	// IMP=0x0010000000032a10
- (void).cxx_destruct;	// IMP=0x00000000000329d2
@property(readonly, nonatomic) MCMContainerIdentity *containerIdentity; // @synthesize containerIdentity=_containerIdentity;
- (void)execute;	// IMP=0x00000000000327d3
- (_Bool)preflightClientAllowed;	// IMP=0x00000000000326f4
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;	// IMP=0x0000000000032638

@end
