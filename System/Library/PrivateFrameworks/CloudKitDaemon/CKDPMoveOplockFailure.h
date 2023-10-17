//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRecordIdentifier;

@interface CKDPMoveOplockFailure : PBCodable
{
    CKDPRecordIdentifier *_movedRecordDestinationIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000172b11
@property(retain, nonatomic) CKDPRecordIdentifier *movedRecordDestinationIdentifier; // @synthesize movedRecordDestinationIdentifier=_movedRecordDestinationIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000172a8f
- (unsigned long long)hash;	// IMP=0x0000000000172a72
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001729d8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000172960
- (void)copyTo:(id)arg1;	// IMP=0x0000000000172936
- (void)writeTo:(id)arg1;	// IMP=0x0000000000172912
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000172905
- (id)dictionaryRepresentation;	// IMP=0x00000000001726bb
- (id)description;	// IMP=0x000000000017260c
@property(readonly, nonatomic) _Bool hasMovedRecordDestinationIdentifier;

@end
