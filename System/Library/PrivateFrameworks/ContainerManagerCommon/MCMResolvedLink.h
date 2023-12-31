//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMConcreteContainerIdentityForLibsystem;

__attribute__((visibility("hidden")))
@interface MCMResolvedLink
{
    MCMConcreteContainerIdentityForLibsystem *_originContainerIdentityForLibsystem;	// 40 = 0x28
    MCMConcreteContainerIdentityForLibsystem *_containerIdentityForLibsystem;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000bf133
@property(readonly, nonatomic) MCMConcreteContainerIdentityForLibsystem *containerIdentityForLibsystem; // @synthesize containerIdentityForLibsystem=_containerIdentityForLibsystem;
@property(readonly, nonatomic) MCMConcreteContainerIdentityForLibsystem *originContainerIdentityForLibsystem; // @synthesize originContainerIdentityForLibsystem=_originContainerIdentityForLibsystem;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000beff7
- (id)description;	// IMP=0x00000000000beef7
- (struct container_link_s *)createLibsystemLinkWithError:(unsigned long long *)arg1;	// IMP=0x00000000000bedc4
- (id)initWithLibsystemLink:(struct container_link_s *)arg1 defaultUserIdentity:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x00000000000bec2d
- (id)initWithOriginContainerIdentityForLibsystem:(id)arg1 containerIdentityForLibsystem:(id)arg2 attributes:(unsigned long long)arg3 implied:(_Bool)arg4;	// IMP=0x00000000000beb5b

@end

