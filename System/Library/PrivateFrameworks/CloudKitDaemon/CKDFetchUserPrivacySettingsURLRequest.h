//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class CKDPUserPrivacySettings;

@interface CKDFetchUserPrivacySettingsURLRequest : CKDURLRequest
{
    CKDPUserPrivacySettings *_userPrivacySettings;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001e23f4
@property(retain, nonatomic) CKDPUserPrivacySettings *userPrivacySettings; // @synthesize userPrivacySettings=_userPrivacySettings;
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x00000000001e22e4
- (id)generateRequestOperations;	// IMP=0x00000000001e2216
- (id)requestOperationClasses;	// IMP=0x00000000001e21aa
- (long long)databaseScope;	// IMP=0x00000000001e219f

@end

