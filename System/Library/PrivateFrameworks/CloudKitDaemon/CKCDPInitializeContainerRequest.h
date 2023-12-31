//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface CKCDPInitializeContainerRequest : PBRequest
{
    NSString *_containerName;	// 8 = 0x8
    NSString *_environment;	// 16 = 0x10
    NSString *_path;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000327042
@property(retain, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *containerName; // @synthesize containerName=_containerName;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000326f50
- (unsigned long long)hash;	// IMP=0x0000000000326ee3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000326deb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000326d27
- (void)copyTo:(id)arg1;	// IMP=0x0000000000326ca4
- (Class)responseClass;	// IMP=0x0000000000326c93
- (unsigned int)requestTypeCode;	// IMP=0x0000000000326c88
- (void)writeTo:(id)arg1;	// IMP=0x0000000000326c0e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000326a7f
- (id)dictionaryRepresentation;	// IMP=0x00000000003269d5
- (id)description;	// IMP=0x0000000000326926
@property(readonly, nonatomic) _Bool hasEnvironment;
@property(readonly, nonatomic) _Bool hasPath;
@property(readonly, nonatomic) _Bool hasContainerName;

@end

