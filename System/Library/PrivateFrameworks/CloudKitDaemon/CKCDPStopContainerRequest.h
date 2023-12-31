//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface CKCDPStopContainerRequest : PBRequest
{
    NSString *_containerName;	// 8 = 0x8
    NSString *_environment;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000254c5d
@property(retain, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSString *containerName; // @synthesize containerName=_containerName;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000254bb0
- (unsigned long long)hash;	// IMP=0x0000000000254b63
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000254a9b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002549fd
- (void)copyTo:(id)arg1;	// IMP=0x000000000025499a
- (Class)responseClass;	// IMP=0x0000000000254989
- (unsigned int)requestTypeCode;	// IMP=0x000000000025497e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000254921
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000025477b
- (id)dictionaryRepresentation;	// IMP=0x00000000002546f8
- (id)description;	// IMP=0x0000000000254649
@property(readonly, nonatomic) _Bool hasEnvironment;
@property(readonly, nonatomic) _Bool hasContainerName;

@end

