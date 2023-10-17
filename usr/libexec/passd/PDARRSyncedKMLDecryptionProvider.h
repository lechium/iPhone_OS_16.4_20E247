//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PDARRSyncedKMLDecryptionProvider : NSObject
{
}

- (_Bool)requiresNFSESessionForOperation:(unsigned long long)arg1;	// IMP=0x002000000026f20a
- (void)requirementRegistrationSuccess:(id)arg1 serverKeyMaterial:(id)arg2 forRequirement:(id)arg3 context:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000026f1f9
- (void)requirementRegistrationFailed:(id)arg1 forRequirement:(id)arg2 context:(id)arg3;	// IMP=0x001000000026f1f3
- (void)isRegisteredForRequirement:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000026f1e0
- (void)generateKeyMaterialForRequirement:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000026ef74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
