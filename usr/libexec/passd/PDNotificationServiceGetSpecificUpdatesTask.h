//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PKPaymentWebServiceConfiguration;

@interface PDNotificationServiceGetSpecificUpdatesTask
{
    NSString *_dpanIdentifier;	// 40 = 0x28
    NSString *_lastUpdatedTag;	// 48 = 0x30
    long long _credentialType;	// 56 = 0x38
    PKPaymentWebServiceConfiguration *_webServiceConfiguration;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000002dafcf
+ (id)getSpecificUpdatesTaskWithNotificationService:(id)arg1 dpanIdentifier:(id)arg2 credentialType:(long long)arg3 lastUpdatedTag:(id)arg4 accountIdentifier:(id)arg5 webServiceConfiguration:(id)arg6;	// IMP=0x00100000002dae11
- (void).cxx_destruct;	// IMP=0x00200000002dbac5
@property(retain, nonatomic) PKPaymentWebServiceConfiguration *webServiceConfiguration; // @synthesize webServiceConfiguration=_webServiceConfiguration;
@property(nonatomic) long long credentialType; // @synthesize credentialType=_credentialType;
@property(retain, nonatomic) NSString *lastUpdatedTag; // @synthesize lastUpdatedTag=_lastUpdatedTag;
@property(retain, nonatomic, setter=setDPANIdentifier:) NSString *dpanIdentifier; // @synthesize dpanIdentifier=_dpanIdentifier;
- (_Bool)pertainsToNotificationService:(id)arg1 andDPANIdentifier:(id)arg2;	// IMP=0x00100000002db95d
- (_Bool)matchesTask:(id)arg1;	// IMP=0x00100000002db828
- (id)description;	// IMP=0x00100000002db678
- (id)panIdentifierName;	// IMP=0x00100000002db5d4
- (_Bool)networkForcesDPANEndpoint;	// IMP=0x00100000002db49f
- (id)panEndpoint;	// IMP=0x00100000002db439
- (id)endpointComponents;	// IMP=0x00100000002db2a5
- (id)queryFields;	// IMP=0x00100000002db202
- (long long)taskType;	// IMP=0x00100000002db1f7
- (_Bool)isValid;	// IMP=0x00100000002db165
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002db0c6
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002dafd7
- (id)initWithNotificationService:(id)arg1 dpanIdentifier:(id)arg2 credentialType:(long long)arg3 lastUpdatedTag:(id)arg4 accountIdentifier:(id)arg5 webServiceConfiguration:(id)arg6;	// IMP=0x00100000002daee6

@end

