//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMPolicyiCloudAccountDeclaration.h>

@class NSString;

@interface CEMPolicyiCloudAccountDeclaration (DMDAdditions)
- (id)dmf_statusForResult:(id)arg1 context:(id)arg2;	// IMP=0x0020000000008900
- (id)dmf_removeRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000087a7
- (id)dmf_replaceRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000008795
- (id)dmf_installRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000084cb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

