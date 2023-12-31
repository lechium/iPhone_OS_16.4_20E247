//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIWebClip;

@interface MCNewWebClipPayloadHandler
{
    UIWebClip *_setAsideClip;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000002a60f
- (void)unsetAside;	// IMP=0x001000000002a52d
- (void)setAside;	// IMP=0x001000000002a3cd
- (_Bool)isInstalled;	// IMP=0x001000000002a2ee
- (void)remove;	// IMP=0x001000000002a17a
- (id)_findInstalledClipWithIdentifier:(id)arg1;	// IMP=0x0010000000029f91
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x0010000000029957
- (id)savedWebClipIdentifier;	// IMP=0x0010000000029896

@end

