//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface STRemoteManagementRequest : CEMPayloadBase
{
    NSString *_requestUUID;	// 16 = 0x10
    NSString *_requestType;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000097bd1
+ (id)requestForPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000977f0
- (void).cxx_destruct;	// IMP=0x0020000000097f64
@property(copy, nonatomic) NSString *requestType; // @synthesize requestType=_requestType;
@property(copy, nonatomic) NSString *requestUUID; // @synthesize requestUUID=_requestUUID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000097e8b
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000097c52
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000097bd9
- (id)serialize;	// IMP=0x0010000000097b14
- (_Bool)loadRequestFromDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000979db

@end

