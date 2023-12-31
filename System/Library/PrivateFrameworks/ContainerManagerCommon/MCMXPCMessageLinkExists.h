//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMContainerIdentity;

__attribute__((visibility("hidden")))
@interface MCMXPCMessageLinkExists
{
    MCMContainerIdentity *_containerAIdentity;	// 8 = 0x8
    MCMContainerIdentity *_containerBIdentity;	// 16 = 0x10
    unsigned long long _attributes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000039782
@property(readonly, nonatomic) unsigned long long attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) MCMContainerIdentity *containerBIdentity; // @synthesize containerBIdentity=_containerBIdentity;
@property(readonly, nonatomic) MCMContainerIdentity *containerAIdentity; // @synthesize containerAIdentity=_containerAIdentity;
- (unsigned int)disposition;	// IMP=0x0000000000039645
- (id)initWithXPCObject:(id)arg1 context:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x00000000000390cd

@end

