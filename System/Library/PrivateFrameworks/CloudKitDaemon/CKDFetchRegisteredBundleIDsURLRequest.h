//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@interface CKDFetchRegisteredBundleIDsURLRequest : CKDURLRequest
{
    CDUnknownBlockType _bundleIDsFetchedBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000e8f9
@property(copy, nonatomic) CDUnknownBlockType bundleIDsFetchedBlock; // @synthesize bundleIDsFetchedBlock=_bundleIDsFetchedBlock;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x000000000000e826
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x000000000000e70f
- (id)generateRequestOperations;	// IMP=0x000000000000e535
- (id)sourceApplicationSecondaryIdentifier;	// IMP=0x000000000000e52d
- (id)applicationBundleIdentifierForNetworkAttribution;	// IMP=0x000000000000e520
- (id)applicationBundleIdentifierForContainerAccess;	// IMP=0x000000000000e513
- (_Bool)requiresTokenRegistration;	// IMP=0x000000000000e50b
- (id)requestOperationClasses;	// IMP=0x000000000000e49f

@end
