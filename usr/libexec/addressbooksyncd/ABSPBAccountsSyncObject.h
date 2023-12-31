//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface ABSPBAccountsSyncObject : PBCodable
{
    NSString *_primaryiCloudAccountCardDAVAccountExternalIdentifier;	// 8 = 0x8
    _Bool _localContainerEnabled;	// 16 = 0x10
    struct {
        unsigned int localContainerEnabled:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0020000000024782
@property(retain, nonatomic) NSString *primaryiCloudAccountCardDAVAccountExternalIdentifier; // @synthesize primaryiCloudAccountCardDAVAccountExternalIdentifier=_primaryiCloudAccountCardDAVAccountExternalIdentifier;
@property(nonatomic) _Bool localContainerEnabled; // @synthesize localContainerEnabled=_localContainerEnabled;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000246ea
- (unsigned long long)hash;	// IMP=0x001000000002469d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000245cd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002453d
- (void)copyTo:(id)arg1;	// IMP=0x00100000000244da
- (void)writeTo:(id)arg1;	// IMP=0x0010000000024475
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000024468
- (id)dictionaryRepresentation;	// IMP=0x001000000002418c
- (id)description;	// IMP=0x00100000000240dd
@property(readonly, nonatomic) _Bool hasPrimaryiCloudAccountCardDAVAccountExternalIdentifier;
@property(nonatomic) _Bool hasLocalContainerEnabled;

@end

