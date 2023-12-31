//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMContainerIdentity, NSString;

__attribute__((visibility("hidden")))
@interface MCMCommandDeleteUserManagedAsset
{
    MCMContainerIdentity *_containerIdentity;	// 8 = 0x8
    NSString *_sourceRelativePath;	// 16 = 0x10
}

+ (Class)incomingMessageClass;	// IMP=0x0010000000083ec3
+ (unsigned long long)command;	// IMP=0x0010000000083e8d
- (void).cxx_destruct;	// IMP=0x0000000000083e39
@property(readonly, nonatomic) NSString *sourceRelativePath; // @synthesize sourceRelativePath=_sourceRelativePath;
@property(readonly, nonatomic) MCMContainerIdentity *containerIdentity; // @synthesize containerIdentity=_containerIdentity;
- (void)execute;	// IMP=0x00000000000831d3
- (_Bool)preflightClientAllowed;	// IMP=0x000000000008313a
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;	// IMP=0x000000000008304f

@end

