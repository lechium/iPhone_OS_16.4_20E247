//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet;

@interface MCNewDefaultsPayloadHandler
{
    NSMutableSet *_changedDomains;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000005b579
@property(retain, nonatomic) NSMutableSet *changedDomains; // @synthesize changedDomains=_changedDomains;
- (void)didRemoveOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x001000000005b4f9
- (void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x001000000005b49e
- (void)unsetAside;	// IMP=0x001000000005b48c
- (void)setAside;	// IMP=0x001000000005b47a
- (void)remove;	// IMP=0x001000000005b40e
- (void)_remove;	// IMP=0x001000000005b114
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x001000000005b04f
- (_Bool)_install;	// IMP=0x001000000005acec
- (id)initWithPayload:(id)arg1 profileHandler:(id)arg2;	// IMP=0x001000000005ac8f

@end

