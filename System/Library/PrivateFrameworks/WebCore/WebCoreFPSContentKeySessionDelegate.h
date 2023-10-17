//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebCoreFPSContentKeySessionDelegate : NSObject
{
    struct AVContentKeySessionDelegateClient *_parent;	// 8 = 0x8
}

- (void)contentKeySession:(id)arg1 externalProtectionStatusDidChangeForContentKeyRequest:(id)arg2;	// IMP=0x0000000000107aa0
- (void)contentKeySessionContentProtectionSessionIdentifierDidChange:(id)arg1;	// IMP=0x0000000000107a60
- (_Bool)contentKeySession:(id)arg1 shouldRetryContentKeyRequest:(id)arg2 reason:(id)arg3;	// IMP=0x0000000000107a30
- (void)contentKeySession:(id)arg1 contentKeyRequestDidSucceed:(id)arg2;	// IMP=0x0000000000107a10
- (void)contentKeySession:(id)arg1 contentKeyRequest:(id)arg2 didFailWithError:(id)arg3;	// IMP=0x00000000001079f0
- (void)contentKeySession:(id)arg1 didProvideContentKeyRequests:(id)arg2 forInitializationData:(id)arg3;	// IMP=0x00000000001077e0
- (void)contentKeySession:(id)arg1 didUpdatePersistableContentKey:(id)arg2 forContentKeyIdentifier:(id)arg3;	// IMP=0x00000000001077d0
- (void)contentKeySession:(id)arg1 didProvidePersistableContentKeyRequest:(id)arg2;	// IMP=0x00000000001077b0
- (void)contentKeySession:(id)arg1 didProvideRenewingContentKeyRequest:(id)arg2;	// IMP=0x0000000000107790
- (void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2;	// IMP=0x0000000000107770
- (void)invalidate;	// IMP=0x0000000000107760
- (id)initWithParent:(struct AVContentKeySessionDelegateClient *)arg1;	// IMP=0x0000000000107720

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
