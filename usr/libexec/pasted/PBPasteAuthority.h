//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UISTransform3DGrader;
@protocol OS_tcc_server, OS_tcc_service;

@interface PBPasteAuthority : NSObject
{
    UISTransform3DGrader *_layerGrader;	// 8 = 0x8
    UISTransform3DGrader *_contentsGrader;	// 16 = 0x10
    unsigned long long _copyAlienExpiryPeriod;	// 24 = 0x18
    NSObject<OS_tcc_server> *_tccServer;	// 32 = 0x20
    NSObject<OS_tcc_service> *_tccService;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000008055
- (const struct PBPreliminaryPasteAccessInfo *)preliminaryAccessForPasteboard:(id)arg1 auditTokenInfo:(id)arg2 authenticationMessage:(id)arg3 sharingToken:(id)arg4 dataOwner:(long long)arg5;	// IMP=0x0010000000007d10
- (unsigned long long)accessToPasteboard:(id)arg1 auditTokenInfo:(id)arg2 authenticationMessage:(id)arg3 sharingToken:(id)arg4 dataOwner:(long long)arg5;	// IMP=0x0010000000007b44
- (void)recordInteractivePasteAuthorizationPromptActivityForAuditTokenInfo:(id)arg1;	// IMP=0x00100000000079d8
- (id)tccIdentityForAuditTokenInfo:(id)arg1;	// IMP=0x001000000000773e
- (id)tccSyncMessageOptions;	// IMP=0x0010000000007708
- (unsigned long long)tccAuthorizationRightForAuditTokenInfo:(id)arg1 encounteredError:(_Bool *)arg2;	// IMP=0x00100000000073a0
- (unsigned long long)isPasteAuthorizedForAuditTokenInfo:(id)arg1 pasteboard:(id)arg2 currentTimestamp:(unsigned long long)arg3;	// IMP=0x001000000000737c
- (unsigned long long)pasteAccessFromTCCForAuditTokenInfo:(id)arg1;	// IMP=0x00100000000072d0
- (_Bool)isSharingTokenValidForPasteboard:(id)arg1 token:(id)arg2;	// IMP=0x00100000000071a4
- (unsigned long long)pasteLegibleForPasteboard:(id)arg1 authenticationMessage:(id)arg2 auditTokenInfo:(id)arg3;	// IMP=0x001000000000657e
- (unsigned long long)isPasteAuthenticForAuthenticationMessage:(id)arg1 auditTokenInfo:(id)arg2 currentTimestamp:(unsigned long long)arg3;	// IMP=0x001000000000615a
- (unsigned long long)isPasteNativeForPasteboard:(id)arg1 auditTokenInfo:(id)arg2;	// IMP=0x001000000000613e
- (unsigned long long)isPasteManageableForPasteboard:(id)arg1 auditTokenInfo:(id)arg2 dataOwner:(long long)arg3;	// IMP=0x0010000000006012
- (unsigned long long)isPasteTimelyForPasteboard:(id)arg1 currentTimestamp:(unsigned long long)arg2;	// IMP=0x0010000000005f2a
- (unsigned long long)isPasteExemptForPasteboard:(id)arg1 auditTokenInfo:(id)arg2;	// IMP=0x0010000000005ed3
- (id)init;	// IMP=0x0010000000005ce8

@end
