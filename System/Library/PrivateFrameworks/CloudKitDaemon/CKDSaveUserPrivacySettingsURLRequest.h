//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class NSString;

@interface CKDSaveUserPrivacySettingsURLRequest : CKDURLRequest
{
    NSString *_bundleID;	// 8 = 0x8
    long long _discoverableTrinary;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000321a93
@property(nonatomic) long long discoverableTrinary; // @synthesize discoverableTrinary=_discoverableTrinary;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x0000000000321a47
- (id)generateRequestOperations;	// IMP=0x0000000000321856
- (_Bool)requiresTokenRegistration;	// IMP=0x000000000032184e
- (id)requestOperationClasses;	// IMP=0x00000000003217e2
- (long long)databaseScope;	// IMP=0x00000000003217d7
- (void)setDiscoverable:(_Bool)arg1;	// IMP=0x00000000003217ae
- (id)initWithOperation:(id)arg1;	// IMP=0x000000000032176b

@end
