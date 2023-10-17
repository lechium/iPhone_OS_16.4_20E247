//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAccountManager, AKWebSessionPCSKeyProvider;

@interface AKPCSAuthPushHandler : NSObject
{
    AKWebSessionPCSKeyProvider *_webSessionKeyProvider;	// 8 = 0x8
    AKAccountManager *_accountManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000076721
- (double)_safeTTL:(double)arg1;	// IMP=0x0010000000076667
- (id)_teardownPayloadWithPushMessage:(id)arg1 isArmed:(_Bool)arg2;	// IMP=0x00100000000764e3
- (_Bool)_isPrimaryAccountAltDSID:(id)arg1;	// IMP=0x001000000007646b
- (void)armDeviceWithPCSAuthorizationContextForMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000075f8d
- (id)initWithAccountManager:(id)arg1 webSessionPCSKeyProvider:(id)arg2;	// IMP=0x0010000000075ef4

@end
